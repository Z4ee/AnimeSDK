#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A2977A6946016742_METHOD_1_47120572F92DD074_OFFSET UNITYSDK_OFFSET(0x175D6AE0)
#define CLASS_1_A2977A6946016742_METHOD_1_71E5CBDD8DC87396_OFFSET UNITYSDK_OFFSET(0x175D6B70)
#define CLASS_1_A2977A6946016742_METHOD_1_ACFCB0B57DC2E546_OFFSET UNITYSDK_OFFSET(0x175D6C30)
#define CLASS_1_A2977A6946016742__CCTOR_OFFSET UNITYSDK_OFFSET(0x175D6AA0)
#define CLASS_1_A2977A6946016742__CTOR_OFFSET UNITYSDK_OFFSET(0x175D6A90)

inline static constexpr unsigned int Class_1_A2977A6946016742_TypeDefinitionIndex = 65539;

class Class_1_A2977A6946016742 : public ::System::Object
{
public:
	static ::Class_1_A2977A6946016742** StaticGet_Field_1_0()
	{
		return (::Class_1_A2977A6946016742**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2977A6946016742_TypeDefinitionIndex)->GetStaticField(0x43DA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2977A6946016742__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2977A6946016742__CCTOR_OFFSET))();
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig Method_1_47120572F92DD074(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a1)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + CLASS_1_A2977A6946016742_METHOD_1_47120572F92DD074_OFFSET))(this, a1);
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig Method_1_71E5CBDD8DC87396(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a1, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a2)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig))((::PBYTE)hIl2Cpp + CLASS_1_A2977A6946016742_METHOD_1_71E5CBDD8DC87396_OFFSET))(this, a1, a2);
	}

	::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig Method_1_ACFCB0B57DC2E546(::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a1, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig a2, ::System::Single a3)
	{
		return ((::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2977A6946016742_METHOD_1_ACFCB0B57DC2E546_OFFSET))(this, a1, a2, a3);
	}
};
