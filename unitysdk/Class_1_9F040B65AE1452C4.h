#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_9F040B65AE1452C4_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xBEDB550)
#define CLASS_1_9F040B65AE1452C4__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDB5F0)

inline static constexpr unsigned int Class_1_9F040B65AE1452C4_TypeDefinitionIndex = 68296;

class Class_1_9F040B65AE1452C4 : public ::System::Object
{
public:
	static ::Class_1_9F040B65AE1452C4** StaticGet_BONBDEKAPKG()
	{
		return (::Class_1_9F040B65AE1452C4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F040B65AE1452C4_TypeDefinitionIndex)->GetStaticField(0x66BA0);
	}
	::System::String* OAKGNPDJPBE; // 0x10
	::System::String* EABJNFEEIML; // 0x18
	::UnityEngine::GUIStyle* KFOOOGCIFAE; // 0x20
	::UnityEngine::GUIStyle* EKBHGEBNHHL; // 0x28
	::UnityEngine::GUIContent* CMLIGBGANML; // 0x30
	::UnityEngine::GUIStyle* JPAGHLAGBKH; // 0x38
	::System::Int32 NOFHFOLALEI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F040B65AE1452C4__CTOR_OFFSET))(this);
	}

	static ::Class_1_9F040B65AE1452C4* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_9F040B65AE1452C4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F040B65AE1452C4_METHOD_1_47FCE72550F759BF_OFFSET))();
	}
};
