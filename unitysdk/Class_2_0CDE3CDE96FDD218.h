#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropAttachMove; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0CDE3CDE96FDD218_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B8F630)
#define CLASS_2_0CDE3CDE96FDD218_METHOD_2_7DB77497DA38E1E0_OFFSET UNITYSDK_OFFSET(0x8B8F6D0)
#define CLASS_2_0CDE3CDE96FDD218_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B8FA70)
#define CLASS_2_0CDE3CDE96FDD218_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8B8F970)
#define CLASS_2_0CDE3CDE96FDD218_TICK_OFFSET UNITYSDK_OFFSET(0x8B8FA10)
#define CLASS_2_0CDE3CDE96FDD218__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8F620)

inline static constexpr unsigned int Class_2_0CDE3CDE96FDD218_TypeDefinitionIndex = 47038;

class Class_2_0CDE3CDE96FDD218 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_37D832480CB327E1* Field_2_3; // 0x18
	::RPG::GameCore::PropComponent* Field_2_4; // 0x20
	::RPG::GameCore::PropAttachMove* Field_2_0; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttachMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttachMove*))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_7DB77497DA38E1E0()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_METHOD_2_7DB77497DA38E1E0_OFFSET))(this);
	}
};
