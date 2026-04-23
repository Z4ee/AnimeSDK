#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E7A9A07DA1734981_METHOD_3_5A608339ECD0DAF1_OFFSET UNITYSDK_OFFSET(0x18492BE0)
#define CLASS_3_E7A9A07DA1734981_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x18492B60)
#define CLASS_3_E7A9A07DA1734981__CTOR_OFFSET UNITYSDK_OFFSET(0x18492BB0)

inline static constexpr unsigned int Class_3_E7A9A07DA1734981_TypeDefinitionIndex = 10112;

class Class_3_E7A9A07DA1734981 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18
	::System::UInt32 Field_3_2; // 0x1C
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A9A07DA1734981*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A9A07DA1734981*&))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5A608339ECD0DAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E7A9A07DA1734981* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E7A9A07DA1734981*))((::PBYTE)hIl2Cpp + CLASS_3_E7A9A07DA1734981_METHOD_3_5A608339ECD0DAF1_OFFSET))(a1, a2);
	}
};
