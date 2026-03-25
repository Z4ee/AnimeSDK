#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINEPOSTFXMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAFF3C0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFF390)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXMonoPlugin_TypeDefinitionIndex = 41817;

	class OutlinePostFXMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::OutlinePostFXBehavior*>
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>** StaticGet_activeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x46DE0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ObjectRendererList; // 0x30
		::UnityEngine::Color OutlineColor; // 0x38
		::System::Boolean PCHighQuality; // 0x48
		::System::Int32 Downsample; // 0x4C
		::System::Single BlurSize; // 0x50
		::UnityEngine::Shader* OutlineShader; // 0x58
		::UnityEngine::Material* OutlineMaterial; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN__CCTOR_OFFSET))();
		}
	};
}
