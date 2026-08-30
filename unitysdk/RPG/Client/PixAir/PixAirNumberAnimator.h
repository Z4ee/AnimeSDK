#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_SETVALUEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xDB1A4F0)
#define RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xDB1A460)
#define RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB1A680)
#define RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR__APPLYTEXT_OFFSET UNITYSDK_OFFSET(0xDB1A560)
#define RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1A810)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNumberAnimator_TypeDefinitionIndex = 78910;

	class PixAirNumberAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _Text; // 0x18
		::UnityEngine::Transform* _HintEffect; // 0x20
		::System::Single _Duration; // 0x28
		::System::Single _CurrentValue; // 0x2C
		::System::Single _TargetValue; // 0x30
		::System::Single _StartValue; // 0x34
		::System::Single _ElapsedTime; // 0x38
		::System::Boolean _IsAnimating; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValueImmediate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_SETVALUEIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR_UPDATE_OFFSET))(this);
		}

		::System::Void _ApplyText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNUMBERANIMATOR__APPLYTEXT_OFFSET))(this);
		}
	};
}
