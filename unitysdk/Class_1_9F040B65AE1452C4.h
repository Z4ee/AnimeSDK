#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_9F040B65AE1452C4_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x10AF8C80)
#define CLASS_1_9F040B65AE1452C4__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF8D20)

inline static constexpr unsigned int Class_1_9F040B65AE1452C4_TypeDefinitionIndex = 62998;

class Class_1_9F040B65AE1452C4 : public ::System::Object
{
public:
	static ::Class_1_9F040B65AE1452C4** StaticGet_Field_1_0()
	{
		return (::Class_1_9F040B65AE1452C4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F040B65AE1452C4_TypeDefinitionIndex)->GetStaticField(0x153B0);
	}
	::System::String* Field_1_5; // 0x10
	::UnityEngine::GUIStyle* Field_1_3; // 0x18
	::System::String* Field_1_6; // 0x20
	::UnityEngine::GUIStyle* Field_1_4; // 0x28
	::UnityEngine::GUIContent* Field_1_1; // 0x30
	::UnityEngine::GUIStyle* Field_1_2; // 0x38
	::System::Int32 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F040B65AE1452C4__CTOR_OFFSET))(this);
	}

	static ::Class_1_9F040B65AE1452C4* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_9F040B65AE1452C4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F040B65AE1452C4_METHOD_1_47FCE72550F759BF_OFFSET))();
	}
};
