#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_293C6AF513403273;
class Class_2_750992DE31E2B93D;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_750992DE31E2B93D___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1098A8B0)
#define CLASS_2_750992DE31E2B93D___C__DISPLAYCLASS5_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1098A8C0)

inline static constexpr unsigned int Class_2_750992DE31E2B93D___c__DisplayClass5_0_TypeDefinitionIndex = 64595;

class Class_2_750992DE31E2B93D___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_750992DE31E2B93D* __4__this; // 0x10
	::Class_2_293C6AF513403273* operation; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_750992DE31E2B93D___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Execute_b__0(::RPG::Client::IAssetOperation* loader)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_750992DE31E2B93D___C__DISPLAYCLASS5_0__EXECUTE_B__0_OFFSET))(this, loader);
	}
};
