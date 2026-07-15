#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBGMType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }
namespace System { class String; }

#define CLASS_1_C6871D0DAD2A840E_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18EFC9A0)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_30688639C05367DF_OFFSET UNITYSDK_OFFSET(0x18EFCA70)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_35AE813E1A9FD332_OFFSET UNITYSDK_OFFSET(0x18EFCDD0)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_3F1C4983871A7C3E_OFFSET UNITYSDK_OFFSET(0x18EFCC20)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_69B522BF0D581960_OFFSET UNITYSDK_OFFSET(0x18EFCB10)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18EFCD30)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18EFC950)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_E246C7AF46F19BA3_OFFSET UNITYSDK_OFFSET(0x18EFCF00)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x18EFCCE0)
#define CLASS_1_C6871D0DAD2A840E_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x18EFCA20)
#define CLASS_1_C6871D0DAD2A840E__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFC940)

inline static constexpr unsigned int Class_1_C6871D0DAD2A840E_TypeDefinitionIndex = 60216;

class Class_1_C6871D0DAD2A840E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::Int32 Field_1_2; // 0x10
	::RPG::Client::CakeRaceBGMType Field_1_3; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_30688639C05367DF(::RPG::Client::CakeRaceBGMType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_30688639C05367DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F1C4983871A7C3E(::RPG::Client::CakeRaceBGMType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_3F1C4983871A7C3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET))(this);
	}

	::System::Void Method_1_69B522BF0D581960(::RPG::Client::CakeRaceBGMType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_69B522BF0D581960_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::AdventureAudioManager* Method_1_35AE813E1A9FD332()
	{
		return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_35AE813E1A9FD332_OFFSET))(this);
	}

	::System::String* Method_1_E246C7AF46F19BA3(::RPG::Client::CakeRaceBGMType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + CLASS_1_C6871D0DAD2A840E_METHOD_1_E246C7AF46F19BA3_OFFSET))(this, a1);
	}
};
