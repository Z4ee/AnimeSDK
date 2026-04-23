#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_06E3452A211FC6E5.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CLASS_4_1BDE5840D9920810_METHOD_4_07634AF52BD1D5A1_OFFSET UNITYSDK_OFFSET(0x90A6580)
#define CLASS_4_1BDE5840D9920810_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x90A63B0)
#define CLASS_4_1BDE5840D9920810_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x90A5F60)
#define CLASS_4_1BDE5840D9920810_METHOD_4_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x90A6080)
#define CLASS_4_1BDE5840D9920810_METHOD_4_8FECDE5C3514452F_OFFSET UNITYSDK_OFFSET(0x90A6620)
#define CLASS_4_1BDE5840D9920810_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x90A6470)
#define CLASS_4_1BDE5840D9920810_METHOD_4_C9046C2D8496E797_OFFSET UNITYSDK_OFFSET(0x90A60F0)
#define CLASS_4_1BDE5840D9920810_METHOD_4_F8ED142F54C0DCEC_OFFSET UNITYSDK_OFFSET(0x90A6570)
#define CLASS_4_1BDE5840D9920810__CTOR_OFFSET UNITYSDK_OFFSET(0x90A64F0)
#define CLASS_4_1BDE5840D9920810__ONBIND_OFFSET UNITYSDK_OFFSET(0x90A5E90)
#define CLASS_4_1BDE5840D9920810___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x90A6560)

inline static constexpr unsigned int Class_4_1BDE5840D9920810_TypeDefinitionIndex = 66071;

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
	::UnityEngine::UI::Image* Field_4_1; // 0x150
	::UnityEngine::UI::Image* Field_4_3; // 0x158
	::UnityEngine::UI::Image* Field_4_4; // 0x160
	::UnityEngine::UI::Image* Field_4_2; // 0x168

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

	::System::Void Method_4_C9046C2D8496E797(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_C9046C2D8496E797_OFFSET))(this, a1);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_F8ED142F54C0DCEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_F8ED142F54C0DCEC_OFFSET))(this);
	}

	::System::Void Method_4_07634AF52BD1D5A1(::RPG::GameCore::EnergyBarState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_07634AF52BD1D5A1_OFFSET))(this, P0);
	}

	::System::Void Method_4_8FECDE5C3514452F(::Class_1_70697F531F566942_2* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_1BDE5840D9920810_METHOD_4_8FECDE5C3514452F_OFFSET))(this, P0);
	}
};
