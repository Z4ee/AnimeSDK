#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateUseSkillPerformConfig; }

#define CLASS_1_715B7D8A35586A9E_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x160C1810)
#define CLASS_1_715B7D8A35586A9E_INIT_OFFSET UNITYSDK_OFFSET(0x160BFE40)
#define CLASS_1_715B7D8A35586A9E_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x160C0C40)
#define CLASS_1_715B7D8A35586A9E_REFRESH_OFFSET UNITYSDK_OFFSET(0x160BFF80)
#define CLASS_1_715B7D8A35586A9E_RESET_OFFSET UNITYSDK_OFFSET(0x160BFEE0)
#define CLASS_1_715B7D8A35586A9E__CTOR_OFFSET UNITYSDK_OFFSET(0x160C1850)

inline static constexpr unsigned int Class_1_715B7D8A35586A9E_TypeDefinitionIndex = 69570;

class Class_1_715B7D8A35586A9E : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x18
	::RPG::Client::CameraFightStateUseSkillPerformConfig* MAFIONBKPIE; // 0x20
	::UnityEngine::Vector3 EBJIPOAJLBG; // 0x28
	::System::Boolean LBIALNNCLMH; // 0x34
	::UnityEngine::Vector3 OEGAAMGHNCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715B7D8A35586A9E_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}
};
