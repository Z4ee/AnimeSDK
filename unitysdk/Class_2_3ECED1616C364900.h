#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D55C9EF3F758FF20_4;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropPlayGachaMachine; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3ECED1616C364900_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A67D0)
#define CLASS_2_3ECED1616C364900_METHOD_2_1FB217A8195A81DA_OFFSET UNITYSDK_OFFSET(0xA3A76F0)
#define CLASS_2_3ECED1616C364900_METHOD_2_340A8EE0D0894B2E_OFFSET UNITYSDK_OFFSET(0xA3A7220)
#define CLASS_2_3ECED1616C364900_METHOD_2_56B2C7D70540D840_OFFSET UNITYSDK_OFFSET(0xA3A7BE0)
#define CLASS_2_3ECED1616C364900_METHOD_2_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0xA3A77D0)
#define CLASS_2_3ECED1616C364900_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3A6E50)
#define CLASS_2_3ECED1616C364900_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA3A6930)
#define CLASS_2_3ECED1616C364900_TICK_OFFSET UNITYSDK_OFFSET(0xA3A6AE0)
#define CLASS_2_3ECED1616C364900__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A66C0)

inline static constexpr unsigned int Class_2_3ECED1616C364900_TypeDefinitionIndex = 54528;

class Class_2_3ECED1616C364900 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::PropPlayGachaMachine* Field_2_3; // 0x30
	::Class_1_D55C9EF3F758FF20_4* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_A56EAB6E8DBE44E9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_METHOD_2_A56EAB6E8DBE44E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B2C7D70540D840(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_METHOD_2_56B2C7D70540D840_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1FB217A8195A81DA(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_METHOD_2_1FB217A8195A81DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_340A8EE0D0894B2E(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_METHOD_2_340A8EE0D0894B2E_OFFSET))(a1, a2, a3);
	}
};
