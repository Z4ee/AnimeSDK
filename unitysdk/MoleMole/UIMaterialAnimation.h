#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MatAnimationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define MOLEMOLE_UIMATERIALANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1714CD10)
#define MOLEMOLE_UIMATERIALANIMATION_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1714CC10)
#define MOLEMOLE_UIMATERIALANIMATION_METHOD_5_3D32A8D32FBB901A_OFFSET UNITYSDK_OFFSET(0x1714D240)
#define MOLEMOLE_UIMATERIALANIMATION_METHOD_5_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x1714C720)
#define MOLEMOLE_UIMATERIALANIMATION_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1714D670)
#define MOLEMOLE_UIMATERIALANIMATION_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1714D000)
#define MOLEMOLE_UIMATERIALANIMATION_PLAYDEFAULTBYLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x1714C300)
#define MOLEMOLE_UIMATERIALANIMATION_PLAYUIMATANIBYLOAD_OFFSET UNITYSDK_OFFSET(0x1714C370)
#define MOLEMOLE_UIMATERIALANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1714D530)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaterialAnimation_TypeDefinitionIndex = 44318;

	class UIMaterialAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MatAnimationData*>* Property; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MatAnimationData*>* ApplyProperty; // 0x20
		::System::String* animationName; // 0x28
		::UnityEngine::UI::MaskableGraphic* Field_5_3; // 0x30
		::UnityEngine::Material* Field_5_4; // 0x38
		::Foundation::AssetRequestHandle Field_5_5; // 0x40
		::UnityEngine::MeshRenderer* Field_5_6; // 0x60
		::UnityEngine::MaterialPropertyBlock* Field_5_7; // 0x68
		::UnityEngine::Animation* Field_5_8; // 0x70
		::System::Boolean Field_5_9; // 0x78
		::System::Single Field_5_10; // 0x7C
		::System::Single Field_5_11; // 0x80
		::UnityEngine::Material* Field_5_12; // 0x88
		::UnityEngine::Color Field_5_13; // 0x90
		::System::Boolean Field_5_14; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single PlayDefaultByLoadMaterial(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_PLAYDEFAULTBYLOADMATERIAL_OFFSET))(this, a1);
		}

		::System::Single PlayUIMatAniByLoad(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_PLAYUIMATANIBYLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_3D32A8D32FBB901A(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_METHOD_5_3D32A8D32FBB901A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_78037B64B814568E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_METHOD_5_78037B64B814568E_OFFSET))(this);
		}

		::System::Void Method_5_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
