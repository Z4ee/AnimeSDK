#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_18D02933E0E993EF_OFFSET UNITYSDK_OFFSET(0x1D5AA6B0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_687EEEC5AC79169E_OFFSET UNITYSDK_OFFSET(0x1D5AA570)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_9A6BBF47038AF20F_OFFSET UNITYSDK_OFFSET(0x1D5AA610)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_D3D2707BB7C140EB_OFFSET UNITYSDK_OFFSET(0x1D5AA670)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageAttacker_TypeDefinitionIndex = 23735;

	class TargetFetchCurrentDamageAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_687EEEC5AC79169E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_687EEEC5AC79169E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A6BBF47038AF20F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_9A6BBF47038AF20F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3D2707BB7C140EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_D3D2707BB7C140EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18D02933E0E993EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_METHOD_4_18D02933E0E993EF_OFFSET))(a1, a2);
		}
	};
}
