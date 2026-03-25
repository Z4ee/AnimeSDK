#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropButtonConfig; }

#define CLASS_3_3FDFE25701E5CF81_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x16E1C210)
#define CLASS_3_3FDFE25701E5CF81_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x16E1C190)
#define CLASS_3_3FDFE25701E5CF81__CTOR_OFFSET UNITYSDK_OFFSET(0x16E1C1E0)

inline static constexpr unsigned int Class_3_3FDFE25701E5CF81_TypeDefinitionIndex = 19639;

class Class_3_3FDFE25701E5CF81 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FDFE25701E5CF81__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3FDFE25701E5CF81*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3FDFE25701E5CF81*&))((::PBYTE)hIl2Cpp + CLASS_3_3FDFE25701E5CF81_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3FDFE25701E5CF81* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3FDFE25701E5CF81*))((::PBYTE)hIl2Cpp + CLASS_3_3FDFE25701E5CF81_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
