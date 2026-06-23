#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo_Item; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_24E7552FF0F8F32A_OFFSET UNITYSDK_OFFSET(0x18F56860)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_1_OFFSET UNITYSDK_OFFSET(0x18F56F40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET UNITYSDK_OFFSET(0x18F56EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x18F56FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_B0A7B48A95450D3C_OFFSET UNITYSDK_OFFSET(0x18F56730)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_D378F4A233D67999_OFFSET UNITYSDK_OFFSET(0x18F56B50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_DD590BDFE4ADC9A9_OFFSET UNITYSDK_OFFSET(0x18F54250)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0x18F57220)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18F504A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo_TypeDefinitionIndex = 40405;

	class ESAvatarMatChange_RendererPartInfo : public ::System::Object
	{
	public:
		::System::Boolean applyAllRenderers; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*>* rendererPartInfos; // 0x18
		::UnityEngine::GameObject* m_stTargetGo; // 0x20
		::MoleMole::EffectSimulate::ESAvatarMatChange* m_stAMCCtx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerable* Method_1_B0A7B48A95450D3C()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_B0A7B48A95450D3C_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_D378F4A233D67999()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_D378F4A233D67999_OFFSET))(this);
		}

		::System::Void Method_1_DD590BDFE4ADC9A9(::UnityEngine::GameObject* a1, ::MoleMole::EffectSimulate::ESAvatarMatChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::ESAvatarMatChange*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_DD590BDFE4ADC9A9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4E056BB144231A80(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_24E7552FF0F8F32A()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_24E7552FF0F8F32A_OFFSET))(this);
		}

		::System::Void Method_1_4E056BB144231A80_1(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_7B0A407379BA27E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_7B0A407379BA27E7_OFFSET))(this);
		}

		::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
		}
	};
}
