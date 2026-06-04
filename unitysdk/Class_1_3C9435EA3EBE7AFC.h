#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace VLB { class VolumetricLightBeam; }

#define CLASS_1_3C9435EA3EBE7AFC_METHOD_1_4D30370F1AFE7FC2_OFFSET UNITYSDK_OFFSET(0xAEC8C00)
#define CLASS_1_3C9435EA3EBE7AFC_METHOD_1_6D938BAA7D8E5E59_OFFSET UNITYSDK_OFFSET(0xAEC8CE0)
#define CLASS_1_3C9435EA3EBE7AFC_METHOD_1_74904AE2EC57208D_OFFSET UNITYSDK_OFFSET(0xAEC8A80)
#define CLASS_1_3C9435EA3EBE7AFC_METHOD_1_B7ED1573BF49D978_OFFSET UNITYSDK_OFFSET(0xAEC89C0)
#define CLASS_1_3C9435EA3EBE7AFC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAEC8990)

inline static constexpr unsigned int Class_1_3C9435EA3EBE7AFC_TypeDefinitionIndex = 46191;

class Class_1_3C9435EA3EBE7AFC : public ::System::Object
{
public:
	// static const ::System::Boolean Field_1_0; // 0x0

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C9435EA3EBE7AFC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_B7ED1573BF49D978(::UnityEngine::Material* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C9435EA3EBE7AFC_METHOD_1_B7ED1573BF49D978_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_74904AE2EC57208D(::VLB::VolumetricLightBeam* a1, ::VLB::VolumetricLightBeam* a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::VLB::VolumetricLightBeam*, ::VLB::VolumetricLightBeam*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3C9435EA3EBE7AFC_METHOD_1_74904AE2EC57208D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4D30370F1AFE7FC2(::VLB::VolumetricLightBeam* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::VLB::VolumetricLightBeam*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3C9435EA3EBE7AFC_METHOD_1_4D30370F1AFE7FC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D938BAA7D8E5E59(::System::String*& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C9435EA3EBE7AFC_METHOD_1_6D938BAA7D8E5E59_OFFSET))(a1, a2);
	}
};
