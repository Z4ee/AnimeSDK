#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_VESEQUENCEINFO_GETALLVEKEY_OFFSET UNITYSDK_OFFSET(0x17D308F0)
#define MOLEMOLE_CONFIG_VESEQUENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17D30970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VESequenceInfo_TypeDefinitionIndex = 40694;

	class VESequenceInfo : public ::System::Object
	{
	public:
		::System::String* ChangeVEEffectPath; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* VEPool; // 0x18
		::System::Single RandomStarTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VESEQUENCEINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllVEKey()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VESEQUENCEINFO_GETALLVEKEY_OFFSET))(this);
		}
	};
}
