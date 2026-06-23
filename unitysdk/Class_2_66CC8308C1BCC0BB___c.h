#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_66CC8308C1BCC0BB___C_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xD974C60)
#define CLASS_2_66CC8308C1BCC0BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD974C10)
#define CLASS_2_66CC8308C1BCC0BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD974C50)

inline static constexpr unsigned int Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex = 73155;

class Class_2_66CC8308C1BCC0BB___c : public ::System::Object
{
public:
	static ::Class_2_66CC8308C1BCC0BB___c** StaticGet___9()
	{
		return (::Class_2_66CC8308C1BCC0BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex)->GetStaticField(0x3D1E0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__2_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_66CC8308C1BCC0BB___c_TypeDefinitionIndex)->GetStaticField(0x3D1E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CC8308C1BCC0BB___C_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}
};
