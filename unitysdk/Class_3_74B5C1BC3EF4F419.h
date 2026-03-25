#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_74B5C1BC3EF4F419_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x16D82A90)
#define CLASS_3_74B5C1BC3EF4F419_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x16D82B10)
#define CLASS_3_74B5C1BC3EF4F419__CTOR_OFFSET UNITYSDK_OFFSET(0x16D82AE0)

inline static constexpr unsigned int Class_3_74B5C1BC3EF4F419_TypeDefinitionIndex = 20609;

class Class_3_74B5C1BC3EF4F419 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::Single Field_3_2; // 0x20
	::System::Boolean Field_3_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74B5C1BC3EF4F419__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74B5C1BC3EF4F419*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74B5C1BC3EF4F419*&))((::PBYTE)hIl2Cpp + CLASS_3_74B5C1BC3EF4F419_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_74B5C1BC3EF4F419* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_74B5C1BC3EF4F419*))((::PBYTE)hIl2Cpp + CLASS_3_74B5C1BC3EF4F419_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
