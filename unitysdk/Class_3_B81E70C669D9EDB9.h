#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_B81E70C669D9EDB9_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x1D0CAA50)
#define CLASS_3_B81E70C669D9EDB9_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D0CAAF0)
#define CLASS_3_B81E70C669D9EDB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CAAB0)

inline static constexpr unsigned int Class_3_B81E70C669D9EDB9_TypeDefinitionIndex = 23918;

class Class_3_B81E70C669D9EDB9 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B81E70C669D9EDB9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B81E70C669D9EDB9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B81E70C669D9EDB9*&))((::PBYTE)hIl2Cpp + CLASS_3_B81E70C669D9EDB9_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B81E70C669D9EDB9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B81E70C669D9EDB9*))((::PBYTE)hIl2Cpp + CLASS_3_B81E70C669D9EDB9_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
