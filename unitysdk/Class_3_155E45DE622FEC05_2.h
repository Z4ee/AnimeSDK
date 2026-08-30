#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_155E45DE622FEC05_2_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1CB24DA0)
#define CLASS_3_155E45DE622FEC05_2_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1CB24D60)
#define CLASS_3_155E45DE622FEC05_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB24D90)

inline static constexpr unsigned int Class_3_155E45DE622FEC05_2_TypeDefinitionIndex = 21224;

class Class_3_155E45DE622FEC05_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* BJBIBMDPCNP; // 0x18
	::RPG::GameCore::DynamicFloat* KGKLPAMNDBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05_2*&))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_2_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05_2*))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_2_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
