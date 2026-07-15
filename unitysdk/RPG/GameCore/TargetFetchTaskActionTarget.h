#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_00587E4CC739A52F_OFFSET UNITYSDK_OFFSET(0x1D0BD450)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0FB03289B6B443AE_OFFSET UNITYSDK_OFFSET(0x1D0BD550)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_8A6FD34B03CF8C1B_OFFSET UNITYSDK_OFFSET(0x1D0BD530)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_BB7BC79E918F2D3E_OFFSET UNITYSDK_OFFSET(0x1D0BD4D0)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BD4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTaskActionTarget_TypeDefinitionIndex = 23068;

	class TargetFetchTaskActionTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_00587E4CC739A52F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_00587E4CC739A52F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB7BC79E918F2D3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_BB7BC79E918F2D3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A6FD34B03CF8C1B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_8A6FD34B03CF8C1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FB03289B6B443AE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_METHOD_4_0FB03289B6B443AE_OFFSET))(a1, a2);
		}
	};
}
