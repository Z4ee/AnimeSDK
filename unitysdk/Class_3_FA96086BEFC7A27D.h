#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/PipelineCamera/TypedCameraExternalValue_2.h"

class Class_0_16E4307DCC419505_546;

#define CLASS_3_FA96086BEFC7A27D_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x11E64E40)
#define CLASS_3_FA96086BEFC7A27D_GET_OFFSET UNITYSDK_OFFSET(0x11E64DC0)
#define CLASS_3_FA96086BEFC7A27D__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E64C70)
#define CLASS_3_FA96086BEFC7A27D__CTOR_OFFSET UNITYSDK_OFFSET(0x11E64D30)

inline static constexpr unsigned int Class_3_FA96086BEFC7A27D_TypeDefinitionIndex = 70669;

class Class_3_FA96086BEFC7A27D : public ::PipelineCamera::TypedCameraExternalValue_2<::Class_0_16E4307DCC419505_546*, ::PipelineCamera::CameraFollowTargetParam>
{
public:
	static ::Class_3_FA96086BEFC7A27D** StaticGet_Field_3_0()
	{
		return (::Class_3_FA96086BEFC7A27D**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FA96086BEFC7A27D_TypeDefinitionIndex)->GetStaticField(0x2DE70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D__CTOR_OFFSET))(this);
	}

	::PipelineCamera::CameraFollowTargetParam Get(::Class_0_16E4307DCC419505_546* a1)
	{
		return ((::PipelineCamera::CameraFollowTargetParam(*)(::PVOID, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D_GET_OFFSET))(this, a1);
	}

	::PipelineCamera::CameraExternalValueType GetValueType()
	{
		return ((::PipelineCamera::CameraExternalValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA96086BEFC7A27D_GETVALUETYPE_OFFSET))(this);
	}
};
