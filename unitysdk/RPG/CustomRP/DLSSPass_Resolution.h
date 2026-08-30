#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AE0B60)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7843F0)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18570EA0)
#define RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18570EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_Resolution_TypeDefinitionIndex = 36870;

	struct alignas(4) DLSSPass_Resolution
	{
		::System::UInt32 width; // 0x10
		::System::UInt32 height; // 0x14

		static ::System::Boolean op_Equality(::RPG::CustomRP::DLSSPass_Resolution a1, ::RPG::CustomRP::DLSSPass_Resolution a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DLSSPass_Resolution, ::RPG::CustomRP::DLSSPass_Resolution))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::CustomRP::DLSSPass_Resolution a1, ::RPG::CustomRP::DLSSPass_Resolution a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DLSSPass_Resolution, ::RPG::CustomRP::DLSSPass_Resolution))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS_RESOLUTION_GETHASHCODE_OFFSET))(this);
		}
	};
}
