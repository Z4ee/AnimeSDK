#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_METHOD_3_118781D4FFA0469B_OFFSET UNITYSDK_OFFSET(0x18EBFE30)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_METHOD_3_79E9909A2ED46BCC_OFFSET UNITYSDK_OFFSET(0x18EBF5A0)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBF590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGraphDynamicFloat_TypeDefinitionIndex = 16630;

	class SwitchRefGraphDynamicFloat : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_118781D4FFA0469B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGraphDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_METHOD_3_118781D4FFA0469B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79E9909A2ED46BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_METHOD_3_79E9909A2ED46BCC_OFFSET))(a1, a2);
		}
	};
}
