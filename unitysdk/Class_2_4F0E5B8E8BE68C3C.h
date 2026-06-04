#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class LockBattleOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4F0E5B8E8BE68C3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA837E00)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_7F5A09121F2469EC_OFFSET UNITYSDK_OFFSET(0xA8382F0)
#define CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_AFAE6E13CCD70FD6_OFFSET UNITYSDK_OFFSET(0xA838250)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA837F30)
#define CLASS_2_4F0E5B8E8BE68C3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8381A0)
#define CLASS_2_4F0E5B8E8BE68C3C_TICK_OFFSET UNITYSDK_OFFSET(0xA8381F0)
#define CLASS_2_4F0E5B8E8BE68C3C__CTOR_OFFSET UNITYSDK_OFFSET(0xA837D20)

inline static constexpr unsigned int Class_2_4F0E5B8E8BE68C3C_TypeDefinitionIndex = 54399;

class Class_2_4F0E5B8E8BE68C3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_1; // 0x20
	::RPG::GameCore::LockBattleOperation* Field_2_2; // 0x28

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

	::System::Void Method_2_AFAE6E13CCD70FD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_AFAE6E13CCD70FD6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5A09121F2469EC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4F0E5B8E8BE68C3C_METHOD_2_7F5A09121F2469EC_OFFSET))(this, a1);
	}
};
