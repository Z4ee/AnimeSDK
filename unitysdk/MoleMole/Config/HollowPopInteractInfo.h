#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowPopInteractOption; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWPOPINTERACTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD702B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowPopInteractInfo_TypeDefinitionIndex = 46289;

	class HollowPopInteractInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::HollowPopInteractOption*>* Options; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPOPINTERACTINFO__CTOR_OFFSET))(this);
		}
	};
}
