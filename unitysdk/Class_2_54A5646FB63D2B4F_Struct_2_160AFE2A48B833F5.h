#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_54A5646FB63D2B4F_OverrideAspect.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_097CC0B46C6901FB_OFFSET UNITYSDK_OFFSET(0x15AAA20)
#define CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15AA960)
#define CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_982C431AE85D0440_OFFSET UNITYSDK_OFFSET(0x15AA9C0)

inline static constexpr unsigned int Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5_TypeDefinitionIndex = 67943;

struct alignas(8) Class_2_54A5646FB63D2B4F_Struct_2_160AFE2A48B833F5
{
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> Field_2_0; // 0x10
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> Field_2_1; // 0x18

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_982C431AE85D0440(::Class_2_54A5646FB63D2B4F_OverrideAspect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_54A5646FB63D2B4F_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_982C431AE85D0440_OFFSET))(this, a1);
	}

	::System::Void Method_2_097CC0B46C6901FB(::Class_2_54A5646FB63D2B4F_OverrideAspect a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::ItemOverrideReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_54A5646FB63D2B4F_OverrideAspect, ::System::Boolean, ::RPG::Client::OpenWorld::ItemOverrideReason))((::PBYTE)hIl2Cpp + CLASS_2_54A5646FB63D2B4F_STRUCT_2_160AFE2A48B833F5_METHOD_2_097CC0B46C6901FB_OFFSET))(this, a1, a2, a3);
	}
};
