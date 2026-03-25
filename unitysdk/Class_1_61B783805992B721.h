#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_176;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_14;
class Class_2_49CAB3DE74280C58;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61B783805992B721_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10BBBB30)
#define CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10BBBD70)
#define CLASS_1_61B783805992B721_TICK_OFFSET UNITYSDK_OFFSET(0x10BBBD00)
#define CLASS_1_61B783805992B721__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBB8B0)

inline static constexpr unsigned int Class_1_61B783805992B721_TypeDefinitionIndex = 63189;

class Class_1_61B783805992B721 : public ::System::Object
{
public:
	::Class_1_F9EBB5A401350F78* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_176*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBuffType, ::System::String*>* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::Class_2_49CAB3DE74280C58* a2, ::Class_2_49CAB3DE74280C58* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_TICK_OFFSET))(this, a1);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61B783805992B721_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
