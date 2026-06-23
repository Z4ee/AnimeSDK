#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0x16420CF0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0x1641F490)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0x16420AA0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x16420570)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16420E30)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_SETMAT_OFFSET UNITYSDK_OFFSET(0x1641F4F0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16421030)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneToFindObject_TypeDefinitionIndex = 47421;

	class MonoSceneToFindObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 wayGroupID; // 0x28
		::System::String* matKey; // 0x30
		::Foundation::AssetRequestHandle Field_7_2; // 0x38
		::System::Single fadeInTime; // 0x58
		::System::Single fadeOutTime; // 0x5C
		::System::String* FadeInCurveKey; // 0x60
		::System::String* FadeOutCurveKey; // 0x68
		::System::Boolean showOutline; // 0x70
		::UnityEngine::AnimationCurve* Field_7_8; // 0x78
		::UnityEngine::AnimationCurve* Field_7_9; // 0x80
		::System::Single Field_7_10; // 0x88
		::System::Single Field_7_11; // 0x8C
		::System::Single Field_7_12; // 0x90
		::System::Boolean Field_7_13; // 0x94
		::System::Boolean Field_7_14; // 0x95
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_7_15; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_7_16; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* Field_7_17; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_7_18; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOSHOW_OFFSET))(this, a1);
		}

		::System::Void SetMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_SETMAT_OFFSET))(this);
		}

		::System::Void DoStartReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOSTARTRESET_OFFSET))(this);
		}

		::System::Void DoRealReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOREALRESET_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_ONDESTROY_OFFSET))(this);
		}
	};
}
