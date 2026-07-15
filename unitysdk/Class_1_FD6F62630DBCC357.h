#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_8AF99E12A71014CC;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_FD6F62630DBCC357_METHOD_1_0B909AECAD8C1593_OFFSET UNITYSDK_OFFSET(0x1685C0D0)
#define CLASS_1_FD6F62630DBCC357_METHOD_1_9342451C1D334F67_OFFSET UNITYSDK_OFFSET(0x1685BA60)
#define CLASS_1_FD6F62630DBCC357_METHOD_1_FF396CC145481CA0_OFFSET UNITYSDK_OFFSET(0x1685BDB0)
#define CLASS_1_FD6F62630DBCC357__CTOR_OFFSET UNITYSDK_OFFSET(0x1685CD70)

inline static constexpr unsigned int Class_1_FD6F62630DBCC357_TypeDefinitionIndex = 51284;

class Class_1_FD6F62630DBCC357 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_8AF99E12A71014CC*>* Field_1_1; // 0x18
	::System::Byte Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD6F62630DBCC357__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9342451C1D334F67(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>*))((::PBYTE)hIl2Cpp + CLASS_1_FD6F62630DBCC357_METHOD_1_9342451C1D334F67_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FF396CC145481CA0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD6F62630DBCC357_METHOD_1_FF396CC145481CA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B909AECAD8C1593(::RPG::GameCore::TaskContext* a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_FD6F62630DBCC357_METHOD_1_0B909AECAD8C1593_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
