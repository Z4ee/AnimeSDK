#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITSTARTMARBLEGAME_METHOD_3_B4D04122F1DE59C9_OFFSET UNITYSDK_OFFSET(0x1D6AD270)
#define RPG_GAMECORE_WAITSTARTMARBLEGAME_METHOD_3_DBDC9F51050060A8_OFFSET UNITYSDK_OFFSET(0x1D6AD2B0)
#define RPG_GAMECORE_WAITSTARTMARBLEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStartMarbleGame_TypeDefinitionIndex = 21793;

	class WaitStartMarbleGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20
		::RPG::MVector3 LocalPosition; // 0x28
		::RPG::MVector3 localRotation; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4D04122F1DE59C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStartMarbleGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStartMarbleGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME_METHOD_3_B4D04122F1DE59C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DBDC9F51050060A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTARTMARBLEGAME_METHOD_3_DBDC9F51050060A8_OFFSET))(a1, a2);
		}
	};
}
