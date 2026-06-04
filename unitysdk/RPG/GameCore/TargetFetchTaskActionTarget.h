#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0975F12C965F123C_OFFSET UNITYSDK_OFFSET(0x19D0F0F0)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0FB03289B6B443AE_OFFSET UNITYSDK_OFFSET(0x19D0F1B0)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_8C9E75CCB8EB034E_OFFSET UNITYSDK_OFFSET(0x19D07490)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_BB7BC79E918F2D3E_OFFSET UNITYSDK_OFFSET(0x19CFC710)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFC6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTaskActionTarget_TypeDefinitionIndex = 22605;

	class TargetFetchTaskActionTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0975F12C965F123C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0975F12C965F123C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB7BC79E918F2D3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_BB7BC79E918F2D3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C9E75CCB8EB034E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_8C9E75CCB8EB034E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FB03289B6B443AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0FB03289B6B443AE_OFFSET))(a1, a2);
		}
	};
}
