#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RTIDHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22B9A70)
#define RPG_CUSTOMRP_RTIDHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B9A30)
#define RPG_CUSTOMRP_RTIDHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CUSTOMRP_RTIDHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x22B9990)
#define RPG_CUSTOMRP_RTIDHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x181758C0)
#define RPG_CUSTOMRP_RTIDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9990)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDHandle_TypeDefinitionIndex = 34964;

	struct alignas(8) RTIDHandle
	{
		static ::RPG::CustomRP::RTIDHandle* StaticGet_CameraTarget()
		{
			return (::RPG::CustomRP::RTIDHandle*)Il2CppClass::FromTypeDefinitionIndex(RTIDHandle_TypeDefinitionIndex)->GetStaticField(0x11280);
		}
		::System::Int32 id; // 0x10
		::System::Int32 mip; // 0x14
		::UnityEngine::Rendering::RenderTargetIdentifier rtID; // 0x18
		::System::Boolean IsCreate; // 0x40

		::System::Void _ctor(::System::String* shaderProperty, ::System::Int32 mip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE__CTOR_OFFSET))(this, shaderProperty, mip);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::String* shaderProperty, ::System::Int32 mip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE_INIT_OFFSET))(this, shaderProperty, mip);
		}

		::System::Boolean Equals(::RPG::CustomRP::RTIDHandle& other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RTIDHandle&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::RenderTargetIdentifier& other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
