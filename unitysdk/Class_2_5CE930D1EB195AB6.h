#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class SmoothResultModuleConfig; }

#define CLASS_2_5CE930D1EB195AB6_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x14C3F5A0)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14C3F4E0)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14C3F490)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x14C3F630)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x14C3FDE0)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C3FE80)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C3F550)
#define CLASS_2_5CE930D1EB195AB6_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x14C3F360)
#define CLASS_2_5CE930D1EB195AB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C3FEC0)
#define CLASS_2_5CE930D1EB195AB6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14C3F200)
#define CLASS_2_5CE930D1EB195AB6__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3F1F0)

inline static constexpr unsigned int Class_2_5CE930D1EB195AB6_TypeDefinitionIndex = 69614;

class Class_2_5CE930D1EB195AB6 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FNKFEHPKLFL()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5CE930D1EB195AB6_TypeDefinitionIndex)->GetStaticField(0x3FB10);
	}
	::RPG::Client::SmoothResultModuleConfig* BAKFOPDBNBM; // 0x38
	::System::Boolean MAMOEGLPJBK; // 0x40
	::System::Nullable_1<::System::Single> LDBGNKGNBEP; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CE930D1EB195AB6_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
