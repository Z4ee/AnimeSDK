#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B3591E177CAF203;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_088E3957627FDB8F_METHOD_2_081D1124449C70CF_OFFSET UNITYSDK_OFFSET(0x17CADB50)
#define CLASS_2_088E3957627FDB8F_METHOD_2_16F329E8131CBCB7_OFFSET UNITYSDK_OFFSET(0x17CADBA0)
#define CLASS_2_088E3957627FDB8F_METHOD_2_30FDF547F32DA56B_OFFSET UNITYSDK_OFFSET(0x17CADA70)
#define CLASS_2_088E3957627FDB8F_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x17CADD60)
#define CLASS_2_088E3957627FDB8F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17CAE350)
#define CLASS_2_088E3957627FDB8F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CAD910)
#define CLASS_2_088E3957627FDB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x17CAD900)

inline static constexpr unsigned int Class_2_088E3957627FDB8F_TypeDefinitionIndex = 69606;

class Class_2_088E3957627FDB8F : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::Class_1_9B3591E177CAF203* BPNHAOHCGBE; // 0x38
	::UnityEngine::Vector3 LOMMNBIANJO; // 0x40
	::UnityEngine::Vector3 JHLJODHMEMP; // 0x4C
	::System::Nullable_1<::System::Single> OFABLKBBNHC; // 0x58
	::System::Nullable_1<::System::Single> DLFPFLOAGGG; // 0x60

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
};
