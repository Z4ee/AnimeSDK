#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_2280185EF5CA1961_OFFSET UNITYSDK_OFFSET(0x1E827620)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_DA87E354DCF1BB7A_OFFSET UNITYSDK_OFFSET(0x1E8275E0)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E827610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectFrameCaptureMatTex_TypeDefinitionIndex = 22632;

	class SetEffectFrameCaptureMatTex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA87E354DCF1BB7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_DA87E354DCF1BB7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2280185EF5CA1961(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_METHOD_3_2280185EF5CA1961_OFFSET))(a1, a2);
		}
	};
}
