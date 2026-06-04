#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9AF9867BCD86F583;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BFEF016932446F8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x189F62F0)
#define CLASS_1_4BFEF016932446F8_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x189D5670)
#define CLASS_1_4BFEF016932446F8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x189D4BA0)
#define CLASS_1_4BFEF016932446F8__CTOR_OFFSET UNITYSDK_OFFSET(0x189F6350)

inline static constexpr unsigned int Class_1_4BFEF016932446F8_TypeDefinitionIndex = 34913;

class Class_1_4BFEF016932446F8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Field_1_0; // 0x10
	::Class_1_9AF9867BCD86F583* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::RPG::GameCore::CakeRaceMoveState Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x31
	::System::Boolean Field_1_8; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
