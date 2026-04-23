#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2CA2C8C31F52936_1;
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class SettledPunkLordData; }

#define CLASS_1_3661EF130C0A0B94_METHOD_1_0E45D490A37E66A2_OFFSET UNITYSDK_OFFSET(0x11E4CB60)
#define CLASS_1_3661EF130C0A0B94_METHOD_1_B3452B7AB16D9342_OFFSET UNITYSDK_OFFSET(0x11E4CC00)

inline static constexpr unsigned int Class_1_3661EF130C0A0B94_TypeDefinitionIndex = 61466;

class Class_1_3661EF130C0A0B94 : public ::System::Object
{
public:
	static ::RPG::Client::PunkLordData* Method_1_0E45D490A37E66A2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::PunkLordData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3661EF130C0A0B94_METHOD_1_0E45D490A37E66A2_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::SettledPunkLordData* Method_1_B3452B7AB16D9342(::Class_1_C2CA2C8C31F52936_1* a1)
	{
		return ((::RPG::Client::SettledPunkLordData*(*)(::Class_1_C2CA2C8C31F52936_1*))((::PBYTE)hIl2Cpp + CLASS_1_3661EF130C0A0B94_METHOD_1_B3452B7AB16D9342_OFFSET))(a1);
	}
};
