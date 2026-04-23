#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_155E45DE622FEC05_3_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1824CFD0)
#define CLASS_3_155E45DE622FEC05_3_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x1824CF50)
#define CLASS_3_155E45DE622FEC05_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1824CFA0)

inline static constexpr unsigned int Class_3_155E45DE622FEC05_3_TypeDefinitionIndex = 22054;

class Class_3_155E45DE622FEC05_3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05_3*&))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_3_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05_3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05_3*))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_3_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
