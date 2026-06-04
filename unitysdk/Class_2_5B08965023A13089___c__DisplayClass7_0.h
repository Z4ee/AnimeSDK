#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_293C6AF513403273;
class Class_2_5B08965023A13089;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_5B08965023A13089___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7CFF0)
#define CLASS_2_5B08965023A13089___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xAB7D0F0)

inline static constexpr unsigned int Class_2_5B08965023A13089___c__DisplayClass7_0_TypeDefinitionIndex = 74461;

class Class_2_5B08965023A13089___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_5B08965023A13089* __4__this; // 0x10
	::Class_2_293C6AF513403273* operation; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Execute_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET))(this, a1);
	}
};
