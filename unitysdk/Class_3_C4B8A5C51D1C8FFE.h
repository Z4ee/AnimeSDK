#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_C4B8A5C51D1C8FFE_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x19291A10)
#define CLASS_3_C4B8A5C51D1C8FFE_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x19291AB0)
#define CLASS_3_C4B8A5C51D1C8FFE__CTOR_OFFSET UNITYSDK_OFFSET(0x19291A70)

inline static constexpr unsigned int Class_3_C4B8A5C51D1C8FFE_TypeDefinitionIndex = 22789;

class Class_3_C4B8A5C51D1C8FFE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4B8A5C51D1C8FFE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C4B8A5C51D1C8FFE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C4B8A5C51D1C8FFE*&))((::PBYTE)hIl2Cpp + CLASS_3_C4B8A5C51D1C8FFE_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C4B8A5C51D1C8FFE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C4B8A5C51D1C8FFE*))((::PBYTE)hIl2Cpp + CLASS_3_C4B8A5C51D1C8FFE_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
