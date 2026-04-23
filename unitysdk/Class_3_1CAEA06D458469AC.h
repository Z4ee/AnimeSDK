#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CreateBattleEventServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1CAEA06D458469AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10039E40)
#define CLASS_3_1CAEA06D458469AC_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0x100399D0)
#define CLASS_3_1CAEA06D458469AC_METHOD_3_8D54FDC80FA22AA7_OFFSET UNITYSDK_OFFSET(0x10039BE0)
#define CLASS_3_1CAEA06D458469AC_METHOD_3_F3D5C4483AAAEF18_OFFSET UNITYSDK_OFFSET(0x100391E0)
#define CLASS_3_1CAEA06D458469AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10038F50)
#define CLASS_3_1CAEA06D458469AC__CTOR_OFFSET UNITYSDK_OFFSET(0x10038E40)
#define CLASS_3_1CAEA06D458469AC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10039ED0)

inline static constexpr unsigned int Class_3_1CAEA06D458469AC_TypeDefinitionIndex = 53527;

class Class_3_1CAEA06D458469AC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEventServant*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventServant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventServant*))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_F3D5C4483AAAEF18(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleGridFightAvatarData* a3, ::RPG::GameCore::StageRow* a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC_METHOD_3_F3D5C4483AAAEF18_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D54FDC80FA22AA7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC_METHOD_3_8D54FDC80FA22AA7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CAEA06D458469AC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
