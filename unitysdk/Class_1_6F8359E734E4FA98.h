#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }

#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xDCB2A10)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDCB28B0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0xDCB2630)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_7780D58EDE2C3060_OFFSET UNITYSDK_OFFSET(0xDCB2410)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xDCB2CC0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_1_OFFSET UNITYSDK_OFFSET(0xDCB2B20)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_OFFSET UNITYSDK_OFFSET(0xDCB29B0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_A36D8390FCB343FA_OFFSET UNITYSDK_OFFSET(0xDCB2B80)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xDCB2D60)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xDCB2FE0)
#define CLASS_1_6F8359E734E4FA98__CTOR_OFFSET UNITYSDK_OFFSET(0xDCB3050)

inline static constexpr unsigned int Class_1_6F8359E734E4FA98_TypeDefinitionIndex = 78318;

class Class_1_6F8359E734E4FA98 : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* GLKOKAONKDI; // 0x10
	::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* LMAGNOACOGP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7780D58EDE2C3060(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_7780D58EDE2C3060_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	static ::System::Void Method_1_A36D8390FCB343FA(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* a1)
	{
		return ((::System::Void(*)(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_A36D8390FCB343FA_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_3C029C534AE1FB6B_OFFSET))();
	}

	static ::System::Void Method_1_8E6109045F434680(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E6109045F434680_1(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))();
	}

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}
};
