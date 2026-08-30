#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_114EA4FCC1B12272_OFFSET UNITYSDK_OFFSET(0x1E1BBF30)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_127B4588871323F5_OFFSET UNITYSDK_OFFSET(0x1E1BC030)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_DB38E4A96E385FA8_OFFSET UNITYSDK_OFFSET(0x1E1BC010)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_E3EC2DAE43ACA6F3_OFFSET UNITYSDK_OFFSET(0x1E1BBFB0)
#define RPG_GAMECORE_TARGETMAPDAMAGEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageAttacker_TypeDefinitionIndex = 23745;

	class TargetMapDamageAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_114EA4FCC1B12272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_114EA4FCC1B12272_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3EC2DAE43ACA6F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_E3EC2DAE43ACA6F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB38E4A96E385FA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_DB38E4A96E385FA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_127B4588871323F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEATTACKER_METHOD_3_127B4588871323F5_OFFSET))(a1, a2);
		}
	};
}
