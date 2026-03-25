#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class TopViewModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ACB79599B255F063_METHOD_2_126D2870898207C3_OFFSET UNITYSDK_OFFSET(0x115FC290)
#define CLASS_2_ACB79599B255F063_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x115FB3F0)
#define CLASS_2_ACB79599B255F063_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x115FB350)
#define CLASS_2_ACB79599B255F063_METHOD_2_9CDDA330CD3329E0_OFFSET UNITYSDK_OFFSET(0x115FB220)
#define CLASS_2_ACB79599B255F063_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x115FC470)
#define CLASS_2_ACB79599B255F063_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115FC420)
#define CLASS_2_ACB79599B255F063__CTOR_1_OFFSET UNITYSDK_OFFSET(0x115FB1F0)
#define CLASS_2_ACB79599B255F063__CTOR_OFFSET UNITYSDK_OFFSET(0x115FB1E0)

inline static constexpr unsigned int Class_2_ACB79599B255F063_TypeDefinitionIndex = 56946;

class Class_2_ACB79599B255F063 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::RPG::Client::TopViewModuleConfig* Field_2_0; // 0x38
	::System::Single Field_2_2; // 0x40
	::UnityEngine::Vector3 Field_2_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9CDDA330CD3329E0(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_9CDDA330CD3329E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_126D2870898207C3(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_126D2870898207C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_ACB79599B255F063_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
