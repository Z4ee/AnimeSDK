#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A9A07DA1734981_1_METHOD_3_5A608339ECD0DAF1_OFFSET UNITYSDK_OFFSET(0x1D6BA870)
#define CLASS_3_E7A9A07DA1734981_1_METHOD_3_BFD20FCF9A20D104_OFFSET UNITYSDK_OFFSET(0x1D6BA830)
#define CLASS_3_E7A9A07DA1734981_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA860)

inline static constexpr unsigned int Class_3_E7A9A07DA1734981_1_TypeDefinitionIndex = 10224;

class Class_3_E7A9A07DA1734981_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 NMBKAIEIAPE; // 0x18
	::System::UInt32 LIFHGBNGGHK; // 0x1C
	::System::Boolean AHILIAPNFAG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFD20FCF9A20D104(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A9A07DA1734981_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A9A07DA1734981_1*&))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981_1_METHOD_3_BFD20FCF9A20D104_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5A608339ECD0DAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A9A07DA1734981_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A9A07DA1734981_1*))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981_1_METHOD_3_5A608339ECD0DAF1_OFFSET))(a1, a2);
	}
};
