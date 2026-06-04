#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class String; }

#define CLASS_2_AD43364B5F3C9728_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B3C160)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x13B3C0B0)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x13B3C610)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13B3C750)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x13B3C250)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x13B3C7B0)
#define CLASS_2_AD43364B5F3C9728_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x13B3C1D0)
#define CLASS_2_AD43364B5F3C9728__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3C080)

inline static constexpr unsigned int Class_2_AD43364B5F3C9728_TypeDefinitionIndex = 65100;

class Class_2_AD43364B5F3C9728 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::System::String* Field_2_0; // 0x38
	::RPG::Client::CameraBlendCurve* Field_2_1; // 0x40
	::System::Single Field_2_2; // 0x48

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

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD43364B5F3C9728_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
