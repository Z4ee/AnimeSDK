#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

namespace System { class EventArgs; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x13B47410)
#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13B46CA0)
#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x13B47400)
#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13B46C90)
#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_B2597DD6C1231DDD_OFFSET UNITYSDK_OFFSET(0x13B47210)
#define CLASS_4_BB8A07475B1F7BE7_METHOD_4_B4292D49F2A87C62_OFFSET UNITYSDK_OFFSET(0x13B46CB0)
#define CLASS_4_BB8A07475B1F7BE7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13B468B0)
#define CLASS_4_BB8A07475B1F7BE7_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13B466F0)
#define CLASS_4_BB8A07475B1F7BE7_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13B46BB0)
#define CLASS_4_BB8A07475B1F7BE7__CTOR_OFFSET UNITYSDK_OFFSET(0x13B46C10)

inline static constexpr unsigned int Class_4_BB8A07475B1F7BE7_TypeDefinitionIndex = 51949;

class Class_4_BB8A07475B1F7BE7 : public ::Class_3_627DF5C40DDAA45B<::Class_4_BB8A07475B1F7BE7*>
{
public:
	::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* Field_4_5; // 0x30
	::UnityEngine::Camera* Field_4_6; // 0x38
	::System::Int32 Field_4_7; // 0x40
	::System::Boolean Field_4_1; // 0x44
	::UnityEngine::NAPRenderPipeline0::CameraRenderType Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_4_B4292D49F2A87C62(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_B4292D49F2A87C62_OFFSET))(this, a1);
	}

	::System::Void Method_4_B2597DD6C1231DDD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_B2597DD6C1231DDD_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_4_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BB8A07475B1F7BE7_METHOD_4_1947BC35B7A7FCB8_OFFSET))(this);
	}
};
