#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define DYNAMICRENDERSCALE_GET_OPENDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x147EB350)
#define DYNAMICRENDERSCALE_SETDYNAMICRENDERSCALEPARAMS_OFFSET UNITYSDK_OFFSET(0x147EB410)
#define DYNAMICRENDERSCALE_SET_OPENDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x147EB3B0)
#define DYNAMICRENDERSCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0x147EB4F0)
#define DYNAMICRENDERSCALE__CCTOR_OFFSET UNITYSDK_OFFSET(0x147EB580)
#define DYNAMICRENDERSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x147EB530)

inline static constexpr unsigned int DynamicRenderScale_TypeDefinitionIndex = 63614;

class DynamicRenderScale : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Single* StaticGet_currentScale()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DynamicRenderScale_TypeDefinitionIndex)->GetStaticField(0x11310);
	}
	static ::System::Single* StaticGet__globalScaleMax()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DynamicRenderScale_TypeDefinitionIndex)->GetStaticField(0x11314);
	}
	static ::System::Boolean* StaticGet__openDynamicScale()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicRenderScale_TypeDefinitionIndex)->GetStaticField(0x11318);
	}
	static ::System::Boolean* StaticGet_forceCloseDynamicScale()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DynamicRenderScale_TypeDefinitionIndex)->GetStaticField(0x11319);
	}
	static ::System::Single* StaticGet__globalScaleMin()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DynamicRenderScale_TypeDefinitionIndex)->GetStaticField(0x1131C);
	}
	::System::Int32 calcCount; // 0x18
	::System::Single deltaStep; // 0x1C
	::System::Single minScale; // 0x20
	::System::Single downScaleLimit; // 0x24
	::System::Single upScaleLimit; // 0x28
	::System::Single total; // 0x2C
	::System::Int32 addCount; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_OpenDynamicScale()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE_GET_OPENDYNAMICSCALE_OFFSET))();
	}

	static ::System::Void set_OpenDynamicScale(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE_SET_OPENDYNAMICSCALE_OFFSET))(value);
	}

	static ::System::Void SetDynamicRenderScaleParams(::System::Single scaleMin, ::System::Single scaleMax)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE_SETDYNAMICRENDERSCALEPARAMS_OFFSET))(scaleMin, scaleMax);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICRENDERSCALE_UPDATE_OFFSET))(this);
	}
};
