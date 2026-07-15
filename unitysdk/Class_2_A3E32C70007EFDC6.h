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

#define CLASS_2_A3E32C70007EFDC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163A6230)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_609CCD666C12D2F9_OFFSET UNITYSDK_OFFSET(0x163A6890)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_6F10360085E72298_1_OFFSET UNITYSDK_OFFSET(0x163A6420)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_6F10360085E72298_OFFSET UNITYSDK_OFFSET(0x163A6330)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x163A6590)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_FF716F3B6F5A8D13_OFFSET UNITYSDK_OFFSET(0x163A6670)
#define CLASS_2_A3E32C70007EFDC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163A6270)
#define CLASS_2_A3E32C70007EFDC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163A64E0)
#define CLASS_2_A3E32C70007EFDC6_TICK_OFFSET UNITYSDK_OFFSET(0x163A6530)
#define CLASS_2_A3E32C70007EFDC6__CTOR_OFFSET UNITYSDK_OFFSET(0x163A6220)

inline static constexpr unsigned int Class_2_A3E32C70007EFDC6_TypeDefinitionIndex = 53907;

class Class_2_A3E32C70007EFDC6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TaskContext* Field_2_3; // 0x18
	::RPG::GameCore::ShowBattleAlert* Field_2_4; // 0x20

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

	::System::Void Method_2_6F10360085E72298(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_6F10360085E72298_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F10360085E72298_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_6F10360085E72298_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_8B83CE81FFD7409A*>* Method_2_FF716F3B6F5A8D13()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8B83CE81FFD7409A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_FF716F3B6F5A8D13_OFFSET))(this);
	}

	::System::String* Method_2_609CCD666C12D2F9(::RPG::GameCore::SkillType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_609CCD666C12D2F9_OFFSET))(this, a1);
	}

	::System::String* Method_2_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET))(this);
	}
};
