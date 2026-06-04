#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_2280185EF5CA1961_OFFSET UNITYSDK_OFFSET(0x19C4A290)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_99B199958CA20808_OFFSET UNITYSDK_OFFSET(0x19C4A210)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4A260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectFrameCaptureMatTex_TypeDefinitionIndex = 21641;

	class SetEffectFrameCaptureMatTex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99B199958CA20808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_99B199958CA20808_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2280185EF5CA1961(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_2280185EF5CA1961_OFFSET))(a1, a2);
		}
	};
}
