#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class SmoothResultModuleConfig; }

#define CLASS_2_5B6DEF97FCD470C8_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x181B0430)
#define CLASS_2_5B6DEF97FCD470C8_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x181B03E0)
#define CLASS_2_5B6DEF97FCD470C8_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x181B04C0)
#define CLASS_2_5B6DEF97FCD470C8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x181B0C90)
#define CLASS_2_5B6DEF97FCD470C8_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x181B02B0)
#define CLASS_2_5B6DEF97FCD470C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x181B0CD0)
#define CLASS_2_5B6DEF97FCD470C8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181B0150)
#define CLASS_2_5B6DEF97FCD470C8__CTOR_OFFSET UNITYSDK_OFFSET(0x181B0140)

inline static constexpr unsigned int Class_2_5B6DEF97FCD470C8_TypeDefinitionIndex = 66521;

class Class_2_5B6DEF97FCD470C8 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5B6DEF97FCD470C8_TypeDefinitionIndex)->GetStaticField(0x3DA50);
	}
	::RPG::Client::SmoothResultModuleConfig* Field_2_1; // 0x38
	::System::Boolean Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B6DEF97FCD470C8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
