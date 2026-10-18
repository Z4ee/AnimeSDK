#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_27C749EA6639A943_OFFSET UNITYSDK_OFFSET(0x1DAB8230)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_68A799B9A154194E_OFFSET UNITYSDK_OFFSET(0x1DAB81F0)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLocalOffsetAsMoveTarget_TypeDefinitionIndex = 22468;

	class SetLocalOffsetAsMoveTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68A799B9A154194E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_68A799B9A154194E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27C749EA6639A943(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_METHOD_3_27C749EA6639A943_OFFSET))(a1, a2);
		}
	};
}
