#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCFB3250)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1_GET_KEY_OFFSET UNITYSDK_OFFSET(0xCFB3060)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_2995E90F8F8889E1__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB1FC0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_2995E90F8F8889E1_TypeDefinitionIndex = 48395;

	class OutlinePostFXBehavior_Class_1_2995E90F8F8889E1 : public ::System::Object
	{
	public:
		::RPG::OutlinePostFXBehavior* Field_1_0; // 0x10
		::UnityEngine::Material* Field_1_1; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_2; // 0x20
		::UnityEngine::Material* Field_1_3; // 0x28
		::System::Int32 Field_1_4; // 0x30

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
