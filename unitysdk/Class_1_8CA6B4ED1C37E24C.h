#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_137;
class Class_1_6B41D5D37BA0605F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_8CA6B4ED1C37E24C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16881F10)
#define CLASS_1_8CA6B4ED1C37E24C_ENTER_OFFSET UNITYSDK_OFFSET(0x168822C0)
#define CLASS_1_8CA6B4ED1C37E24C_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x16882D40)
#define CLASS_1_8CA6B4ED1C37E24C_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x16883FF0)
#define CLASS_1_8CA6B4ED1C37E24C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16882B30)
#define CLASS_1_8CA6B4ED1C37E24C_LEAVE_OFFSET UNITYSDK_OFFSET(0x16882B90)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_1_OFFSET UNITYSDK_OFFSET(0x16883300)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_2_OFFSET UNITYSDK_OFFSET(0x16883BD0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_OFFSET UNITYSDK_OFFSET(0x16882EF0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16882BF0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_4F03C4ADDAF8469C_OFFSET UNITYSDK_OFFSET(0x16883710)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0x16883B70)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_9594EC61A446AC52_OFFSET UNITYSDK_OFFSET(0x16883A50)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_1_OFFSET UNITYSDK_OFFSET(0x168831A0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_2_OFFSET UNITYSDK_OFFSET(0x168835B0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_3_OFFSET UNITYSDK_OFFSET(0x16883E90)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x16882D90)
#define CLASS_1_8CA6B4ED1C37E24C_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x16884000)
#define CLASS_1_8CA6B4ED1C37E24C_TICK_OFFSET UNITYSDK_OFFSET(0x16882AD0)
#define CLASS_1_8CA6B4ED1C37E24C__CTOR_OFFSET UNITYSDK_OFFSET(0x16881F00)

inline static constexpr unsigned int Class_1_8CA6B4ED1C37E24C_TypeDefinitionIndex = 58226;

class Class_1_8CA6B4ED1C37E24C : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_5; // 0x38
	::UnityEngine::Object* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_7; // 0x48
	::UnityEngine::GameObject* Field_1_8; // 0x50
	::UnityEngine::GameObject* Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_10; // 0x60
	::System::Single _MinDistance_k__BackingField; // 0x6C
	::UnityEngine::Vector3 Field_1_12; // 0x70

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_137* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_137*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Void Method_1_13A6B69D22A474A4(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEAC86EB2AD5D389_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_1_OFFSET))(this);
	}

	::System::Void Method_1_13A6B69D22A474A4_1(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEAC86EB2AD5D389_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_2_OFFSET))(this);
	}

	::System::Void Method_1_4F03C4ADDAF8469C(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_4F03C4ADDAF8469C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9594EC61A446AC52(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_9594EC61A446AC52_OFFSET))(this, a1);
	}

	::System::Void Method_1_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Void Method_1_13A6B69D22A474A4_2(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEAC86EB2AD5D389_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_3_OFFSET))(this);
	}

	::System::Single get_MinDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_GET_MINDISTANCE_OFFSET))(this);
	}

	::System::Void set_MinDistance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C_SET_MINDISTANCE_OFFSET))(this, a1);
	}
};
