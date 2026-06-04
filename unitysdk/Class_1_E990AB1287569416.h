#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CDAD1C4D78702C93;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace System { class String; }

#define CLASS_1_E990AB1287569416_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1364CE60)
#define CLASS_1_E990AB1287569416_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x1364D2C0)
#define CLASS_1_E990AB1287569416_GET_ISVCAMSETUP_OFFSET UNITYSDK_OFFSET(0x1364D2E0)
#define CLASS_1_E990AB1287569416_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1364D300)
#define CLASS_1_E990AB1287569416_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1364D240)
#define CLASS_1_E990AB1287569416_METHOD_1_4C3C98311C3D41A5_OFFSET UNITYSDK_OFFSET(0x1364CAE0)
#define CLASS_1_E990AB1287569416_METHOD_1_711208B5812A9C7C_OFFSET UNITYSDK_OFFSET(0x1364CCD0)
#define CLASS_1_E990AB1287569416_METHOD_1_9A236E218C44F926_OFFSET UNITYSDK_OFFSET(0x1364CF80)
#define CLASS_1_E990AB1287569416_METHOD_1_BA6A44505F20D4BA_OFFSET UNITYSDK_OFFSET(0x1364CC00)
#define CLASS_1_E990AB1287569416_METHOD_1_F6F91CAF0ED7B2C0_OFFSET UNITYSDK_OFFSET(0x1364CD50)
#define CLASS_1_E990AB1287569416_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1364D2D0)
#define CLASS_1_E990AB1287569416_SET_ISVCAMSETUP_OFFSET UNITYSDK_OFFSET(0x1364D2F0)
#define CLASS_1_E990AB1287569416__CTOR_OFFSET UNITYSDK_OFFSET(0x1364CAD0)

inline static constexpr unsigned int Class_1_E990AB1287569416_TypeDefinitionIndex = 65125;

class Class_1_E990AB1287569416 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_0; // 0x10
	::Class_1_CDAD1C4D78702C93* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Boolean _IsVcamSetup_k__BackingField; // 0x30
	::System::Boolean _IsEnd_k__BackingField; // 0x31

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C3C98311C3D41A5(::RPG::Client::PipelineCameraEngine* a1, ::Class_1_CDAD1C4D78702C93* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::Class_1_CDAD1C4D78702C93*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_4C3C98311C3D41A5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_711208B5812A9C7C(::RPG::Client::PipelineCameraEngine* a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_711208B5812A9C7C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9A236E218C44F926(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_9A236E218C44F926_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F6F91CAF0ED7B2C0(::RPG::Client::PipelineCameraEngine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_F6F91CAF0ED7B2C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA6A44505F20D4BA(::RPG::Client::PipelineCameraEngine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_BA6A44505F20D4BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnd()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_GET_ISEND_OFFSET))(this);
	}

	::System::Void set_IsEnd(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_SET_ISEND_OFFSET))(this, a1);
	}

	::System::Boolean get_IsVcamSetup()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_GET_ISVCAMSETUP_OFFSET))(this);
	}

	::System::Void set_IsVcamSetup(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_SET_ISVCAMSETUP_OFFSET))(this, a1);
	}

	::Class_1_CDAD1C4D78702C93* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CDAD1C4D78702C93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E990AB1287569416_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
