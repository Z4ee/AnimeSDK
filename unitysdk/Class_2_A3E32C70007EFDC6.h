#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_8B83CE81FFD7409A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowBattleAlert; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A3E32C70007EFDC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB262510)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_405F6A594C4EA1C2_OFFSET UNITYSDK_OFFSET(0xB262B10)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0xB262930)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_881057BF38FE4763_OFFSET UNITYSDK_OFFSET(0xB262700)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0xB262850)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0xB262610)
#define CLASS_2_A3E32C70007EFDC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB262550)
#define CLASS_2_A3E32C70007EFDC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2627A0)
#define CLASS_2_A3E32C70007EFDC6_TICK_OFFSET UNITYSDK_OFFSET(0xB2627F0)
#define CLASS_2_A3E32C70007EFDC6__CTOR_OFFSET UNITYSDK_OFFSET(0xB262500)

inline static constexpr unsigned int Class_2_A3E32C70007EFDC6_TypeDefinitionIndex = 45378;

class Class_2_A3E32C70007EFDC6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowBattleAlert* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleAlert* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleAlert*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_881057BF38FE4763(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_881057BF38FE4763_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_8B83CE81FFD7409A*>* Method_2_5055E1A5000CF422()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8B83CE81FFD7409A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_5055E1A5000CF422_OFFSET))(this);
	}

	::System::String* Method_2_405F6A594C4EA1C2(::RPG::GameCore::SkillType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_405F6A594C4EA1C2_OFFSET))(this, a1);
	}

	::System::String* Method_2_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET))(this);
	}
};
