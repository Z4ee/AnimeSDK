#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_86F40047A1F6088F_METHOD_1_0427367A2B99D82C_OFFSET UNITYSDK_OFFSET(0x10DBD8A0)
#define CLASS_1_86F40047A1F6088F_METHOD_1_24939A9212CE6563_OFFSET UNITYSDK_OFFSET(0x10DBD920)
#define CLASS_1_86F40047A1F6088F_METHOD_1_2E6716837D3CB2D6_OFFSET UNITYSDK_OFFSET(0x10DBD570)
#define CLASS_1_86F40047A1F6088F_METHOD_1_AA69EB2A35AC1C8B_OFFSET UNITYSDK_OFFSET(0x10DBD690)
#define CLASS_1_86F40047A1F6088F__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBD910)

inline static constexpr unsigned int Class_1_86F40047A1F6088F_TypeDefinitionIndex = 60334;

class Class_1_86F40047A1F6088F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86F40047A1F6088F__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_1_2E6716837D3CB2D6(::System::String* a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86F40047A1F6088F_METHOD_1_2E6716837D3CB2D6_OFFSET))(this, a1);
	}

	::Struct_2_E33A8767CD3B76C6 Method_1_AA69EB2A35AC1C8B(::System::Object* a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_86F40047A1F6088F_METHOD_1_AA69EB2A35AC1C8B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0427367A2B99D82C(::Struct_2_E33A8767CD3B76C6& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E33A8767CD3B76C6&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_86F40047A1F6088F_METHOD_1_0427367A2B99D82C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24939A9212CE6563(::Struct_2_E33A8767CD3B76C6& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E33A8767CD3B76C6&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_86F40047A1F6088F_METHOD_1_24939A9212CE6563_OFFSET))(this, a1, a2);
	}
};
