#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_213;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
class Class_2_B66C1067C0468FBB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61B783805992B721_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE51590)
#define CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xBE517D0)
#define CLASS_1_61B783805992B721_TICK_OFFSET UNITYSDK_OFFSET(0xBE51760)
#define CLASS_1_61B783805992B721__CTOR_OFFSET UNITYSDK_OFFSET(0xBE51310)

inline static constexpr unsigned int Class_1_61B783805992B721_TypeDefinitionIndex = 77177;

class Class_1_61B783805992B721 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBuffType, ::System::String*>* IMGOJOKFAMK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* OJFECHILFHG; // 0x18
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x20

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_2_B66C1067C0468FBB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_TICK_OFFSET))(this, a1);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
