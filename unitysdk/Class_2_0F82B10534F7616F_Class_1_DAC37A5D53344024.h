#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E01DF6570E9D1BA0;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF31290)
#define CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF31240)
#define CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETREDIRECTINFO_OFFSET UNITYSDK_OFFSET(0xAF31520)
#define CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_METHOD_1_7690C35B452BE5CE_OFFSET UNITYSDK_OFFSET(0xAF31340)
#define CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024__CTOR_OFFSET UNITYSDK_OFFSET(0xAF30520)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_Class_1_DAC37A5D53344024_TypeDefinitionIndex = 52281;

class Class_2_0F82B10534F7616F_Class_1_DAC37A5D53344024 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetKillProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETKILLPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 GetHPProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETHPPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7690C35B452BE5CE(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_METHOD_1_7690C35B452BE5CE_OFFSET))(this, a1);
	}

	::Class_1_E01DF6570E9D1BA0* GetRedirectInfo(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_E01DF6570E9D1BA0*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_DAC37A5D53344024_GETREDIRECTINFO_OFFSET))(this, a1);
	}
};
