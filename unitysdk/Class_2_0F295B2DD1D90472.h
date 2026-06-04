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

#define CLASS_2_0F295B2DD1D90472_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x143620A0)
#define CLASS_2_0F295B2DD1D90472_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14362050)
#define CLASS_2_0F295B2DD1D90472_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x14362130)
#define CLASS_2_0F295B2DD1D90472_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143628F0)
#define CLASS_2_0F295B2DD1D90472_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x14362960)
#define CLASS_2_0F295B2DD1D90472_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x14361F20)
#define CLASS_2_0F295B2DD1D90472__CCTOR_OFFSET UNITYSDK_OFFSET(0x14362930)
#define CLASS_2_0F295B2DD1D90472__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14361EF0)
#define CLASS_2_0F295B2DD1D90472__CTOR_OFFSET UNITYSDK_OFFSET(0x14361EE0)

inline static constexpr unsigned int Class_2_0F295B2DD1D90472_TypeDefinitionIndex = 65116;

class Class_2_0F295B2DD1D90472 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0F295B2DD1D90472_TypeDefinitionIndex)->GetStaticField(0x437A0);
	}
	::RPG::Client::SmoothResultModuleConfig* Field_2_1; // 0x38
	::System::Boolean Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_0F295B2DD1D90472_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
