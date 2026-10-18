#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD6B06EE3D4AEBFA;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define CLASS_1_AC54A34AF811EFDC_1_METHOD_1_B5D08EFD68250400_OFFSET UNITYSDK_OFFSET(0xBFEE460)
#define CLASS_1_AC54A34AF811EFDC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEE410)

inline static constexpr unsigned int Class_1_AC54A34AF811EFDC_1_TypeDefinitionIndex = 74829;

class Class_1_AC54A34AF811EFDC_1 : public ::System::Object
{
public:
	::Class_1_DD6B06EE3D4AEBFA* KLCDAHLCILC; // 0x10

	::System::Void _ctor(::Class_1_DD6B06EE3D4AEBFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD6B06EE3D4AEBFA*))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* Method_1_B5D08EFD68250400(::System::UInt32 a1)
	{
		return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_1_METHOD_1_B5D08EFD68250400_OFFSET))(this, a1);
	}
};
