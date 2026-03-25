#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_A043D803AC652E6E;
class Class_1_B4D062A3AA74182F;
namespace UnityEngine { class Transform; }

#define CLASS_5_184CB06F2C31B949_CLONE_OFFSET UNITYSDK_OFFSET(0x8FDB5F0)
#define CLASS_5_184CB06F2C31B949_METHOD_5_4CC7DBD40C57D5E4_OFFSET UNITYSDK_OFFSET(0x8FDB410)
#define CLASS_5_184CB06F2C31B949_METHOD_5_653EC8749A27C6CD_OFFSET UNITYSDK_OFFSET(0x8FDB6D0)
#define CLASS_5_184CB06F2C31B949_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0x8FDB990)
#define CLASS_5_184CB06F2C31B949_REVERSE_OFFSET UNITYSDK_OFFSET(0x8FDB660)
#define CLASS_5_184CB06F2C31B949_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8FDB5A0)
#define CLASS_5_184CB06F2C31B949__CTOR_OFFSET UNITYSDK_OFFSET(0x8FDB3E0)
#define CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x8FDB850)
#define CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_REVERSE_OFFSET UNITYSDK_OFFSET(0x8FDB8F0)
#define CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x8FDB840)

inline static constexpr unsigned int Class_5_184CB06F2C31B949_TypeDefinitionIndex = 60268;

class Class_5_184CB06F2C31B949 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Single Field_5_1; // 0x48
	::System::Single Field_5_0; // 0x4C
	::System::Single Field_5_2; // 0x50

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_184CB06F2C31B949* Method_5_4CC7DBD40C57D5E4(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_5_184CB06F2C31B949*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_METHOD_5_4CC7DBD40C57D5E4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_653EC8749A27C6CD(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_METHOD_5_653EC8749A27C6CD_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* __iFixBaseProxy_Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949___IFIXBASEPROXY_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
