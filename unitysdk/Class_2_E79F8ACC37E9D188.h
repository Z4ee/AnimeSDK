#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69F06BA11FF28429_4;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropPlayGachaMachine; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E79F8ACC37E9D188_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA21E110)
#define CLASS_2_E79F8ACC37E9D188_METHOD_2_0CD2CD3121D35993_OFFSET UNITYSDK_OFFSET(0xA21EFA0)
#define CLASS_2_E79F8ACC37E9D188_METHOD_2_26D24A432571A66F_OFFSET UNITYSDK_OFFSET(0xA21EAE0)
#define CLASS_2_E79F8ACC37E9D188_METHOD_2_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0xA21F060)
#define CLASS_2_E79F8ACC37E9D188_METHOD_2_56B2C7D70540D840_OFFSET UNITYSDK_OFFSET(0xA21F470)
#define CLASS_2_E79F8ACC37E9D188_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA21E730)
#define CLASS_2_E79F8ACC37E9D188_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA21E240)
#define CLASS_2_E79F8ACC37E9D188_TICK_OFFSET UNITYSDK_OFFSET(0xA21E3C0)
#define CLASS_2_E79F8ACC37E9D188__CTOR_OFFSET UNITYSDK_OFFSET(0xA21E000)

inline static constexpr unsigned int Class_2_E79F8ACC37E9D188_TypeDefinitionIndex = 47071;

class Class_2_E79F8ACC37E9D188 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_2; // 0x18
	::Class_1_69F06BA11FF28429_4* Field_2_4; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::RPG::GameCore::PropPlayGachaMachine* Field_2_0; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x40
	::System::Boolean Field_2_5; // 0x48
	::System::UInt32 Field_2_3; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPlayGachaMachine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPlayGachaMachine*))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_2B0AE62D097BB2AF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_METHOD_2_2B0AE62D097BB2AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B2C7D70540D840(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_METHOD_2_56B2C7D70540D840_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_0CD2CD3121D35993(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_METHOD_2_0CD2CD3121D35993_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_26D24A432571A66F(::RPG::GameCore::PropComponent* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropComponent*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_E79F8ACC37E9D188_METHOD_2_26D24A432571A66F_OFFSET))(a1, a2, a3);
	}
};
