#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_39997008EB1A02E8_OFFSET UNITYSDK_OFFSET(0x1DB39A60)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_39D2227DCBE4AC11_OFFSET UNITYSDK_OFFSET(0x1DB39A90)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_80E5135060B96801_OFFSET UNITYSDK_OFFSET(0x1DB39980)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_A09B881C660D7ADA_OFFSET UNITYSDK_OFFSET(0x1DB399C0)
#define RPG_GAMECORE_TARGETFILTERALIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB399B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterAliveState_TypeDefinitionIndex = 23904;

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

		static ::System::Void Method_3_39997008EB1A02E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_39997008EB1A02E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39D2227DCBE4AC11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERALIVESTATE_METHOD_3_39D2227DCBE4AC11_OFFSET))(a1, a2);
		}
	};
}
