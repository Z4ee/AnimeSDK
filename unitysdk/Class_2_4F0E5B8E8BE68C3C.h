#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class LockBattleOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4F0E5B8E8BE68C3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x927E8C0)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_1650D7D6437FCD61_OFFSET UNITYSDK_OFFSET(0x927EC30)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_2934FD95900E25B5_OFFSET UNITYSDK_OFFSET(0x927ECB0)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x927E9D0)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x927EB80)
#define CLASS_2_4F0E5B8E8BE68C3C_TICK_OFFSET UNITYSDK_OFFSET(0x927EBD0)
#define CLASS_2_4F0E5B8E8BE68C3C__CTOR_OFFSET UNITYSDK_OFFSET(0x927E7E0)

inline static constexpr unsigned int Class_2_4F0E5B8E8BE68C3C_TypeDefinitionIndex = 53676;

class Class_2_4F0E5B8E8BE68C3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LockBattleOperation* Field_2_0; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockBattleOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1650D7D6437FCD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_1650D7D6437FCD61_OFFSET))(this, a1);
	}

	::System::Void Method_2_2934FD95900E25B5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_2934FD95900E25B5_OFFSET))(this, a1);
	}
};
