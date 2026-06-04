#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_3AA1BDE1669097C4_OFFSET UNITYSDK_OFFSET(0x19C53D30)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_88AA60530F936F8E_OFFSET UNITYSDK_OFFSET(0x19C53DB0)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19C53D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLocalOffsetAsMoveTarget_TypeDefinitionIndex = 21241;

	class SetLocalOffsetAsMoveTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3AA1BDE1669097C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_3AA1BDE1669097C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88AA60530F936F8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_88AA60530F936F8E_OFFSET))(a1, a2);
		}
	};
}
