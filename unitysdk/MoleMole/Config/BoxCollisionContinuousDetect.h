#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ContinueAttackDetect.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_APPLYVALUESTOCOLLIDERCFG_OFFSET UNITYSDK_OFFSET(0x144D3230)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHODWITHGROUPID_OFFSET UNITYSDK_OFFSET(0x144D3120)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x144D3060)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_COLLIDERCFGFILTERGETTER_OFFSET UNITYSDK_OFFSET(0x144D33E0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144D31E0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144D3330)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144D3370)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x144D2FD0)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x144D3500)
#define MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144D3590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionContinuousDetect_TypeDefinitionIndex = 86214;

	class BoxCollisionContinuousDetect : public ::MoleMole::Config::ContinueAttackDetect
	{
	public:
		::System::Single width; // 0xC0
		::System::Single height; // 0xC4
		::System::Single distance; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::Void AttachPatternMethodWithGroupId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHODWITHGROUPID_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void ApplyValuesToColliderCfg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_APPLYVALUESTOCOLLIDERCFG_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* ColliderCfgFilterGetter()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT_COLLIDERCFGFILTERGETTER_OFFSET))(this);
		}

		::System::Void __base_AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONCONTINUOUSDETECT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
