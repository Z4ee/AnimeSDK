#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_401B04C8577D73B5;
namespace RPG::GameCore { class LockUISkillOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_055E8F9A63751146_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF5C3F0)
#define CLASS_2_055E8F9A63751146_METHOD_2_058F29950F0A9338_OFFSET UNITYSDK_OFFSET(0xFF5C820)
#define CLASS_2_055E8F9A63751146_METHOD_2_30C793865DCDFA90_OFFSET UNITYSDK_OFFSET(0xFF5CAE0)
#define CLASS_2_055E8F9A63751146_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFF5C430)
#define CLASS_2_055E8F9A63751146_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFF5CC00)
#define CLASS_2_055E8F9A63751146_TICK_OFFSET UNITYSDK_OFFSET(0xFF5CC50)
#define CLASS_2_055E8F9A63751146__CTOR_OFFSET UNITYSDK_OFFSET(0xFF5C3E0)

inline static constexpr unsigned int Class_2_055E8F9A63751146_TypeDefinitionIndex = 52626;

class Class_2_055E8F9A63751146 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LockUISkillOperation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockUISkillOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_058F29950F0A9338(::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>* a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_METHOD_2_058F29950F0A9338_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30C793865DCDFA90(::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>* a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_055E8F9A63751146_METHOD_2_30C793865DCDFA90_OFFSET))(this, a1, a2);
	}
};
