#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBattleSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1D4A6B2CB300D88C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9117730)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_50DECD2691F359CB_OFFSET UNITYSDK_OFFSET(0x9118270)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x9118810)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x9118870)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_C1CE79296908031A_OFFSET UNITYSDK_OFFSET(0x9117780)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91176F0)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_E580E11D6E90EAF7_OFFSET UNITYSDK_OFFSET(0x9117D30)
#define CLASS_2_1D4A6B2CB300D88C_METHOD_2_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x9118880)
#define CLASS_2_1D4A6B2CB300D88C__CTOR_OFFSET UNITYSDK_OFFSET(0x91189A0)

inline static constexpr unsigned int Class_2_1D4A6B2CB300D88C_TypeDefinitionIndex = 49824;

class Class_2_1D4A6B2CB300D88C : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_C1CE79296908031A(::RPG::GameCore::RtBattleSelectTargetStrategy a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::RtBattleSelectTargetStrategy, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_C1CE79296908031A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E580E11D6E90EAF7(::RPG::GameCore::TeamType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_E580E11D6E90EAF7_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_50DECD2691F359CB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_50DECD2691F359CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_2_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1D4A6B2CB300D88C_METHOD_2_EA9B142E5A847C05_OFFSET))(this, a1);
	}
};
