#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }

#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xC467620)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC4674C0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_7780D58EDE2C3060_OFFSET UNITYSDK_OFFSET(0xC467020)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC4678D0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_1_OFFSET UNITYSDK_OFFSET(0xC467730)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_OFFSET UNITYSDK_OFFSET(0xC4675C0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_A36D8390FCB343FA_OFFSET UNITYSDK_OFFSET(0xC467790)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0xC467240)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xC467970)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xC467BF0)
#define CLASS_1_6F8359E734E4FA98__CTOR_OFFSET UNITYSDK_OFFSET(0xC467C60)

inline static constexpr unsigned int Class_1_6F8359E734E4FA98_TypeDefinitionIndex = 72836;

class Class_1_6F8359E734E4FA98 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* Field_1_0; // 0x10
	::Cinemachine::CinemachineVirtualCamera* Field_1_1; // 0x18

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

	static ::System::Void Method_1_B681CCB7CA0E61C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_B681CCB7CA0E61C0_OFFSET))();
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
