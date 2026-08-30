#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class LockBattleOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4F0E5B8E8BE68C3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7EA730)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_5C715D615BCEF8BF_OFFSET UNITYSDK_OFFSET(0x1A7EAB40)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_7F5A09121F2469EC_OFFSET UNITYSDK_OFFSET(0x1A7EABE0)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7EA820)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7EAA90)
#define CLASS_2_4F0E5B8E8BE68C3C_TICK_OFFSET UNITYSDK_OFFSET(0x1A7EAAE0)
#define CLASS_2_4F0E5B8E8BE68C3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EA650)

inline static constexpr unsigned int Class_2_4F0E5B8E8BE68C3C_TypeDefinitionIndex = 58353;

class Class_2_4F0E5B8E8BE68C3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LockBattleOperation* OFKGLJOAMLD; // 0x18
	::Class_1_F3391C70DC37088D* NNFJKIPMAAI; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

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

	::System::Void Method_2_5C715D615BCEF8BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_5C715D615BCEF8BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5A09121F2469EC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_7F5A09121F2469EC_OFFSET))(this, a1);
	}
};
