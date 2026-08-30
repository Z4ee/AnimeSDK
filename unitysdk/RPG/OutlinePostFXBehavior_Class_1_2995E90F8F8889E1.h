#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A372C70)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A372A80)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A371D00)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_2995E90F8F8889E1_TypeDefinitionIndex = 52012;

	class OutlinePostFXBehavior_Class_1_2995E90F8F8889E1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* OLHIEOOKKAE; // 0x10
		::UnityEngine::Material* KABHIMIFJMA; // 0x18
		::RPG::OutlinePostFXBehavior* MIPMCEJIAMC; // 0x20
		::UnityEngine::Material* GBPDAFLNJPN; // 0x28
		::System::Int32 MOLMALIOKHN; // 0x30

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
