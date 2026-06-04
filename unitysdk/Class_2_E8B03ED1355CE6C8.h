#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_491;
class Class_1_1C30CE192ABE4C54;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E8B03ED1355CE6C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB769A60)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0xB76ABD0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_58EE1C9E9EEF6239_OFFSET UNITYSDK_OFFSET(0xB76AC10)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET UNITYSDK_OFFSET(0xB76ACC0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0xB76AB90)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB76AB50)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB769B60)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB76A900)
#define CLASS_2_E8B03ED1355CE6C8_TICK_OFFSET UNITYSDK_OFFSET(0xB76AA60)
#define CLASS_2_E8B03ED1355CE6C8__CTOR_OFFSET UNITYSDK_OFFSET(0xB7698E0)

inline static constexpr unsigned int Class_2_E8B03ED1355CE6C8_TypeDefinitionIndex = 51472;

class Class_2_E8B03ED1355CE6C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::IncludeTaskListTemplate* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_07C3C4D2990C49EE*>* Field_2_2; // 0x28
	::RPG::GameCore::GameEntityList* Field_2_3; // 0x30
	::Class_1_1C30CE192ABE4C54* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_6; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncludeTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncludeTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_TICK_OFFSET))(this, a1);
	}

	::Class_1_1C30CE192ABE4C54* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_2_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_2_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_07C3C4D2990C49EE* Method_2_58EE1C9E9EEF6239(::System::String* a1)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_58EE1C9E9EEF6239_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_491* Method_2_94D20ED54313DFA2()
	{
		return ((::Class_0_16E4307DCC419505_491*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET))(this);
	}
};
