#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_D02D0DD74D08864A_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x183D43D0)
#define CLASS_3_D02D0DD74D08864A_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x183D4350)
#define CLASS_3_D02D0DD74D08864A__CTOR_OFFSET UNITYSDK_OFFSET(0x183D43A0)

inline static constexpr unsigned int Class_3_D02D0DD74D08864A_TypeDefinitionIndex = 22303;

class Class_3_D02D0DD74D08864A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D02D0DD74D08864A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D02D0DD74D08864A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D02D0DD74D08864A*&))((::PBYTE)hIl2Cpp + CLASS_3_D02D0DD74D08864A_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D02D0DD74D08864A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D02D0DD74D08864A*))((::PBYTE)hIl2Cpp + CLASS_3_D02D0DD74D08864A_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
