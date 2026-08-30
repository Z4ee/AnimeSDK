#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddGridFightTargetEquip; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_93B3A14EF41F6F3C_METHOD_3_13D917A7F4CE091A_OFFSET UNITYSDK_OFFSET(0x15A81E30)
#define CLASS_3_93B3A14EF41F6F3C_METHOD_3_4611ED874756A63A_OFFSET UNITYSDK_OFFSET(0x15A81A00)
#define CLASS_3_93B3A14EF41F6F3C_METHOD_3_5E2635F9327EBE04_OFFSET UNITYSDK_OFFSET(0x15A81B20)
#define CLASS_3_93B3A14EF41F6F3C_METHOD_3_AF2697EDBED6BA81_OFFSET UNITYSDK_OFFSET(0x15A81BC0)
#define CLASS_3_93B3A14EF41F6F3C_METHOD_3_C617E192097D40A8_OFFSET UNITYSDK_OFFSET(0x15A82000)
#define CLASS_3_93B3A14EF41F6F3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A81440)
#define CLASS_3_93B3A14EF41F6F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A81410)

inline static constexpr unsigned int Class_3_93B3A14EF41F6F3C_TypeDefinitionIndex = 55023;

class Class_3_93B3A14EF41F6F3C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddGridFightTargetEquip*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_5E2635F9327EBE04(::RPG::GameCore::GridFightEquipCategory a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_METHOD_3_5E2635F9327EBE04_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_4611ED874756A63A(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_METHOD_3_4611ED874756A63A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_13D917A7F4CE091A(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_METHOD_3_13D917A7F4CE091A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF2697EDBED6BA81(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_METHOD_3_AF2697EDBED6BA81_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_C617E192097D40A8(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_93B3A14EF41F6F3C_METHOD_3_C617E192097D40A8_OFFSET))(this, a1, a2);
	}
};
