#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E01DF6570E9D1BA0;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xC261410)
#define CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xC2613C0)
#define CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETREDIRECTINFO_OFFSET UNITYSDK_OFFSET(0xC2616A0)
#define CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_METHOD_1_7690C35B452BE5CE_OFFSET UNITYSDK_OFFSET(0xC2614C0)
#define CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024__CTOR_OFFSET UNITYSDK_OFFSET(0xC2608E0)

inline static constexpr unsigned int Class_2_973B114F250678D9_Class_1_DAC37A5D53344024_TypeDefinitionIndex = 55959;

class Class_2_973B114F250678D9_Class_1_DAC37A5D53344024 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* JNAJEHBCCJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetKillProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETKILLPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 GetHPProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETHPPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7690C35B452BE5CE(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_METHOD_1_7690C35B452BE5CE_OFFSET))(this, a1);
	}

	::Class_1_E01DF6570E9D1BA0* GetRedirectInfo(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_E01DF6570E9D1BA0*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_DAC37A5D53344024_GETREDIRECTINFO_OFFSET))(this, a1);
	}
};
