#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODELPARTBONESINFO_ANIMATORREBIND_OFFSET UNITYSDK_OFFSET(0x10BCC310)
#define MOLEMOLE_MODELPARTBONESINFO_EXPORTSKINNEDMESHRENDERERBONESINFO_OFFSET UNITYSDK_OFFSET(0x10BCB200)
#define MOLEMOLE_MODELPARTBONESINFO_METHOD_5_62528D702B1BD770_OFFSET UNITYSDK_OFFSET(0x10BCC0A0)
#define MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_1_OFFSET UNITYSDK_OFFSET(0x10BCBBC0)
#define MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_OFFSET UNITYSDK_OFFSET(0x10BCB6C0)
#define MOLEMOLE_MODELPARTBONESINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCC4F0)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartBonesInfo_TypeDefinitionIndex = 73071;

	class ModelPartBonesInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* rootBoneName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* boneNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO__CTOR_OFFSET))(this);
		}

		::System::Void ExportSkinnedMeshRendererBonesInfo(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_EXPORTSKINNEDMESHRENDERERBONESINFO_OFFSET))(this, a1);
		}

		::System::Void RebindBones(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_OFFSET))(this, a1, a2);
		}

		::System::Void RebindBones_1(::UnityEngine::SkinnedMeshRenderer* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_1_OFFSET))(this, a1, a2);
		}

		::System::Void AnimatorRebind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_ANIMATORREBIND_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* Method_5_62528D702B1BD770(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_METHOD_5_62528D702B1BD770_OFFSET))(this, a1, a2);
		}
	};
}
