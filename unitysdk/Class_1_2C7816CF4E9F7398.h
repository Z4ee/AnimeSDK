#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DPairState.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;

#define CLASS_1_2C7816CF4E9F7398_CLEAR_OFFSET UNITYSDK_OFFSET(0x10A4E210)
#define CLASS_1_2C7816CF4E9F7398_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10A4E260)
#define CLASS_1_2C7816CF4E9F7398__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4E2B0)

inline static constexpr unsigned int Class_1_2C7816CF4E9F7398_TypeDefinitionIndex = 45272;

class Class_1_2C7816CF4E9F7398 : public ::System::Object
{
public:
	::Class_1_98133438BFCB56ED* Field_1_1; // 0x10
	::Class_1_98133438BFCB56ED* Field_1_2; // 0x18
	::System::UInt64 Field_1_0; // 0x20
	::RPG::GameCore::Collision2DPairState Field_1_3; // 0x28
	::RPG::GameCore::FixVec2 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C7816CF4E9F7398__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C7816CF4E9F7398_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C7816CF4E9F7398_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
