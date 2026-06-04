#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_898DC1EA1181F3B8;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x1371C460)
#define CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x1371C4D0)
#define CLASS_1_567FE103CF0E7FD4_INIT_OFFSET UNITYSDK_OFFSET(0x1371B330)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1371B7E0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x1371BE10)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1371BB10)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x1371C4F0)
#define CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET UNITYSDK_OFFSET(0x1371B440)
#define CLASS_1_567FE103CF0E7FD4_RESET_OFFSET UNITYSDK_OFFSET(0x1371B3A0)
#define CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x1371C4E0)
#define CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1371C6F0)

inline static constexpr unsigned int Class_1_567FE103CF0E7FD4_TypeDefinitionIndex = 65064;

class Class_1_567FE103CF0E7FD4 : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCommonConfig* Field_1_0; // 0x10
	::RPG::Client::CameraFightStateCommonConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x18
	::RPG::Client::CameraDataAndFlags* Field_1_2; // 0x20
	::Class_2_898DC1EA1181F3B8* Field_1_3; // 0x28
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_4; // 0x30
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_5; // 0x40
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_6; // 0x50
	::System::Boolean Field_1_7; // 0x60
	::System::Single Field_1_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_898DC1EA1181F3B8* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_898DC1EA1181F3B8*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* get_StateConfigWhenRangeAtk()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
	}

	::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET))(this);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}
};
