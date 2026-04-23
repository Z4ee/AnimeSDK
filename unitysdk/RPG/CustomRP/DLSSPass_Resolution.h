#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B8D70)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2298520)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18135FA0)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18135FB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_Resolution_TypeDefinitionIndex = 34944;

	struct alignas(4) DLSSPass_Resolution
	{
		::System::UInt32 width; // 0x10
		::System::UInt32 height; // 0x14

		static ::System::Boolean op_Equality(::RPG::CustomRP::DLSSPass_Resolution a, ::RPG::CustomRP::DLSSPass_Resolution b)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DLSSPass_Resolution, ::RPG::CustomRP::DLSSPass_Resolution))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::RPG::CustomRP::DLSSPass_Resolution a, ::RPG::CustomRP::DLSSPass_Resolution b)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DLSSPass_Resolution, ::RPG::CustomRP::DLSSPass_Resolution))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_GETHASHCODE_OFFSET))(this);
		}
	};
}
