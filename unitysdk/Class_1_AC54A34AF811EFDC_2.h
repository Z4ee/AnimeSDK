#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD6B06EE3D4AEBFA;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define CLASS_1_AC54A34AF811EFDC_2_METHOD_1_A1F1EAB83F88A983_OFFSET UNITYSDK_OFFSET(0xCC8F210)
#define CLASS_1_AC54A34AF811EFDC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8F1C0)

inline static constexpr unsigned int Class_1_AC54A34AF811EFDC_2_TypeDefinitionIndex = 74835;

class Class_1_AC54A34AF811EFDC_2 : public ::System::Object
{
public:
	::Class_1_DD6B06EE3D4AEBFA* KLCDAHLCILC; // 0x10

	::System::Void _ctor(::Class_1_DD6B06EE3D4AEBFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD6B06EE3D4AEBFA*))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* Method_1_A1F1EAB83F88A983(::System::UInt32 a1)
	{
		return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_2_METHOD_1_A1F1EAB83F88A983_OFFSET))(this, a1);
	}
};
