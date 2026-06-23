#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRendererData_ShaderFeature.h"

namespace UnityEngine { class Material; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_STRUCT_2_E6333E5B8A276D86_METHOD_2_1435D5A3459C003C_OFFSET UNITYSDK_OFFSET(0x10D6EA70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_STRUCT_2_E6333E5B8A276D86_METHOD_2_91461C72E6BA24E6_OFFSET UNITYSDK_OFFSET(0x6F6670)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86_TypeDefinitionIndex = 51394;

	struct alignas(4) MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86
	{
		::System::UInt32 Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x14
		::System::Boolean Field_2_2; // 0x18
		::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature Field_2_3; // 0x1C

		::System::Void Method_2_91461C72E6BA24E6(::UnityEngine::Material* a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_STRUCT_2_E6333E5B8A276D86_METHOD_2_91461C72E6BA24E6_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86 Method_2_1435D5A3459C003C(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature a4)
		{
			return ((::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86(*)(::System::UInt32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderFeature))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_STRUCT_2_E6333E5B8A276D86_METHOD_2_1435D5A3459C003C_OFFSET))(a1, a2, a3, a4);
		}
	};
}
