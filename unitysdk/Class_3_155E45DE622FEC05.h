#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_155E45DE622FEC05_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1D0D1610)
#define CLASS_3_155E45DE622FEC05_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1D0D15D0)
#define CLASS_3_155E45DE622FEC05__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D1600)

inline static constexpr unsigned int Class_3_155E45DE622FEC05_TypeDefinitionIndex = 10181;

class Class_3_155E45DE622FEC05 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
	::RPG::GameCore::DynamicFloat* MFNNLGJAEML; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05*&))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_155E45DE622FEC05* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_155E45DE622FEC05*))((::PBYTE)hIl2Cpp + CLASS_3_155E45DE622FEC05_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
