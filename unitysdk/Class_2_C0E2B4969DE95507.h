#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterDieCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C0E2B4969DE95507_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16217F10)
#define CLASS_2_C0E2B4969DE95507_METHOD_2_68129DD98E9643E8_OFFSET UNITYSDK_OFFSET(0x16218190)
#define CLASS_2_C0E2B4969DE95507_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16217F50)
#define CLASS_2_C0E2B4969DE95507_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162183E0)
#define CLASS_2_C0E2B4969DE95507_TICK_OFFSET UNITYSDK_OFFSET(0x16218450)
#define CLASS_2_C0E2B4969DE95507__CTOR_OFFSET UNITYSDK_OFFSET(0x16217EC0)

inline static constexpr unsigned int Class_2_C0E2B4969DE95507_TypeDefinitionIndex = 55647;

class Class_2_C0E2B4969DE95507 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonsterDieCheck* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterDieCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68129DD98E9643E8(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_C0E2B4969DE95507_METHOD_2_68129DD98E9643E8_OFFSET))(this, a1, a2);
	}
};
