#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPerformType.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_1_5CFE684023F165BE;
class Class_3_9EC4021517A92548;

#define CLASS_3_9EC4021517A92548_CLASS_1_D7DC1A55DA60D093_METHOD_1_5257F4E808DC7C57_OFFSET UNITYSDK_OFFSET(0x1C1399E0)
#define CLASS_3_9EC4021517A92548_CLASS_1_D7DC1A55DA60D093__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1399D0)

inline static constexpr unsigned int Class_3_9EC4021517A92548_Class_1_D7DC1A55DA60D093_TypeDefinitionIndex = 83982;

class Class_3_9EC4021517A92548_Class_1_D7DC1A55DA60D093 : public ::System::Object
{
public:
	::Class_3_9EC4021517A92548* Field_1_2; // 0x10
	::Struct_2_25290555339097B0 Field_1_0; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x40
	::System::Int32 Field_1_1; // 0x70
	::System::Int32 Field_1_7; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EC4021517A92548_CLASS_1_D7DC1A55DA60D093__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5257F4E808DC7C57(::Share::EPerformType a1, ::Class_1_5CFE684023F165BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EPerformType, ::Class_1_5CFE684023F165BE*))((::PBYTE)hIl2Cpp + CLASS_3_9EC4021517A92548_CLASS_1_D7DC1A55DA60D093_METHOD_1_5257F4E808DC7C57_OFFSET))(this, a1, a2);
	}
};
