#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_550;
class Class_1_1C30CE192ABE4C54;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E8B03ED1355CE6C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCDABE0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0xCCDBDA0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_58EE1C9E9EEF6239_OFFSET UNITYSDK_OFFSET(0xCCDBDE0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET UNITYSDK_OFFSET(0xCCDBE90)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0xCCDBD60)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xCCDBD20)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCDAD40)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCDBAD0)
#define CLASS_2_E8B03ED1355CE6C8_TICK_OFFSET UNITYSDK_OFFSET(0xCCDBC30)
#define CLASS_2_E8B03ED1355CE6C8__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDAA60)

inline static constexpr unsigned int Class_2_E8B03ED1355CE6C8_TypeDefinitionIndex = 55313;

class Class_2_E8B03ED1355CE6C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_07C3C4D2990C49EE*>* ONOOIGMOCMB; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x28
	::Class_1_1C30CE192ABE4C54* HGGIIDBDGKD; // 0x30
	::RPG::GameCore::IncludeTaskListTemplate* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x40
	::RPG::GameCore::GameEntityList* OOEJOOBDCHC; // 0x48

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

	::Class_0_16E4307DCC419505_550* Method_2_94D20ED54313DFA2()
	{
		return ((::Class_0_16E4307DCC419505_550*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET))(this);
	}
};
