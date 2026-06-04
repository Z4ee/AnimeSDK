#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B3591E177CAF203;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_088E3957627FDB8F_METHOD_2_081D1124449C70CF_OFFSET UNITYSDK_OFFSET(0xA379030)
#define CLASS_2_088E3957627FDB8F_METHOD_2_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0xA379080)
#define CLASS_2_088E3957627FDB8F_METHOD_2_30FDF547F32DA56B_OFFSET UNITYSDK_OFFSET(0xA378F50)
#define CLASS_2_088E3957627FDB8F_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xA379240)
#define CLASS_2_088E3957627FDB8F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA379830)
#define CLASS_2_088E3957627FDB8F_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0xA3798B0)
#define CLASS_2_088E3957627FDB8F__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA378F20)
#define CLASS_2_088E3957627FDB8F__CTOR_OFFSET UNITYSDK_OFFSET(0xA378F10)

inline static constexpr unsigned int Class_2_088E3957627FDB8F_TypeDefinitionIndex = 65108;

class Class_2_088E3957627FDB8F : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Class_1_9B3591E177CAF203* Field_2_0; // 0x38
	::System::Nullable_1<::System::Single> Field_2_1; // 0x40
	::UnityEngine::Vector3 Field_2_2; // 0x48
	::UnityEngine::Vector3 Field_2_3; // 0x54
	::System::Nullable_1<::System::Single> Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30FDF547F32DA56B(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_30FDF547F32DA56B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_081D1124449C70CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_081D1124449C70CF_OFFSET))(this);
	}

	::System::Boolean Method_2_16F329E8131CBCB7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_16F329E8131CBCB7_OFFSET))(this);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_088E3957627FDB8F_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
