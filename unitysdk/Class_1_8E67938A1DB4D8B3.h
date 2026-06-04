#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_8E67938A1DB4D8B3_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xB005210)
#define CLASS_1_8E67938A1DB4D8B3_INIT_OFFSET UNITYSDK_OFFSET(0xB005250)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB0065C0)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xB005E20)
#define CLASS_1_8E67938A1DB4D8B3_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB005670)
#define CLASS_1_8E67938A1DB4D8B3_REFRESH_OFFSET UNITYSDK_OFFSET(0xB005340)
#define CLASS_1_8E67938A1DB4D8B3_RESET_OFFSET UNITYSDK_OFFSET(0xB0052F0)
#define CLASS_1_8E67938A1DB4D8B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB0067D0)

inline static constexpr unsigned int Class_1_8E67938A1DB4D8B3_TypeDefinitionIndex = 65058;

class Class_1_8E67938A1DB4D8B3 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_0; // 0x10
	::Class_2_898DC1EA1181F3B8* Field_1_1; // 0x18
	::RPG::Client::CameraFightStateCastAnimationConfig* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3__CTOR_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_INIT_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E67938A1DB4D8B3_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
