#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_AC01FCB2512C56A9.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_D4A6D34B77848FE2_METHOD_4_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0x1592F240)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x1592F5A0)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_9C26621CABB1E348_OFFSET UNITYSDK_OFFSET(0x1592F610)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1592FB60)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1592FA70)
#define CLASS_4_D4A6D34B77848FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1592FC00)
#define CLASS_4_D4A6D34B77848FE2__ONBIND_OFFSET UNITYSDK_OFFSET(0x1592F140)

inline static constexpr unsigned int Class_4_D4A6D34B77848FE2_TypeDefinitionIndex = 71699;

class Class_4_D4A6D34B77848FE2 : public ::Class_3_AC01FCB2512C56A9
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
	::UnityEngine::UI::Image* LIDNLCGBDNG; // 0x150
	::UnityEngine::UI::Image* LFAMDJJAPJK; // 0x158
	::UnityEngine::UI::Image* KMBOKCMHBBC; // 0x160
	::UnityEngine::UI::Image* KNJNMFKACAN; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_7829C51DA0CC822B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2_METHOD_4_7829C51DA0CC822B_OFFSET))(this);
	}

	::System::Void Method_4_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2_METHOD_4_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_4_9C26621CABB1E348(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2_METHOD_4_9C26621CABB1E348_OFFSET))(this, a1);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D4A6D34B77848FE2_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}
};
