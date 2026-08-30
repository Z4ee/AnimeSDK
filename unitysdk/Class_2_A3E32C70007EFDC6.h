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

#define CLASS_2_A3E32C70007EFDC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15575C20)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_405F6A594C4EA1C2_OFFSET UNITYSDK_OFFSET(0x15576260)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0x15576040)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_6F10360085E72298_OFFSET UNITYSDK_OFFSET(0x15575D20)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0x15575E10)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x15575F60)
#define CLASS_2_A3E32C70007EFDC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15575C60)
#define CLASS_2_A3E32C70007EFDC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15575EB0)
#define CLASS_2_A3E32C70007EFDC6_TICK_OFFSET UNITYSDK_OFFSET(0x15575F00)
#define CLASS_2_A3E32C70007EFDC6__CTOR_OFFSET UNITYSDK_OFFSET(0x15575C10)

inline static constexpr unsigned int Class_2_A3E32C70007EFDC6_TypeDefinitionIndex = 56628;

class Class_2_A3E32C70007EFDC6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HGLNLKJLOAL; // 0x0
	// static const ::System::String* BLHPACHICLE; // 0x0
	// static const ::System::String* PFJHPNNLNFE; // 0x0
	::RPG::GameCore::ShowBattleAlert* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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

	::System::Void Method_2_98D7467AE0BEC3C1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3E32C70007EFDC6_METHOD_2_98D7467AE0BEC3C1_OFFSET))(this, a1);
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
