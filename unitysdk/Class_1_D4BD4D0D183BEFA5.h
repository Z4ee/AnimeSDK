#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D4BD4D0D183BEFA5_METHOD_1_BA9374DE24D85E63_1_OFFSET UNITYSDK_OFFSET(0x1709C340)
#define CLASS_1_D4BD4D0D183BEFA5_METHOD_1_BA9374DE24D85E63_OFFSET UNITYSDK_OFFSET(0x1709C220)
#define CLASS_1_D4BD4D0D183BEFA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1709C460)

inline static constexpr unsigned int Class_1_D4BD4D0D183BEFA5_TypeDefinitionIndex = 52142;

class Class_1_D4BD4D0D183BEFA5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int64>** StaticGet_JAIMAIPPDOJ()
	{
		return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4BD4D0D183BEFA5_TypeDefinitionIndex)->GetStaticField(0x5EFD0);
	}
	static ::Il2CppArray<::System::Int64>** StaticGet_LIGAMFDAPKG()
	{
		return (::Il2CppArray<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4BD4D0D183BEFA5_TypeDefinitionIndex)->GetStaticField(0x5EFD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4BD4D0D183BEFA5__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_BA9374DE24D85E63(::System::Int32 a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_D4BD4D0D183BEFA5_METHOD_1_BA9374DE24D85E63_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BA9374DE24D85E63_1(::System::Int32 a1, ::System::Int64& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_D4BD4D0D183BEFA5_METHOD_1_BA9374DE24D85E63_1_OFFSET))(a1, a2);
	}
};
