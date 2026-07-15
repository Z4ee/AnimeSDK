#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_METHOD_3_30AEFFE252751D96_OFFSET UNITYSDK_OFFSET(0x1C2D12C0)
#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_METHOD_3_8741AF86F314763F_OFFSET UNITYSDK_OFFSET(0x1C2D1280)
#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D12B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectTowardAnchor_TypeDefinitionIndex = 21509;

	class SetAdvEffectTowardAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8741AF86F314763F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectTowardAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_METHOD_3_8741AF86F314763F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30AEFFE252751D96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_METHOD_3_30AEFFE252751D96_OFFSET))(a1, a2);
		}
	};
}
