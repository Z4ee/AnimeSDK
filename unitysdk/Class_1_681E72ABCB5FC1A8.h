#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1013;

#define CLASS_1_681E72ABCB5FC1A8_METHOD_1_395A682DDEC7EF33_OFFSET UNITYSDK_OFFSET(0x15AD1FC0)
#define CLASS_1_681E72ABCB5FC1A8_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x15AD2670)
#define CLASS_1_681E72ABCB5FC1A8_METHOD_1_51E687C95745524C_OFFSET UNITYSDK_OFFSET(0x15AD1EE0)
#define CLASS_1_681E72ABCB5FC1A8_METHOD_1_906B0AE722BFD24E_OFFSET UNITYSDK_OFFSET(0x15AD26F0)
#define CLASS_1_681E72ABCB5FC1A8_METHOD_1_D023F56697543487_OFFSET UNITYSDK_OFFSET(0x15AD1D70)
#define CLASS_1_681E72ABCB5FC1A8__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD1D60)

inline static constexpr unsigned int Class_1_681E72ABCB5FC1A8_TypeDefinitionIndex = 66707;

class Class_1_681E72ABCB5FC1A8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1013* EEFMDEHLLFI; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1013* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1013*))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::PreCharacterStatus Method_1_D023F56697543487(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PreAvatarType a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::PreCharacterStatus(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PreAvatarType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8_METHOD_1_D023F56697543487_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_51E687C95745524C(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PreAvatarType a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PreAvatarType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8_METHOD_1_51E687C95745524C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_395A682DDEC7EF33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8_METHOD_1_395A682DDEC7EF33_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_906B0AE722BFD24E(::System::UInt32 a1, ::RPG::Client::PreCharacterStatus a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PreCharacterStatus))((::PBYTE)hIl2Cpp + CLASS_1_681E72ABCB5FC1A8_METHOD_1_906B0AE722BFD24E_OFFSET))(this, a1, a2);
	}
};
