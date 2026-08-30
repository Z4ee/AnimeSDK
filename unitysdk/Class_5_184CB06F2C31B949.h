#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_57FDA42592C5189D;
class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_184CB06F2C31B949_CLONE_OFFSET UNITYSDK_OFFSET(0xB4713F0)
#define CLASS_5_184CB06F2C31B949_METHOD_5_4CC7DBD40C57D5E4_OFFSET UNITYSDK_OFFSET(0xB471210)
#define CLASS_5_184CB06F2C31B949_METHOD_5_653EC8749A27C6CD_OFFSET UNITYSDK_OFFSET(0xB4714D0)
#define CLASS_5_184CB06F2C31B949_REVERSE_OFFSET UNITYSDK_OFFSET(0xB471460)
#define CLASS_5_184CB06F2C31B949_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB4713A0)
#define CLASS_5_184CB06F2C31B949__CTOR_OFFSET UNITYSDK_OFFSET(0xB4711E0)

inline static constexpr unsigned int Class_5_184CB06F2C31B949_TypeDefinitionIndex = 73442;

class Class_5_184CB06F2C31B949 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Single ENFGAHLILFE; // 0x48
	::System::Single EFFNFPCDHPK; // 0x4C
	::System::Single BBEKOMAJFID; // 0x50

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_184CB06F2C31B949* Method_5_4CC7DBD40C57D5E4(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_5_184CB06F2C31B949*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_184CB06F2C31B949_METHOD_5_4CC7DBD40C57D5E4_OFFSET))(a1, a2, a3, a4, a5, a6);
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
};
