#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_3F1549C2A53A3A5B;
class Class_1_43BD383C98B4C0C5_191;
class Class_1_F9FBCC956DFCF137_25;
class Class_2_B66C1067C0468FBB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61B783805992B721_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAA9FBA0)
#define CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAA9FDE0)
#define CLASS_1_61B783805992B721_TICK_OFFSET UNITYSDK_OFFSET(0xAA9FD70)
#define CLASS_1_61B783805992B721__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9F920)

inline static constexpr unsigned int Class_1_61B783805992B721_TypeDefinitionIndex = 72167;

class Class_1_61B783805992B721 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBuffType, ::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_1_1; // 0x18
	::Class_1_3F1549C2A53A3A5B* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_2_B66C1067C0468FBB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_25* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_TICK_OFFSET))(this, a1);
	}

	::Class_1_3F1549C2A53A3A5B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3F1549C2A53A3A5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
