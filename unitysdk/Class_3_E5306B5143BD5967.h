#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E5306B5143BD5967_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x16B7A910)
#define CLASS_3_E5306B5143BD5967_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x16B7A990)
#define CLASS_3_E5306B5143BD5967__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7A960)

inline static constexpr unsigned int Class_3_E5306B5143BD5967_TypeDefinitionIndex = 9946;

class Class_3_E5306B5143BD5967 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single Field_3_1; // 0x18
	::System::Boolean Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5306B5143BD5967__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E5306B5143BD5967*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E5306B5143BD5967*&))((::PBYTE)hIl2Cpp + CLASS_3_E5306B5143BD5967_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E5306B5143BD5967* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E5306B5143BD5967*))((::PBYTE)hIl2Cpp + CLASS_3_E5306B5143BD5967_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
