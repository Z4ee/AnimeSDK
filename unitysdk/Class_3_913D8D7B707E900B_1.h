#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_913D8D7B707E900B_1_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1D1F0910)
#define CLASS_3_913D8D7B707E900B_1_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1D1F08D0)
#define CLASS_3_913D8D7B707E900B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0900)

inline static constexpr unsigned int Class_3_913D8D7B707E900B_1_TypeDefinitionIndex = 19910;

class Class_3_913D8D7B707E900B_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
	::Enum_3_0A3761FE34514D6C_3 MMNJODIJPOE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_913D8D7B707E900B_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_913D8D7B707E900B_1*&))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B_1_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_913D8D7B707E900B_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_913D8D7B707E900B_1*))((::PBYTE)hIl2Cpp + CLASS_3_913D8D7B707E900B_1_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
