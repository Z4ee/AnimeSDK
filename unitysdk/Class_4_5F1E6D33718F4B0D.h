#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_AC01FCB2512C56A9.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_5F1E6D33718F4B0D_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x191281D0)
#define CLASS_4_5F1E6D33718F4B0D_METHOD_4_40584B80B8904706_OFFSET UNITYSDK_OFFSET(0x19127CA0)
#define CLASS_4_5F1E6D33718F4B0D_METHOD_4_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0x191278D0)
#define CLASS_4_5F1E6D33718F4B0D_METHOD_4_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x19127C30)
#define CLASS_4_5F1E6D33718F4B0D_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19128290)
#define CLASS_4_5F1E6D33718F4B0D__CTOR_OFFSET UNITYSDK_OFFSET(0x19128310)
#define CLASS_4_5F1E6D33718F4B0D__ONBIND_OFFSET UNITYSDK_OFFSET(0x19127800)

inline static constexpr unsigned int Class_4_5F1E6D33718F4B0D_TypeDefinitionIndex = 71646;

class Class_4_5F1E6D33718F4B0D : public ::Class_3_AC01FCB2512C56A9
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* ECKLIPEJJFJ; // 0x0
	// static const ::System::String* LGIGALKBHLA; // 0x0
	// static const ::System::String* ODIALKBLDDJ; // 0x0
	// static const ::System::String* MLLPFHCABCJ; // 0x0
	// static const ::System::String* ENLMMALDOOL; // 0x0
	// static const ::System::String* NOEKNNOEBLG; // 0x0
	// static const ::System::String* PNOIGDDGEBA; // 0x0
	::UnityEngine::UI::Image* LFAMDJJAPJK; // 0x150
	::UnityEngine::UI::Image* LIDNLCGBDNG; // 0x158
	::UnityEngine::UI::Image* KMBOKCMHBBC; // 0x160
	::UnityEngine::UI::Image* KNJNMFKACAN; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_7829C51DA0CC822B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D_METHOD_4_7829C51DA0CC822B_OFFSET))(this);
	}

	::System::Void Method_4_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D_METHOD_4_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_4_40584B80B8904706(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D_METHOD_4_40584B80B8904706_OFFSET))(this, a1);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F1E6D33718F4B0D_METHOD_4_9681042564541CD6_OFFSET))(this);
	}
};
