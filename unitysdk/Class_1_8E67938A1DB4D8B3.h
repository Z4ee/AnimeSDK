#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_8E67938A1DB4D8B3_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x170B6490)
#define CLASS_1_8E67938A1DB4D8B3_INIT_OFFSET UNITYSDK_OFFSET(0x170B64D0)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x170B6900)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x170B7950)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x170B71B0)
#define CLASS_1_8E67938A1DB4D8B3_REFRESH_OFFSET UNITYSDK_OFFSET(0x170B65C0)
#define CLASS_1_8E67938A1DB4D8B3_RESET_OFFSET UNITYSDK_OFFSET(0x170B6570)
#define CLASS_1_8E67938A1DB4D8B3__CTOR_OFFSET UNITYSDK_OFFSET(0x170B7B60)

inline static constexpr unsigned int Class_1_8E67938A1DB4D8B3_TypeDefinitionIndex = 69556;

class Class_1_8E67938A1DB4D8B3 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
	::RPG::Client::CameraFightStateCastAnimationConfig* MAFIONBKPIE; // 0x18
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x20
	::System::Boolean EEDKNHHDCLL; // 0x28
	::System::Boolean HILMOKFDMGH; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_REFRESH_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
