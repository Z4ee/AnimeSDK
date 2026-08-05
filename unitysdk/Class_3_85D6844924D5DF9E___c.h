#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_85D6844924D5DF9E___C_METHOD_1_19AD88039E2EEBF8_OFFSET UNITYSDK_OFFSET(0x12C57840)
#define CLASS_3_85D6844924D5DF9E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C577F0)
#define CLASS_3_85D6844924D5DF9E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C57830)

inline static constexpr unsigned int Class_3_85D6844924D5DF9E___c_TypeDefinitionIndex = 83090;

class Class_3_85D6844924D5DF9E___c : public ::System::Object
{
public:
	static ::Class_3_85D6844924D5DF9E___c** StaticGet___9()
	{
		return (::Class_3_85D6844924D5DF9E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_85D6844924D5DF9E___c_TypeDefinitionIndex)->GetStaticField(0x420C0);
	}
	static ::System::Comparison_1<::System::Single>** StaticGet___9__50_0()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_85D6844924D5DF9E___c_TypeDefinitionIndex)->GetStaticField(0x420C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_19AD88039E2EEBF8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_85D6844924D5DF9E___C_METHOD_1_19AD88039E2EEBF8_OFFSET))(this, a1, a2);
	}
};
