#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_C270952194C1A3FA_1_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x16C7D020)
#define CLASS_3_C270952194C1A3FA_1_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x16C7CFA0)
#define CLASS_3_C270952194C1A3FA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7CFF0)

inline static constexpr unsigned int Class_3_C270952194C1A3FA_1_TypeDefinitionIndex = 19664;

class Class_3_C270952194C1A3FA_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C270952194C1A3FA_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C270952194C1A3FA_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C270952194C1A3FA_1*&))((::PBYTE)hIl2Cpp + CLASS_3_C270952194C1A3FA_1_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C270952194C1A3FA_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C270952194C1A3FA_1*))((::PBYTE)hIl2Cpp + CLASS_3_C270952194C1A3FA_1_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
