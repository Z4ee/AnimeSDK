#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }

#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x117AA0D0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x117A9F70)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_7780D58EDE2C3060_OFFSET UNITYSDK_OFFSET(0x117A9AC0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x117AA3A0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_1_OFFSET UNITYSDK_OFFSET(0x117AA1F0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_8E6109045F434680_OFFSET UNITYSDK_OFFSET(0x117AA070)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_A36D8390FCB343FA_OFFSET UNITYSDK_OFFSET(0x117AA250)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0x117A9CE0)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x117AA440)
#define CLASS_1_6F8359E734E4FA98_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x117AA6D0)
#define CLASS_1_6F8359E734E4FA98__CTOR_OFFSET UNITYSDK_OFFSET(0x117AA740)

inline static constexpr unsigned int Class_1_6F8359E734E4FA98_TypeDefinitionIndex = 71814;

class Class_1_6F8359E734E4FA98 : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_1_1; // 0x10
	::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* Field_1_0; // 0x18

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

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8359E734E4FA98_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
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
