#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_AC01FCB2512C56A9.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_D4A6D34B77848FE2_METHOD_4_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0x17C87790)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x17C87AF0)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_9C26621CABB1E348_OFFSET UNITYSDK_OFFSET(0x17C87B60)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17C880B0)
#define CLASS_4_D4A6D34B77848FE2_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17C87FC0)
#define CLASS_4_D4A6D34B77848FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x17C88150)
#define CLASS_4_D4A6D34B77848FE2__ONBIND_OFFSET UNITYSDK_OFFSET(0x17C87690)

inline static constexpr unsigned int Class_4_D4A6D34B77848FE2_TypeDefinitionIndex = 68453;

class Class_4_D4A6D34B77848FE2 : public ::Class_3_AC01FCB2512C56A9
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_1; // 0x0
	// static const ::System::String* Field_4_2; // 0x0
	// static const ::System::String* Field_4_3; // 0x0
	// static const ::System::String* Field_4_4; // 0x0
	// static const ::System::String* Field_4_5; // 0x0
	// static const ::System::String* Field_4_6; // 0x0
	::UnityEngine::UI::Image* Field_4_7; // 0x150
	::UnityEngine::UI::Image* Field_4_8; // 0x158
	::UnityEngine::UI::Image* Field_4_9; // 0x160
	::UnityEngine::UI::Image* Field_4_10; // 0x168

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
