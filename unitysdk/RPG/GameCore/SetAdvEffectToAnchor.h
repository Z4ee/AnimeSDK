#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_5217C84EA27847E4_OFFSET UNITYSDK_OFFSET(0x18E08400)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_7151B77C6732CA73_OFFSET UNITYSDK_OFFSET(0x18E08380)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18E083D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectToAnchor_TypeDefinitionIndex = 21199;

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

		static ::System::Void Method_3_7151B77C6732CA73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectToAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectToAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_7151B77C6732CA73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5217C84EA27847E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_METHOD_3_5217C84EA27847E4_OFFSET))(a1, a2);
		}
	};
}
