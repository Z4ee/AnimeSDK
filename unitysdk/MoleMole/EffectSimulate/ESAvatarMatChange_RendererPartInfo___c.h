#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo_Item; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_3027FFFAC09753C5_OFFSET UNITYSDK_OFFSET(0x19ADBC60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_52E88B9FAD8E4E7F_OFFSET UNITYSDK_OFFSET(0x19ADBDC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_7C07FF6A8E5C0A8D_OFFSET UNITYSDK_OFFSET(0x19ADBBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_9944E79BA1F1E93D_OFFSET UNITYSDK_OFFSET(0x19ADBD10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_E28D0901304729A4_OFFSET UNITYSDK_OFFSET(0x19ADBD30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ADBB70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADBBB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex = 48682;

	class ESAvatarMatChange_RendererPartInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32550);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32558);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::String*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32560);
		}
		static ::System::Func_2<::System::String*, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::String*, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32568);
		}
		static ::System::Func_2<::System::String*, ::Sirenix::OdinInspector::ValueDropdownItem>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::String*, ::Sirenix::OdinInspector::ValueDropdownItem>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32570);
		}
		static ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo___c** StaticGet___9()
		{
			return (::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_RendererPartInfo___c_TypeDefinitionIndex)->GetStaticField(0x32578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C__CTOR_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* Method_1_7C07FF6A8E5C0A8D(::System::String* a1)
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_7C07FF6A8E5C0A8D_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownItem Method_1_3027FFFAC09753C5(::System::String* a1)
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_3027FFFAC09753C5_OFFSET))(this, a1);
		}

		::System::String* Method_1_9944E79BA1F1E93D(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_9944E79BA1F1E93D_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_E28D0901304729A4(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_E28D0901304729A4_OFFSET))(this, a1);
		}

		::System::String* Method_1_52E88B9FAD8E4E7F(::UnityEngine::Renderer* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO___C_METHOD_1_52E88B9FAD8E4E7F_OFFSET))(this, a1);
		}
	};
}
