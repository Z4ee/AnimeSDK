#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_3385F7D2B16C13D1_OFFSET UNITYSDK_OFFSET(0x1DB51C60)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_5217C84EA27847E4_OFFSET UNITYSDK_OFFSET(0x1DB51CA0)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB51C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectToAnchor_TypeDefinitionIndex = 22072;

	class SetAdvEffectToAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3385F7D2B16C13D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectToAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectToAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_3385F7D2B16C13D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5217C84EA27847E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_5217C84EA27847E4_OFFSET))(a1, a2);
		}
	};
}
