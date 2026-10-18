#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_18752BC39A13AD8E_METHOD_1_8DE944DA1C24CBD3_OFFSET UNITYSDK_OFFSET(0xB6C1CE0)
#define CLASS_1_18752BC39A13AD8E_METHOD_1_D2DBE9EB98F37C86_OFFSET UNITYSDK_OFFSET(0xB6C1D20)
#define CLASS_1_18752BC39A13AD8E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C1E20)

inline static constexpr unsigned int Class_1_18752BC39A13AD8E_TypeDefinitionIndex = 74924;

class Class_1_18752BC39A13AD8E : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_BFEKILADGJA()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18752BC39A13AD8E_TypeDefinitionIndex)->GetStaticField(0x144B0);
	}
	static ::RPG::Client::TextID* StaticGet_GBHONFAPABN()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18752BC39A13AD8E_TypeDefinitionIndex)->GetStaticField(0x144C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18752BC39A13AD8E__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_8DE944DA1C24CBD3(::RPG::Client::BlindBox::Pool::PoolClosedReason a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::BlindBox::Pool::PoolClosedReason))((::PBYTE)hIl2Cpp + CLASS_1_18752BC39A13AD8E_METHOD_1_8DE944DA1C24CBD3_OFFSET))(a1);
	}

	static ::RPG::Client::TextID Method_1_D2DBE9EB98F37C86(::RPG::Client::BlindBox::Pool::PoolClosedReason a1)
	{
		return ((::RPG::Client::TextID(*)(::RPG::Client::BlindBox::Pool::PoolClosedReason))((::PBYTE)hIl2Cpp + CLASS_1_18752BC39A13AD8E_METHOD_1_D2DBE9EB98F37C86_OFFSET))(a1);
	}
};
