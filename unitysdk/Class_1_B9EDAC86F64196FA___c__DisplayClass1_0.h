#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_42D96751C1376DDB;
class Class_1_B9EDAC86F64196FA;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183B4BD0)
#define CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS1_0__SYNCHRONIZEALL_B__0_OFFSET UNITYSDK_OFFSET(0x183B5630)

inline static constexpr unsigned int Class_1_B9EDAC86F64196FA___c__DisplayClass1_0_TypeDefinitionIndex = 75875;

class Class_1_B9EDAC86F64196FA___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* model; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_42D96751C1376DDB*>* oldMap; // 0x18
	::Class_1_B9EDAC86F64196FA* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _SynchronizeAll_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA___C__DISPLAYCLASS1_0__SYNCHRONIZEALL_B__0_OFFSET))(this, a1);
	}
};
