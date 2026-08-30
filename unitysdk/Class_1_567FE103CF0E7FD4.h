#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_567FE103CF0E7FD4_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x154E15C0)
#define CLASS_1_567FE103CF0E7FD4_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x154E1630)
#define CLASS_1_567FE103CF0E7FD4_INIT_OFFSET UNITYSDK_OFFSET(0x154E0380)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x154E0850)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x154E0EF0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x154E0BF0)
#define CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x154E1650)
#define CLASS_1_567FE103CF0E7FD4_REFRESH_OFFSET UNITYSDK_OFFSET(0x154E04A0)
#define CLASS_1_567FE103CF0E7FD4_RESET_OFFSET UNITYSDK_OFFSET(0x154E03F0)
#define CLASS_1_567FE103CF0E7FD4_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x154E1640)
#define CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x154E1850)

inline static constexpr unsigned int Class_1_567FE103CF0E7FD4_TypeDefinitionIndex = 69562;

class Class_1_567FE103CF0E7FD4 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x20
	::RPG::Client::CameraFightStateCommonConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x28
	::System::Boolean CDNFOAPHINA; // 0x30
	::System::Nullable_1<::UnityEngine::Vector3> OCBKABJKEHG; // 0x34
	::System::Single DMIGAHHPFMB; // 0x44
	::System::Nullable_1<::UnityEngine::Vector3> HAKKPBCKEOM; // 0x48
	::System::Nullable_1<::UnityEngine::Vector3> CDPFEPMNABI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_INIT_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_FF11A7936E830212_OFFSET))(this);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_567FE103CF0E7FD4_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}
};
