#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_B9C702BA1E12DFA3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x17E94450)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17E95C70)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x17E94320)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17E95650)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_BB171E9B663A64F3_OFFSET UNITYSDK_OFFSET(0x17E92250)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_C26C5619A2449105_OFFSET UNITYSDK_OFFSET(0x17E95D60)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x17E92340)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_CB7D3E84357B1D80_OFFSET UNITYSDK_OFFSET(0x17E94D60)
#define CLASS_2_4C3F9D9CF221EFEC_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x17E94720)
#define CLASS_2_4C3F9D9CF221EFEC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E920E0)
#define CLASS_2_4C3F9D9CF221EFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x17E920C0)

inline static constexpr unsigned int Class_2_4C3F9D9CF221EFEC_TypeDefinitionIndex = 69586;

class Class_2_4C3F9D9CF221EFEC : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::CameraFightStateCommonConfig*>* ENNHPMKLEMG; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::ICameraFightState*>* HDMPHBKNFEG; // 0x40
	::Class_1_B9C702BA1E12DFA3* IJGMAOGLPMH; // 0x48
	::System::Single BHEOFLPGHEO; // 0x50
	::System::Single POPIILBCAHE; // 0x54
	::RPG::GameCore::VCameraState GCKCLKLHAOM; // 0x58
	::System::Int32 OAIPLAHOEEK; // 0x5C
	::System::Single CAAHOEEJNMN; // 0x60
	::Cinemachine::CinemachineBlendDefinition_Style NEBFPFNNEDG; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_BB171E9B663A64F3(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_BB171E9B663A64F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CB7D3E84357B1D80(::RPG::Client::CameraNormalConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_CB7D3E84357B1D80_OFFSET))(this, a1);
	}

	::RPG::Client::ICameraFightState* Method_2_C26C5619A2449105(::RPG::GameCore::VCameraState a1)
	{
		return ((::RPG::Client::ICameraFightState*(*)(::PVOID, ::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_C26C5619A2449105_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C3F9D9CF221EFEC_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
