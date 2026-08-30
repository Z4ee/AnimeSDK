#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBattleSelectTargetStrategy.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D5698FED55395DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D44BA0)
#define CLASS_2_0D5698FED55395DF_METHOD_2_2224E0EF2C1D6819_OFFSET UNITYSDK_OFFSET(0x17D45520)
#define CLASS_2_0D5698FED55395DF_METHOD_2_801C39B8CD647594_OFFSET UNITYSDK_OFFSET(0x17D45120)
#define CLASS_2_0D5698FED55395DF_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x17D45A00)
#define CLASS_2_0D5698FED55395DF_METHOD_2_ABA598A42748A11C_OFFSET UNITYSDK_OFFSET(0x17D44BF0)
#define CLASS_2_0D5698FED55395DF_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x17D45A60)
#define CLASS_2_0D5698FED55395DF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D44B60)
#define CLASS_2_0D5698FED55395DF_METHOD_2_EA9B142E5A847C05_OFFSET UNITYSDK_OFFSET(0x17D45A70)
#define CLASS_2_0D5698FED55395DF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45BB0)

inline static constexpr unsigned int Class_2_0D5698FED55395DF_TypeDefinitionIndex = 54257;

class Class_2_0D5698FED55395DF : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* EFHCOOOBIPF; // 0x18
	::RPG::GameCore::GameEntity* ALOHKAILHIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_ABA598A42748A11C(::RPG::GameCore::RtBattleSelectTargetStrategy a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::RtBattleSelectTargetStrategy, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_ABA598A42748A11C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_801C39B8CD647594(::RPG::GameCore::TeamType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_801C39B8CD647594_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_2224E0EF2C1D6819(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_2224E0EF2C1D6819_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_2_EA9B142E5A847C05(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0D5698FED55395DF_METHOD_2_EA9B142E5A847C05_OFFSET))(this, a1);
	}
};
