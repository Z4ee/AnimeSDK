#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GeneralGraphicQualityProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GENERALGRAPHICQUALITYPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x107F0CF0)
#define MOLEMOLE_GENERALGRAPHICQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x107F0C10)
#define MOLEMOLE_GENERALGRAPHICQUALITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x107F0DB0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralGraphicQualityProfile_TypeDefinitionIndex = 79637;

	class GeneralGraphicQualityProfile : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GeneralGraphicQualityProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::GeneralGraphicQualityProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}
	};
}
