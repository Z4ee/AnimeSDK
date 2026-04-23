#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_668FE281FA72D3E8_4;
class Class_1_D17272E82AE804C2_150;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_D73C2F18EE2CD5F1_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x12537A20)
#define CLASS_1_D73C2F18EE2CD5F1_METHOD_1_37AF1CBD74B61AAA_OFFSET UNITYSDK_OFFSET(0x125379D0)
#define CLASS_1_D73C2F18EE2CD5F1__CTOR_OFFSET UNITYSDK_OFFSET(0x125378C0)

inline static constexpr unsigned int Class_1_D73C2F18EE2CD5F1_TypeDefinitionIndex = 58152;

class Class_1_D73C2F18EE2CD5F1 : public ::System::Object
{
public:
	::Class_1_071D0EF220D742B6* Field_1_3; // 0x10
	::Class_1_D17272E82AE804C2_150* Field_1_2; // 0x18
	::RPG::Client::IAvatarInfoProvider* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::Enum_3_01618AD0437C8486 Field_1_4; // 0x2C

	::System::Void _ctor(::Class_1_668FE281FA72D3E8_4* a1, ::Class_1_D17272E82AE804C2_150* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_4*, ::Class_1_D17272E82AE804C2_150*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_D73C2F18EE2CD5F1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_37AF1CBD74B61AAA()
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D73C2F18EE2CD5F1_METHOD_1_37AF1CBD74B61AAA_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D73C2F18EE2CD5F1_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}
};
