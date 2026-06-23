#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FTRANSFORM3D_FIELDOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C996230)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FTransform3D_FieldOffset_TypeDefinitionIndex = 8661;

	struct alignas(1) FTransform3D_FieldOffset
	{
		static ::System::Int32* StaticGet_Rotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FTransform3D_FieldOffset_TypeDefinitionIndex)->GetStaticField(0x3C50);
		}
		static ::System::Int32* StaticGet_Translation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FTransform3D_FieldOffset_TypeDefinitionIndex)->GetStaticField(0x3C54);
		}
		static ::System::Int32* StaticGet_Scale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FTransform3D_FieldOffset_TypeDefinitionIndex)->GetStaticField(0x3C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_FIELDOFFSET__CCTOR_OFFSET))();
		}
	};
}
