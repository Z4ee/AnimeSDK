#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_ABB36FF48FF9B441_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x19103550)
#define CLASS_3_ABB36FF48FF9B441_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x191035D0)
#define CLASS_3_ABB36FF48FF9B441__CTOR_OFFSET UNITYSDK_OFFSET(0x191035A0)

inline static constexpr unsigned int Class_3_ABB36FF48FF9B441_TypeDefinitionIndex = 9873;

class Class_3_ABB36FF48FF9B441 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABB36FF48FF9B441__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ABB36FF48FF9B441*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ABB36FF48FF9B441*&))((::PBYTE)hIl2Cpp + CLASS_3_ABB36FF48FF9B441_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ABB36FF48FF9B441* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ABB36FF48FF9B441*))((::PBYTE)hIl2Cpp + CLASS_3_ABB36FF48FF9B441_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
