#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC54A34AF811EFDC_1;
class Class_1_AC54A34AF811EFDC_2;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define CLASS_1_355B6F4012CB64BA_METHOD_1_83AD8205A50DC354_OFFSET UNITYSDK_OFFSET(0xB871650)
#define CLASS_1_355B6F4012CB64BA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8715D0)

inline static constexpr unsigned int Class_1_355B6F4012CB64BA_TypeDefinitionIndex = 74832;

class Class_1_355B6F4012CB64BA : public ::System::Object
{
public:
	::Class_1_AC54A34AF811EFDC_1* KKHDIBEHPJA; // 0x10
	::Class_1_AC54A34AF811EFDC_2* ADHGPMBAAFG; // 0x18

	::System::Void _ctor(::Class_1_AC54A34AF811EFDC_2* a1, ::Class_1_AC54A34AF811EFDC_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC54A34AF811EFDC_2*, ::Class_1_AC54A34AF811EFDC_1*))((::PBYTE)hIl2Cpp + CLASS_1_355B6F4012CB64BA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* Method_1_83AD8205A50DC354(::System::UInt32 a1)
	{
		return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_355B6F4012CB64BA_METHOD_1_83AD8205A50DC354_OFFSET))(this, a1);
	}
};
