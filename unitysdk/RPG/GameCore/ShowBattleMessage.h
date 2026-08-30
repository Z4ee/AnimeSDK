#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SHOWBATTLEMESSAGE_METHOD_3_881F5652B06A1AF6_OFFSET UNITYSDK_OFFSET(0x1E0A37F0)
#define RPG_GAMECORE_SHOWBATTLEMESSAGE_METHOD_3_A4A6265D80E12AC4_OFFSET UNITYSDK_OFFSET(0x1E0A3790)
#define RPG_GAMECORE_SHOWBATTLEMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A37D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleMessage_TypeDefinitionIndex = 22234;

	class ShowBattleMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID ContentID; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x28
		::System::Single LifetimeNormal; // 0x30
		::System::Single LifetimeMin; // 0x34
		::System::Boolean WaitShowPageFinish; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A4A6265D80E12AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE_METHOD_3_A4A6265D80E12AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_881F5652B06A1AF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEMESSAGE_METHOD_3_881F5652B06A1AF6_OFFSET))(a1, a2);
		}
	};
}
