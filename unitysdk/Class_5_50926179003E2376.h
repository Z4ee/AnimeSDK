#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_57FDA42592C5189D;
class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_50926179003E2376_CLONE_OFFSET UNITYSDK_OFFSET(0xBCC10F0)
#define CLASS_5_50926179003E2376_METHOD_5_6AA0A5D7371B5A80_OFFSET UNITYSDK_OFFSET(0xBCC0FF0)
#define CLASS_5_50926179003E2376_METHOD_5_C7BDF5F7DC4B679E_OFFSET UNITYSDK_OFFSET(0xBCC0EA0)
#define CLASS_5_50926179003E2376_METHOD_5_FC2CF36C4B5E30B2_OFFSET UNITYSDK_OFFSET(0xBCC11A0)
#define CLASS_5_50926179003E2376_REVERSE_OFFSET UNITYSDK_OFFSET(0xBCC1140)
#define CLASS_5_50926179003E2376_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBCC10A0)
#define CLASS_5_50926179003E2376__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC0E70)

inline static constexpr unsigned int Class_5_50926179003E2376_TypeDefinitionIndex = 73443;

class Class_5_50926179003E2376 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Int32 GLBHKBAPJFP; // 0x48

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_50926179003E2376* Method_5_C7BDF5F7DC4B679E(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::Class_5_50926179003E2376*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_C7BDF5F7DC4B679E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_5_6AA0A5D7371B5A80(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_6AA0A5D7371B5A80_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_FC2CF36C4B5E30B2(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_50926179003E2376_METHOD_5_FC2CF36C4B5E30B2_OFFSET))(this, a1, a2);
	}
};
