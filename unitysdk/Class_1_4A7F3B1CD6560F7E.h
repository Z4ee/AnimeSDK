#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Object.h"

class Class_1_30B5FE4AA7ABAB8C;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4A7F3B1CD6560F7E_METHOD_1_9067083E2FE1F1BD_OFFSET UNITYSDK_OFFSET(0x15E628A0)
#define CLASS_1_4A7F3B1CD6560F7E_METHOD_1_AE9DFC1800B9A77B_OFFSET UNITYSDK_OFFSET(0x15E62930)
#define CLASS_1_4A7F3B1CD6560F7E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E62980)
#define CLASS_1_4A7F3B1CD6560F7E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15E627E0)
#define CLASS_1_4A7F3B1CD6560F7E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E627D0)

inline static constexpr unsigned int Class_1_4A7F3B1CD6560F7E_TypeDefinitionIndex = 66481;

class Class_1_4A7F3B1CD6560F7E : public ::System::Object
{
public:
	::RPG::Client::CameraModuleConfigCollection* Field_1_0; // 0x10
	::RPG::Client::PipelineCameraEngine* Field_1_1; // 0x18
	::RPG::Client::PipelineCameraGlobalConfig* Field_1_2; // 0x20
	::RPG::Client::CameraDataAndFlags* Field_1_3; // 0x28
	::RPG::Client::CameraModuleType Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A7F3B1CD6560F7E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_1_4A7F3B1CD6560F7E__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9067083E2FE1F1BD(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_1_4A7F3B1CD6560F7E_METHOD_1_9067083E2FE1F1BD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_AE9DFC1800B9A77B(::Class_1_30B5FE4AA7ABAB8C* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30B5FE4AA7ABAB8C*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + CLASS_1_4A7F3B1CD6560F7E_METHOD_1_AE9DFC1800B9A77B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A7F3B1CD6560F7E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
