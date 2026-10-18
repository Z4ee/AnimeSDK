#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_913D8D7B707E900B_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1CECDF60)
#define CLASS_3_913D8D7B707E900B_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1CECDF20)
#define CLASS_3_913D8D7B707E900B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECDF50)

inline static constexpr unsigned int Class_3_913D8D7B707E900B_TypeDefinitionIndex = 19906;

class Class_3_913D8D7B707E900B : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::Enum_3_84F790F6B4BFF34E KIODCPPMEIE; // 0x20
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_913D8D7B707E900B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_913D8D7B707E900B*&))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_913D8D7B707E900B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_913D8D7B707E900B*))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
