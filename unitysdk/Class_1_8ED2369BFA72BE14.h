#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_120;
class Class_1_6B41D5D37BA0605F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_8ED2369BFA72BE14_DISPOSE_OFFSET UNITYSDK_OFFSET(0x983B7E0)
#define CLASS_1_8ED2369BFA72BE14_ENTER_OFFSET UNITYSDK_OFFSET(0x983BB40)
#define CLASS_1_8ED2369BFA72BE14_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x983C5C0)
#define CLASS_1_8ED2369BFA72BE14_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x983D480)
#define CLASS_1_8ED2369BFA72BE14_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x983C3B0)
#define CLASS_1_8ED2369BFA72BE14_LEAVE_OFFSET UNITYSDK_OFFSET(0x983C410)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x983C470)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_1_OFFSET UNITYSDK_OFFSET(0x983C920)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_2_OFFSET UNITYSDK_OFFSET(0x983CC30)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_3_OFFSET UNITYSDK_OFFSET(0x983D370)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x983C610)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_89A73E9731D84A94_OFFSET UNITYSDK_OFFSET(0x983D100)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_9594EC61A446AC52_OFFSET UNITYSDK_OFFSET(0x983CFE0)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFCFAA66DD28B465_OFFSET UNITYSDK_OFFSET(0x983CD40)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_1_OFFSET UNITYSDK_OFFSET(0x983CA30)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_2_OFFSET UNITYSDK_OFFSET(0x983D160)
#define CLASS_1_8ED2369BFA72BE14_METHOD_1_CFE80279FBABE357_OFFSET UNITYSDK_OFFSET(0x983C720)
#define CLASS_1_8ED2369BFA72BE14_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0x983D490)
#define CLASS_1_8ED2369BFA72BE14_TICK_OFFSET UNITYSDK_OFFSET(0x983C350)
#define CLASS_1_8ED2369BFA72BE14__CTOR_OFFSET UNITYSDK_OFFSET(0x983B7D0)

inline static constexpr unsigned int Class_1_8ED2369BFA72BE14_TypeDefinitionIndex = 56217;

class Class_1_8ED2369BFA72BE14 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::UnityEngine::Object* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_6; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_10; // 0x48
	::UnityEngine::GameObject* Field_1_2; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_12; // 0x60
	::System::Single _MinDistance_k__BackingField; // 0x6C
	::UnityEngine::Vector3 Field_1_11; // 0x70

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_120* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_120*))((::PBYTE)hIl2Cpp + CLASS_1_8ED2369BFA72BE14__CTOR_OFFSET))(this, a1);
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
