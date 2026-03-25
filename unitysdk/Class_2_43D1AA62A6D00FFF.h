#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"

class Class_1_945ACFB1FEBC7A2C_5;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class String; }

#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET UNITYSDK_OFFSET(0x1691DE30)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x1691DEA0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET UNITYSDK_OFFSET(0x1691DB90)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET UNITYSDK_OFFSET(0x1691DD30)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x1691DCB0)
#define CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1691DD10)
#define CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1691DF00)

inline static constexpr unsigned int Class_2_43D1AA62A6D00FFF_TypeDefinitionIndex = 32465;

class Class_2_43D1AA62A6D00FFF : public ::Entitas::Context_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_C4FB87A683D48212()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_C4FB87A683D48212_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_5* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_D2E216E2152E42E3(::System::String* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_D2E216E2152E42E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DF5D6BA733343EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_6DF5D6BA733343EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43D1AA62A6D00FFF_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}
};
