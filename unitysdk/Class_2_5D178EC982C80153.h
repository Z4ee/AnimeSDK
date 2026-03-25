#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
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

#define CLASS_2_5D178EC982C80153_METHOD_2_26FC99A252BCA8D6_OFFSET UNITYSDK_OFFSET(0x1148DA30)
#define CLASS_2_5D178EC982C80153_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1148E7C0)
#define CLASS_2_5D178EC982C80153_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x1148D1C0)
#define CLASS_2_5D178EC982C80153_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1148E180)
#define CLASS_2_5D178EC982C80153_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x1148E980)
#define CLASS_2_5D178EC982C80153_METHOD_2_BB171E9B663A64F3_OFFSET UNITYSDK_OFFSET(0x1148BB90)
#define CLASS_2_5D178EC982C80153_METHOD_2_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x1148BC80)
#define CLASS_2_5D178EC982C80153_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1148D4F0)
#define CLASS_2_5D178EC982C80153_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1148D2F0)
#define CLASS_2_5D178EC982C80153_METHOD_2_F0790176A0E988BC_OFFSET UNITYSDK_OFFSET(0x1148E8A0)
#define CLASS_2_5D178EC982C80153__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1148BB20)
#define CLASS_2_5D178EC982C80153__CTOR_OFFSET UNITYSDK_OFFSET(0x1148BB00)

inline static constexpr unsigned int Class_2_5D178EC982C80153_TypeDefinitionIndex = 56917;

class Class_2_5D178EC982C80153 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::ICameraFightState*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::CameraFightStateCommonConfig*>* Field_2_3; // 0x40
	::Class_1_B9C702BA1E12DFA3* Field_2_1; // 0x48
	::Cinemachine::CinemachineBlendDefinition_Style Field_2_4; // 0x50
	::System::Single Field_2_7; // 0x54
	::System::Single Field_2_5; // 0x58
	::System::Int32 Field_2_8; // 0x5C
	::System::Single Field_2_6; // 0x60
	::RPG::GameCore::VCameraState Field_2_0; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_BB171E9B663A64F3(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_BB171E9B663A64F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_26FC99A252BCA8D6(::RPG::Client::CameraNormalConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_26FC99A252BCA8D6_OFFSET))(this, a1);
	}

	::RPG::Client::ICameraFightState* Method_2_F0790176A0E988BC(::RPG::GameCore::VCameraState a1)
	{
		return ((::RPG::Client::ICameraFightState*(*)(::PVOID, ::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_F0790176A0E988BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5D178EC982C80153_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
