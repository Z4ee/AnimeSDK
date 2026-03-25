#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_EF1FB12573375AC9_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x114153C0)
#define CLASS_1_EF1FB12573375AC9_INIT_OFFSET UNITYSDK_OFFSET(0x11415400)
#define CLASS_1_EF1FB12573375AC9_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11416780)
#define CLASS_1_EF1FB12573375AC9_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x11415FE0)
#define CLASS_1_EF1FB12573375AC9_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x11415820)
#define CLASS_1_EF1FB12573375AC9_REFRESH_OFFSET UNITYSDK_OFFSET(0x114154F0)
#define CLASS_1_EF1FB12573375AC9_RESET_OFFSET UNITYSDK_OFFSET(0x114154A0)
#define CLASS_1_EF1FB12573375AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x11416990)

inline static constexpr unsigned int Class_1_EF1FB12573375AC9_TypeDefinitionIndex = 56887;

class Class_1_EF1FB12573375AC9 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x10
	::RPG::Client::CameraFightStateCastAnimationConfig* Field_1_2; // 0x18
	::Class_2_5D178EC982C80153* Field_1_0; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_REFRESH_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF1FB12573375AC9_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
