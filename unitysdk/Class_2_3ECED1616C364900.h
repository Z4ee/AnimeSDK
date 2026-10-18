#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_7E9AC8675DA072FB_6;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropPlayGachaMachine; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3ECED1616C364900_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB119010)
#define CLASS_2_3ECED1616C364900_METHOD_2_1FB217A8195A81DA_OFFSET UNITYSDK_OFFSET(0xB11A070)
#define CLASS_2_3ECED1616C364900_METHOD_2_340A8EE0D0894B2E_OFFSET UNITYSDK_OFFSET(0xB119BA0)
#define CLASS_2_3ECED1616C364900_METHOD_2_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0xB11A160)
#define CLASS_2_3ECED1616C364900_METHOD_2_F5ADBA366C2EA507_OFFSET UNITYSDK_OFFSET(0xB11A570)
#define CLASS_2_3ECED1616C364900_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB119760)
#define CLASS_2_3ECED1616C364900_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB119240)
#define CLASS_2_3ECED1616C364900_TICK_OFFSET UNITYSDK_OFFSET(0xB1193F0)
#define CLASS_2_3ECED1616C364900__CTOR_OFFSET UNITYSDK_OFFSET(0xB118F00)

inline static constexpr unsigned int Class_2_3ECED1616C364900_TypeDefinitionIndex = 58334;

class Class_2_3ECED1616C364900 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_7E9AC8675DA072FB_6* DHIELKLGADN; // 0x18
	::Class_3_07C3C4D2990C49EE* LHMPCJDHGMM; // 0x20
	::Class_3_07C3C4D2990C49EE* OCFKLGFHKAC; // 0x28
	::RPG::GameCore::PropPlayGachaMachine* OFKGLJOAMLD; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x40
	::System::UInt32 IOPMAPJHDNK; // 0x48
	::System::Boolean BPODLAOIOPK; // 0x4C

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

	::System::Void Method_2_F5ADBA366C2EA507(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3ECED1616C364900_METHOD_2_F5ADBA366C2EA507_OFFSET))(this, a1);
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
