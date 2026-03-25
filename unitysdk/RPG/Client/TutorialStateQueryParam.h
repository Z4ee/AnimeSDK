#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_26.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA646910)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA6468D0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xA6468F0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xA646920)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET UNITYSDK_OFFSET(0xA6468E0)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0xA646900)
#define RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA6468C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialStateQueryParam_TypeDefinitionIndex = 55722;

	class TutorialStateQueryParam : public ::System::Object
	{
	public:
		::Enum_3_ED790DAC948A65A9_26 _GuideType_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::Boolean _IsGuide_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isGuide)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM__CTOR_OFFSET))(this, id, isGuide);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_ISGUIDE_OFFSET))(this);
		}

		::System::Void set_IsGuide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_ISGUIDE_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_26 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_26(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Void set_GuideType(::Enum_3_ED790DAC948A65A9_26 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSTATEQUERYPARAM_SET_GUIDETYPE_OFFSET))(this, value);
		}
	};
}
