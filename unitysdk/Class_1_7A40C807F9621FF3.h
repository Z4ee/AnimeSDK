#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E31305FAF4D542A3.h"
#include "unitysdk/System/Object.h"

class Class_1_414BCDCDAD47B487;
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { class String; }

#define CLASS_1_7A40C807F9621FF3_METHOD_1_03DB51F815815EC3_OFFSET UNITYSDK_OFFSET(0x15F5AC30)
#define CLASS_1_7A40C807F9621FF3_METHOD_1_1531770AC6E73732_OFFSET UNITYSDK_OFFSET(0x15F5ABE0)
#define CLASS_1_7A40C807F9621FF3_METHOD_1_A719D1C916998F2C_OFFSET UNITYSDK_OFFSET(0x15F5ACB0)
#define CLASS_1_7A40C807F9621FF3_METHOD_1_ABE5738A0CCE8823_OFFSET UNITYSDK_OFFSET(0x15F5AB80)

inline static constexpr unsigned int Class_1_7A40C807F9621FF3_TypeDefinitionIndex = 70577;

class Class_1_7A40C807F9621FF3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Boolean Method_1_ABE5738A0CCE8823(::Struct_2_E31305FAF4D542A3 a1)
	{
		return ((::System::Boolean(*)(::Struct_2_E31305FAF4D542A3))((::PBYTE)hIl2Cpp + CLASS_1_7A40C807F9621FF3_METHOD_1_ABE5738A0CCE8823_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1531770AC6E73732(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A40C807F9621FF3_METHOD_1_1531770AC6E73732_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_03DB51F815815EC3(::Class_1_414BCDCDAD47B487* a1)
	{
		return ((::System::Boolean(*)(::Class_1_414BCDCDAD47B487*))((::PBYTE)hIl2Cpp + CLASS_1_7A40C807F9621FF3_METHOD_1_03DB51F815815EC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A719D1C916998F2C(::RPG::Client::OpenWorld::StreamingLayerDetail* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::OpenWorld::StreamingLayerDetail*))((::PBYTE)hIl2Cpp + CLASS_1_7A40C807F9621FF3_METHOD_1_A719D1C916998F2C_OFFSET))(a1);
	}
};
