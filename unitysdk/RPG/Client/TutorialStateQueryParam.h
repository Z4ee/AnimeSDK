#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_31.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xE302D90)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE302D50)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xE302D70)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xE302DA0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET UNITYSDK_OFFSET(0xE302D60)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xE302D80)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE302D40)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialStateQueryParam_TypeDefinitionIndex = 68239;

	class TutorialStateQueryParam : public ::System::Object
	{
	public:
		::System::Boolean _IsGuide_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::Enum_3_ED790DAC948A65A9_31 _GuideType_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET))(this);
		}

		::System::Void set_IsGuide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET))(this, a1);
		}

		::Enum_3_ED790DAC948A65A9_31 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_31(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Void set_GuideType(::Enum_3_ED790DAC948A65A9_31 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_31))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET))(this, a1);
		}
	};
}
