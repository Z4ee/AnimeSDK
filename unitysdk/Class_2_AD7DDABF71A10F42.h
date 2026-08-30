#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_AD7DDABF71A10F42_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18B66DF0)
#define CLASS_2_AD7DDABF71A10F42_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x18B66D40)
#define CLASS_2_AD7DDABF71A10F42_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18B66EB0)
#define CLASS_2_AD7DDABF71A10F42_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B66E70)
#define CLASS_2_AD7DDABF71A10F42__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B66BE0)
#define CLASS_2_AD7DDABF71A10F42__CTOR_OFFSET UNITYSDK_OFFSET(0x18B66BD0)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_TypeDefinitionIndex = 69597;

class Class_2_AD7DDABF71A10F42 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
