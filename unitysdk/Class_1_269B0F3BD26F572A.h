#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_26.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeOrderType.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradeState.h"
#include "unitysdk/System/Object.h"

class Class_1_51BA4980ED225F7B_2;
class Class_1_C086E47345F86771_4;
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }
namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradePlayerInfo; }
namespace RPG::Client::BlindBox::Trade { class PrivateBlindBoxTradeOrder; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define CLASS_1_269B0F3BD26F572A_METHOD_1_46B0901C3425EF89_OFFSET UNITYSDK_OFFSET(0x156A6D40)
#define CLASS_1_269B0F3BD26F572A_METHOD_1_4A851D7FF730C1C8_OFFSET UNITYSDK_OFFSET(0x156A6EE0)
#define CLASS_1_269B0F3BD26F572A_METHOD_1_90917D0B1957F59C_OFFSET UNITYSDK_OFFSET(0x156A70A0)
#define CLASS_1_269B0F3BD26F572A_METHOD_1_B2361B05D9C69ECD_OFFSET UNITYSDK_OFFSET(0x156A7050)
#define CLASS_1_269B0F3BD26F572A_METHOD_1_E69270EA437BBDA6_OFFSET UNITYSDK_OFFSET(0x156A7100)
#define CLASS_1_269B0F3BD26F572A_METHOD_1_F8A1ACB87F59EB05_OFFSET UNITYSDK_OFFSET(0x156A7340)

inline static constexpr unsigned int Class_1_269B0F3BD26F572A_TypeDefinitionIndex = 74868;

class Class_1_269B0F3BD26F572A : public ::System::Object
{
public:
	static ::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* Method_1_46B0901C3425EF89(::Class_1_51BA4980ED225F7B_2* a1)
	{
		return ((::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*(*)(::Class_1_51BA4980ED225F7B_2*))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_46B0901C3425EF89_OFFSET))(a1);
	}

	static ::RPG::Client::BlindBox::Trade::PrivateBlindBoxTradeOrder* Method_1_E69270EA437BBDA6(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a5, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a6, ::System::Boolean a7, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState a8, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a9, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a10, ::System::Boolean a11)
	{
		return ((::RPG::Client::BlindBox::Trade::PrivateBlindBoxTradeOrder*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::Boolean, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_E69270EA437BBDA6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	static ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* Method_1_F8A1ACB87F59EB05(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a5, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a6, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState a7, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a8, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo* a9, ::System::Boolean a10)
	{
		return ((::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::BlindBox::Trade::BlindBoxTradeState, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::RPG::Client::BlindBox::Trade::IBlindBoxTradePlayerInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_F8A1ACB87F59EB05_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::RPG::Client::Pet::BlindBox::IBlindBoxPet* Method_1_4A851D7FF730C1C8(::Class_1_C086E47345F86771_4* a1)
	{
		return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::Class_1_C086E47345F86771_4*))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_4A851D7FF730C1C8_OFFSET))(a1);
	}

	static ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType Method_1_90917D0B1957F59C(::Class_1_51BA4980ED225F7B_2* a1)
	{
		return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderType(*)(::Class_1_51BA4980ED225F7B_2*))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_90917D0B1957F59C_OFFSET))(a1);
	}

	static ::RPG::Client::BlindBox::Trade::BlindBoxTradeState Method_1_B2361B05D9C69ECD(::Enum_3_DB663931210BBC27_26 a1)
	{
		return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeState(*)(::Enum_3_DB663931210BBC27_26))((::PBYTE)hIl2Cpp + CLASS_1_269B0F3BD26F572A_METHOD_1_B2361B05D9C69ECD_OFFSET))(a1);
	}
};
