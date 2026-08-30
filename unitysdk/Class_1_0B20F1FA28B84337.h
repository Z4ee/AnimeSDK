#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorOperationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0B20F1FA28B84337_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x16F304B0)
#define CLASS_1_0B20F1FA28B84337__CTOR_OFFSET UNITYSDK_OFFSET(0x16F305C0)

inline static constexpr unsigned int Class_1_0B20F1FA28B84337_TypeDefinitionIndex = 13887;

class Class_1_0B20F1FA28B84337 : public ::System::Object
{
public:
	::System::String* NNACKOBKFGE; // 0x10
	::RPG::GameCore::FloorOperationType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B20F1FA28B84337__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0B20F1FA28B84337*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0B20F1FA28B84337*&))((::PBYTE)hIl2Cpp + CLASS_1_0B20F1FA28B84337_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
