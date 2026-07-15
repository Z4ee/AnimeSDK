#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_664BAA36605000D6_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1B2D4830)
#define CLASS_3_664BAA36605000D6_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1B2D4880)
#define CLASS_3_664BAA36605000D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4870)

inline static constexpr unsigned int Class_3_664BAA36605000D6_TypeDefinitionIndex = 21575;

class Class_3_664BAA36605000D6 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_664BAA36605000D6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_664BAA36605000D6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_664BAA36605000D6*&))((::PBYTE)hIl2Cpp + CLASS_3_664BAA36605000D6_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_664BAA36605000D6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_664BAA36605000D6*))((::PBYTE)hIl2Cpp + CLASS_3_664BAA36605000D6_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
