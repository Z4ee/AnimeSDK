#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class String; }

#define CLASS_2_AD43364B5F3C9728_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x159C3A00)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x159C3950)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x159C3EF0)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x159C3AF0)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x159C4030)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x159C3A70)
#define CLASS_2_AD43364B5F3C9728__CTOR_OFFSET UNITYSDK_OFFSET(0x159C37F0)

inline static constexpr unsigned int Class_2_AD43364B5F3C9728_TypeDefinitionIndex = 69598;

class Class_2_AD43364B5F3C9728 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::System::String* NDDBLBKDHBL; // 0x38
	::RPG::Client::CameraBlendCurve* GGOKEGCNMFK; // 0x40
	::System::Single BKCEJCNPEPL; // 0x48

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
