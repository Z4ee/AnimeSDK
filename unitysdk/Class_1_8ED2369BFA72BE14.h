#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_117;
class Class_1_6B41D5D37BA0605F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_8ED2369BFA72BE14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87B72A0)
#define CLASS_1_8ED2369BFA72BE14_ENTER_OFFSET UNITYSDK_OFFSET(0x87B7600)
#define CLASS_1_8ED2369BFA72BE14_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x87B8080)
#define CLASS_1_8ED2369BFA72BE14_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x87B8F40)
#define CLASS_1_8ED2369BFA72BE14_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x87B7E70)
#define CLASS_1_8ED2369BFA72BE14_LEAVE_OFFSET UNITYSDK_OFFSET(0x87B7ED0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x87B7F30)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_1_OFFSET UNITYSDK_OFFSET(0x87B83E0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_2_OFFSET UNITYSDK_OFFSET(0x87B86F0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_3_OFFSET UNITYSDK_OFFSET(0x87B8E30)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x87B80D0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_89A73E9731D84A94_OFFSET UNITYSDK_OFFSET(0x87B8BC0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_9594EC61A446AC52_OFFSET UNITYSDK_OFFSET(0x87B8AA0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFCFAA66DD28B465_OFFSET UNITYSDK_OFFSET(0x87B8800)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_1_OFFSET UNITYSDK_OFFSET(0x87B84F0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_2_OFFSET UNITYSDK_OFFSET(0x87B8C20)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_OFFSET UNITYSDK_OFFSET(0x87B81E0)
#define CLASS_1_8ED2369BFA72BE14_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x87B8F50)
#define CLASS_1_8ED2369BFA72BE14_TICK_OFFSET UNITYSDK_OFFSET(0x87B7E10)
#define CLASS_1_8ED2369BFA72BE14__CTOR_OFFSET UNITYSDK_OFFSET(0x87B7290)

inline static constexpr unsigned int Class_1_8ED2369BFA72BE14_TypeDefinitionIndex = 49420;

class Class_1_8ED2369BFA72BE14 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_10; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::UnityEngine::Object* Field_1_3; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_8; // 0x40
	::UnityEngine::GameObject* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_6; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_9; // 0x58
	::System::Single _MinDistance_k__BackingField; // 0x60
	::UnityEngine::Vector3 Field_1_11; // 0x64
	::UnityEngine::Vector3 Field_1_12; // 0x70

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_117*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_CFE80279FBABE357(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_OFFSET))(this, a1);
	}

	::System::Void Method_1_18982EFD3B740683_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_1_OFFSET))(this);
	}

	::System::Void Method_1_CFE80279FBABE357_1(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_18982EFD3B740683_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_2_OFFSET))(this);
	}

	::System::Void Method_1_CFCFAA66DD28B465(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_CFCFAA66DD28B465_OFFSET))(this, a1);
	}

	::System::Void Method_1_9594EC61A446AC52(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_9594EC61A446AC52_OFFSET))(this, a1);
	}

	::System::Void Method_1_89A73E9731D84A94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_89A73E9731D84A94_OFFSET))(this);
	}

	::System::Void Method_1_CFE80279FBABE357_2(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_18982EFD3B740683_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_3_OFFSET))(this);
	}

	::System::Single get_MinDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_GET_MINDISTANCE_OFFSET))(this);
	}

	::System::Void set_MinDistance(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14_SET_MINDISTANCE_OFFSET))(this, value);
	}
};
