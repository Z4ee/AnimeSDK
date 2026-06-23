#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/PipelineCamera/TypedCameraExternalValue_2.h"

class Class_0_16E4307DCC419505_316;

#define CLASS_3_FA96086BEFC7A27D_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x18083B10)
#define CLASS_3_FA96086BEFC7A27D_GET_OFFSET UNITYSDK_OFFSET(0x18083A90)
#define CLASS_3_FA96086BEFC7A27D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18083940)
#define CLASS_3_FA96086BEFC7A27D__CTOR_OFFSET UNITYSDK_OFFSET(0x18083A00)

inline static constexpr unsigned int Class_3_FA96086BEFC7A27D_TypeDefinitionIndex = 47385;

class Class_3_FA96086BEFC7A27D : public ::PipelineCamera::TypedCameraExternalValue_2<::Class_0_16E4307DCC419505_316*, ::PipelineCamera::CameraFollowTargetParam>
{
public:
	static ::Class_3_FA96086BEFC7A27D** StaticGet_Field_3_0()
	{
		return (::Class_3_FA96086BEFC7A27D**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA96086BEFC7A27D_TypeDefinitionIndex)->GetStaticField(0x301E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D__CTOR_OFFSET))(this);
	}

	::PipelineCamera::CameraFollowTargetParam Get(::Class_0_16E4307DCC419505_316* a1)
	{
		return ((::PipelineCamera::CameraFollowTargetParam(*)(::PVOID, ::Class_0_16E4307DCC419505_316*))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D_GET_OFFSET))(this, a1);
	}

	::PipelineCamera::CameraExternalValueType GetValueType()
	{
		return ((::PipelineCamera::CameraExternalValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D_GETVALUETYPE_OFFSET))(this);
	}
};
