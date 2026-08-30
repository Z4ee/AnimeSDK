#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_849EE5CF9026AE9F;

#define RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4_GET_CONTENTDATA_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4_GET_FLYSPEED_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4__CTOR_OFFSET UNITYSDK_OFFSET(0x151060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuController_Struct_2_073B2444F83A44B4_TypeDefinitionIndex = 68912;

	struct alignas(8) MonoDanmuController_Struct_2_073B2444F83A44B4
	{
		::Class_1_849EE5CF9026AE9F* _ContentData_k__BackingField; // 0x10
		::System::Single _FlySpeed_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_849EE5CF9026AE9F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_849EE5CF9026AE9F* get_ContentData()
		{
			return ((::Class_1_849EE5CF9026AE9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4_GET_CONTENTDATA_OFFSET))(this);
		}

		::System::Single get_FlySpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_STRUCT_2_073B2444F83A44B4_GET_FLYSPEED_OFFSET))(this);
		}
	};
}
