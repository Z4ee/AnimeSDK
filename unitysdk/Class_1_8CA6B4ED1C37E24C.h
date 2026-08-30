#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_146;
class Class_1_6B41D5D37BA0605F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_8CA6B4ED1C37E24C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152889C0)
#define CLASS_1_8CA6B4ED1C37E24C_ENTER_OFFSET UNITYSDK_OFFSET(0x15288D70)
#define CLASS_1_8CA6B4ED1C37E24C_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x152897F0)
#define CLASS_1_8CA6B4ED1C37E24C_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1528AAA0)
#define CLASS_1_8CA6B4ED1C37E24C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x152895E0)
#define CLASS_1_8CA6B4ED1C37E24C_LEAVE_OFFSET UNITYSDK_OFFSET(0x15289640)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_1_OFFSET UNITYSDK_OFFSET(0x15289DB0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_2_OFFSET UNITYSDK_OFFSET(0x1528A680)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_13A6B69D22A474A4_OFFSET UNITYSDK_OFFSET(0x152899A0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x152896A0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_4F03C4ADDAF8469C_OFFSET UNITYSDK_OFFSET(0x1528A1C0)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0x1528A620)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_9594EC61A446AC52_OFFSET UNITYSDK_OFFSET(0x1528A500)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_1_OFFSET UNITYSDK_OFFSET(0x15289C50)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_2_OFFSET UNITYSDK_OFFSET(0x1528A060)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_3_OFFSET UNITYSDK_OFFSET(0x1528A940)
#define CLASS_1_8CA6B4ED1C37E24C_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x15289840)
#define CLASS_1_8CA6B4ED1C37E24C_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x1528AAB0)
#define CLASS_1_8CA6B4ED1C37E24C_TICK_OFFSET UNITYSDK_OFFSET(0x15289580)
#define CLASS_1_8CA6B4ED1C37E24C__CTOR_OFFSET UNITYSDK_OFFSET(0x152889B0)

inline static constexpr unsigned int Class_1_8CA6B4ED1C37E24C_TypeDefinitionIndex = 61053;

class Class_1_8CA6B4ED1C37E24C : public ::System::Object
{
public:
	::UnityEngine::Object* DCIIKEDBOKO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* FEFANNGMKDO; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IMBJKKMBNFM; // 0x20
	::UnityEngine::GameObject* BJPMABICADJ; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* HBOGAKGFCDO; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CJANCKPPAHO; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MJEFLBIOGAO; // 0x40
	::UnityEngine::GameObject* JFHDBHLPMHN; // 0x48
	::UnityEngine::GameObject* COJACNPKFMN; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* HGFAFHEKBIG; // 0x58
	::UnityEngine::Vector3 DGIHLLKGKJE; // 0x60
	::UnityEngine::Vector3 OIPGJLCMKAM; // 0x6C
	::System::Single _MinDistance_k__BackingField; // 0x78

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_146* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_146*))((::PBYTE)hIl2Cpp + CLASS_1_8CA6B4ED1C37E24C__CTOR_OFFSET))(this, a1);
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
