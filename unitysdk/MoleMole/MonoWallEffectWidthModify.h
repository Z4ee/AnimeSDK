#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_AWAKE_OFFSET UNITYSDK_OFFSET(0x190A0960)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_INJECTIONWIDTHSCALE_OFFSET UNITYSDK_OFFSET(0x190A03A0)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_MODIFYEFFECTWIDTH_OFFSET UNITYSDK_OFFSET(0x190A03E0)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190A09B0)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190A0900)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A0C90)
#define MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x190A0BB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWallEffectWidthModify_TypeDefinitionIndex = 90473;

	class MonoWallEffectWidthModify : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoWallEffectWidthModify_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::Single Field_5_5; // 0x0
		::System::Single scaleX; // 0x18
		::System::Boolean Field_5_4; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_11; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY__CCTOR_OFFSET))();
		}

		::System::Void InjectionWidthScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_INJECTIONWIDTHSCALE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_ONDESTROY_OFFSET))(this);
		}

		::System::Void ModifyEffectWidth(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWALLEFFECTWIDTHMODIFY_MODIFYEFFECTWIDTH_OFFSET))(this, a1);
		}
	};
}
