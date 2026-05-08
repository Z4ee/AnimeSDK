#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD2BE7927F889C7B;

#define CLASS_1_DE93AF85A929747B_METHOD_1_1156AA9C8571A61E_OFFSET UNITYSDK_OFFSET(0x114CEF60)
#define CLASS_1_DE93AF85A929747B__CCTOR_OFFSET UNITYSDK_OFFSET(0x114CEF40)
#define CLASS_1_DE93AF85A929747B__CTOR_OFFSET UNITYSDK_OFFSET(0x114CEF30)

inline static constexpr unsigned int Class_1_DE93AF85A929747B_TypeDefinitionIndex = 46172;

class Class_1_DE93AF85A929747B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE93AF85A929747B_TypeDefinitionIndex)->GetStaticField(0xAAC0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE93AF85A929747B_TypeDefinitionIndex)->GetStaticField(0xAAC4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE93AF85A929747B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE93AF85A929747B__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_1156AA9C8571A61E(::Class_1_BD2BE7927F889C7B* a1, ::Class_1_BD2BE7927F889C7B* a2)
	{
		return ((::System::Int32(*)(::Class_1_BD2BE7927F889C7B*, ::Class_1_BD2BE7927F889C7B*))((::PBYTE)hIl2Cpp + CLASS_1_DE93AF85A929747B_METHOD_1_1156AA9C8571A61E_OFFSET))(a1, a2);
	}
};
