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

#define CLASS_2_A3E32C70007EFDC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8137B0)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_405F6A594C4EA1C2_OFFSET UNITYSDK_OFFSET(0x1A813DF0)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0x1A813BD0)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0x1A8139A0)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x1A813AF0)
#define CLASS_2_A3E32C70007EFDC6_METHOD_2_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0x1A8138B0)
#define CLASS_2_A3E32C70007EFDC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8137F0)
#define CLASS_2_A3E32C70007EFDC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A813A40)
#define CLASS_2_A3E32C70007EFDC6_TICK_OFFSET UNITYSDK_OFFSET(0x1A813A90)
#define CLASS_2_A3E32C70007EFDC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8137A0)

inline static constexpr unsigned int Class_2_A3E32C70007EFDC6_TypeDefinitionIndex = 56628;

class Class_2_A3E32C70007EFDC6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* HGLNLKJLOAL; // 0x0
	// static const ::System::String* BLHPACHICLE; // 0x0
	// static const ::System::String* PFJHPNNLNFE; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowBattleAlert* OFKGLJOAMLD; // 0x20

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
