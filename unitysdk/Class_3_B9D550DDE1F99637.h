#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_B9D550DDE1F99637_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x16BB8890)
#define CLASS_3_B9D550DDE1F99637_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x16BB8810)
#define CLASS_3_B9D550DDE1F99637__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB8860)

inline static constexpr unsigned int Class_3_B9D550DDE1F99637_TypeDefinitionIndex = 9934;

class Class_3_B9D550DDE1F99637 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x18
	::System::UInt32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9D550DDE1F99637__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B9D550DDE1F99637*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B9D550DDE1F99637*&))((::PBYTE)hIl2Cpp + CLASS_3_B9D550DDE1F99637_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B9D550DDE1F99637* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B9D550DDE1F99637*))((::PBYTE)hIl2Cpp + CLASS_3_B9D550DDE1F99637_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
