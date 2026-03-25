#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_06E3452A211FC6E5.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"

class Class_1_70697F531F566942_1;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_1BDE5840D9920810_METHOD_4_07634AF52BD1D5A1_OFFSET UNITYSDK_OFFSET(0xA1C0A30)
#define CLASS_4_1BDE5840D9920810_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA1C0490)
#define CLASS_4_1BDE5840D9920810_METHOD_4_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0xA1C05B0)
#define CLASS_4_1BDE5840D9920810_METHOD_4_8FECDE5C3514452F_OFFSET UNITYSDK_OFFSET(0xA1C0AD0)
#define CLASS_4_1BDE5840D9920810_METHOD_4_A2C808B2C5AA98B5_OFFSET UNITYSDK_OFFSET(0xA1C0A20)
#define CLASS_4_1BDE5840D9920810_METHOD_4_A7F2C94024B42999_OFFSET UNITYSDK_OFFSET(0xA1C0620)
#define CLASS_4_1BDE5840D9920810_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA1C0900)
#define CLASS_4_1BDE5840D9920810_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA1C0810)
#define CLASS_4_1BDE5840D9920810__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C09A0)
#define CLASS_4_1BDE5840D9920810__ONBIND_OFFSET UNITYSDK_OFFSET(0xA1C0210)
#define CLASS_4_1BDE5840D9920810___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA1C0A10)

inline static constexpr unsigned int Class_4_1BDE5840D9920810_TypeDefinitionIndex = 58747;

class Class_4_1BDE5840D9920810 : public ::Class_3_06E3452A211FC6E5
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_5; // 0x0
	// static const ::System::String* Field_4_6; // 0x0
	// static const ::System::String* Field_4_7; // 0x0
	// static const ::System::String* Field_4_8; // 0x0
	// static const ::System::String* Field_4_9; // 0x0
	// static const ::System::String* Field_4_10; // 0x0
	::UnityEngine::UI::Image* Field_4_1; // 0x158
	::UnityEngine::UI::Image* Field_4_4; // 0x160
	::UnityEngine::UI::Image* Field_4_2; // 0x168
	::UnityEngine::UI::Image* Field_4_3; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_4_A7F2C94024B42999(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_A7F2C94024B42999_OFFSET))(this, a1);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_A2C808B2C5AA98B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_A2C808B2C5AA98B5_OFFSET))(this);
	}

	::System::Void Method_4_07634AF52BD1D5A1(::RPG::GameCore::EnergyBarState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_07634AF52BD1D5A1_OFFSET))(this, P0);
	}

	::System::Void Method_4_8FECDE5C3514452F(::Class_1_70697F531F566942_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_8FECDE5C3514452F_OFFSET))(this, P0);
	}
};
