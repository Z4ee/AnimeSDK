#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPerformType.h"
#include "unitysdk/Struct_2_9A0F9781FD520ADB.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_3_9EC4021517A92548;

#define CLASS_3_9EC4021517A92548_CLASS_1_283347446B0F16ED_METHOD_1_5115448D3ED146CE_OFFSET UNITYSDK_OFFSET(0x11EF93E0)
#define CLASS_3_9EC4021517A92548_CLASS_1_283347446B0F16ED__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF93D0)

inline static constexpr unsigned int Class_3_9EC4021517A92548_Class_1_283347446B0F16ED_TypeDefinitionIndex = 80991;

class Class_3_9EC4021517A92548_Class_1_283347446B0F16ED : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x10
	::Class_3_9EC4021517A92548* Field_1_0; // 0x40
	::Struct_2_9A0F9781FD520ADB Field_1_2; // 0x48
	::System::Int32 Field_1_3; // 0x70
	::System::Int32 Field_1_1; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EC4021517A92548_CLASS_1_283347446B0F16ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5115448D3ED146CE(::Share::EPerformType a1, ::Class_1_D65512A83CF70AB7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EPerformType, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + CLASS_3_9EC4021517A92548_CLASS_1_283347446B0F16ED_METHOD_1_5115448D3ED146CE_OFFSET))(this, a1, a2);
	}
};
