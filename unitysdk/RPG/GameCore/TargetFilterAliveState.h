#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_34B859CE10C0E24A_OFFSET UNITYSDK_OFFSET(0x1D0BE6F0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_80E5135060B96801_OFFSET UNITYSDK_OFFSET(0x1D0BE5E0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_A09B881C660D7ADA_OFFSET UNITYSDK_OFFSET(0x1D0BE620)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_E32E06B639EF9F9B_OFFSET UNITYSDK_OFFSET(0x1D0BE6C0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BE610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterAliveState_TypeDefinitionIndex = 23050;

	class TargetFilterAliveState : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AliveStateMask Mask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80E5135060B96801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_80E5135060B96801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A09B881C660D7ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_A09B881C660D7ADA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E32E06B639EF9F9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_E32E06B639EF9F9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34B859CE10C0E24A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_34B859CE10C0E24A_OFFSET))(a1, a2);
		}
	};
}
