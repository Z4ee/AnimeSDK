#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropAttachMove; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0CDE3CDE96FDD218_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15896CD0)
#define CLASS_2_0CDE3CDE96FDD218_METHOD_2_AC977D6B357479CA_OFFSET UNITYSDK_OFFSET(0x15896D70)
#define CLASS_2_0CDE3CDE96FDD218_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15897140)
#define CLASS_2_0CDE3CDE96FDD218_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15897040)
#define CLASS_2_0CDE3CDE96FDD218_TICK_OFFSET UNITYSDK_OFFSET(0x158970E0)
#define CLASS_2_0CDE3CDE96FDD218__CTOR_OFFSET UNITYSDK_OFFSET(0x15896CC0)

inline static constexpr unsigned int Class_2_0CDE3CDE96FDD218_TypeDefinitionIndex = 58450;

class Class_2_0CDE3CDE96FDD218 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropAttachMove* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
	::RPG::GameCore::PropComponent* KDCGICCJBMB; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_2_37D832480CB327E1* HDIOLMOJFDN; // 0x38

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

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_2_AC977D6B357479CA()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CDE3CDE96FDD218_METHOD_2_AC977D6B357479CA_OFFSET))(this);
	}
};
