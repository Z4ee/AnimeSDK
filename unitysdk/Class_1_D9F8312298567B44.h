#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/VLB/AttenuationEquation.h"
#include "unitysdk/VLB/BlendingMode.h"
#include "unitysdk/VLB/ColorMode.h"
#include "unitysdk/VLB/MeshType.h"
#include "unitysdk/VLB/OccluderDimensions.h"
#include "unitysdk/VLB/PlaneAlignment.h"
#include "unitysdk/VLB/RenderQueue.h"
#include "unitysdk/VLB/RenderingMode.h"

namespace System { class String; }

#define CLASS_1_D9F8312298567B44_METHOD_1_43CCBC2ADB276A81_OFFSET UNITYSDK_OFFSET(0x134CCFE0)
#define CLASS_1_D9F8312298567B44__CCTOR_OFFSET UNITYSDK_OFFSET(0x134CD040)

inline static constexpr unsigned int Class_1_D9F8312298567B44_TypeDefinitionIndex = 46181;

class Class_1_D9F8312298567B44 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x7AF0);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x7AF4);
	}
	static ::UnityEngine::LayerMask* StaticGet_Field_1_2()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x7B04);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_3()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F8312298567B44_TypeDefinitionIndex)->GetStaticField(0x7B08);
	}
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::VLB::ColorMode Field_1_10; // 0x0
	// static const ::System::Single Field_1_11; // 0x0
	// static const ::System::Single Field_1_12; // 0x0
	// static const ::System::Single Field_1_13; // 0x0
	// static const ::System::Single Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	// static const ::VLB::MeshType Field_1_16; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x100; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_21 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_22 = 0x40; // 0x0
	// static const ::System::Boolean Field_1_23; // 0x0
	// static const ::VLB::AttenuationEquation Field_1_24; // 0x0
	// static const ::System::Single Field_1_25; // 0x0
	// static const ::System::Single Field_1_26; // 0x0
	// static const ::System::Single Field_1_27; // 0x0
	// static const ::System::Single Field_1_28; // 0x0
	// static const ::System::Single Field_1_29; // 0x0
	// static const ::System::Single Field_1_30; // 0x0
	// static const ::System::Single Field_1_31; // 0x0
	// static const ::System::Single Field_1_32; // 0x0
	// static const ::System::Single Field_1_33; // 0x0
	// static const ::System::Single Field_1_34; // 0x0
	// static const ::System::Single Field_1_35; // 0x0
	// static const ::System::Single Field_1_36; // 0x0
	// static const ::System::Single Field_1_37; // 0x0
	// static const ::System::Single Field_1_38; // 0x0
	// static const ::System::Single Field_1_39; // 0x0
	// static const ::System::Single Field_1_40; // 0x0
	// static const ::System::Single Field_1_41; // 0x0
	// static const ::System::Single Field_1_42; // 0x0
	// static const ::VLB::BlendingMode Field_1_43; // 0x0
	// static const ::VLB::OccluderDimensions Field_1_44; // 0x0
	// static const ::System::Single Field_1_45; // 0x0
	// static const ::System::Int32 Field_1_46 = 0x3; // 0x0
	// static const ::System::Single Field_1_47; // 0x0
	// static const ::System::Single Field_1_48; // 0x0
	// static const ::System::Single Field_1_49; // 0x0
	// static const ::System::Single Field_1_50; // 0x0
	// static const ::System::Single Field_1_51; // 0x0
	// static const ::System::Single Field_1_52; // 0x0
	// static const ::VLB::PlaneAlignment Field_1_53; // 0x0
	// static const ::System::Single Field_1_54; // 0x0
	// static const ::System::Boolean Field_1_55; // 0x0
	// static const ::System::Int32 Field_1_56 = 0x1; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	// static const ::VLB::RenderQueue Field_1_58; // 0x0
	// static const ::VLB::RenderingMode Field_1_59; // 0x0
	// static const ::System::Int32 Field_1_60 = 0x40; // 0x0
	// static const ::System::Int32 Field_1_61 = 0x18; // 0x0
	// static const ::System::Int32 Field_1_62 = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F8312298567B44__CCTOR_OFFSET))();
	}

	static ::UnityEngine::HideFlags Method_1_43CCBC2ADB276A81()
	{
		return ((::UnityEngine::HideFlags(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F8312298567B44_METHOD_1_43CCBC2ADB276A81_OFFSET))();
	}
};
