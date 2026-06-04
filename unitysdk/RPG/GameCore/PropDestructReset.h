#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPDESTRUCTRESET_METHOD_3_4CB1FB3D6F016DCE_OFFSET UNITYSDK_OFFSET(0x19A8BE00)
#define RPG_GAMECORE_PROPDESTRUCTRESET_METHOD_3_5C87F157B85E8958_OFFSET UNITYSDK_OFFSET(0x19A8BF50)
#define RPG_GAMECORE_PROPDESTRUCTRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8BEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestructReset_TypeDefinitionIndex = 19046;

	class PropDestructReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CB1FB3D6F016DCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestructReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestructReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET_METHOD_3_4CB1FB3D6F016DCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C87F157B85E8958(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestructReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestructReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTRESET_METHOD_3_5C87F157B85E8958_OFFSET))(a1, a2);
		}
	};
}
