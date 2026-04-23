#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class SmoothResultModuleConfig; }

#define CLASS_2_5122EB7C3156F573_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x92C4C00)
#define CLASS_2_5122EB7C3156F573_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x92C4BB0)
#define CLASS_2_5122EB7C3156F573_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x92C4C90)
#define CLASS_2_5122EB7C3156F573_METHOD_2_9CDDA330CD3329E0_OFFSET UNITYSDK_OFFSET(0x92C4A80)
#define CLASS_2_5122EB7C3156F573_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x92C5550)
#define CLASS_2_5122EB7C3156F573_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92C54E0)
#define CLASS_2_5122EB7C3156F573__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C5520)
#define CLASS_2_5122EB7C3156F573__CTOR_1_OFFSET UNITYSDK_OFFSET(0x92C4A50)
#define CLASS_2_5122EB7C3156F573__CTOR_OFFSET UNITYSDK_OFFSET(0x92C4A40)

inline static constexpr unsigned int Class_2_5122EB7C3156F573_TypeDefinitionIndex = 64195;

class Class_2_5122EB7C3156F573 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5122EB7C3156F573_TypeDefinitionIndex)->GetStaticField(0x66A80);
	}
	::RPG::Client::SmoothResultModuleConfig* Field_2_0; // 0x38
	::System::Boolean Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9CDDA330CD3329E0(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_9CDDA330CD3329E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5122EB7C3156F573_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
