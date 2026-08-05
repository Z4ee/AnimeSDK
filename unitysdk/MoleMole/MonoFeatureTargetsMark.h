#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class ConfigFeatureTarget; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOFEATURETARGETSMARK_EMPTY_OFFSET UNITYSDK_OFFSET(0x179161A0)
#define MOLEMOLE_MONOFEATURETARGETSMARK_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x179162B0)
#define MOLEMOLE_MONOFEATURETARGETSMARK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x179164F0)
#define MOLEMOLE_MONOFEATURETARGETSMARK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x179163E0)
#define MOLEMOLE_MONOFEATURETARGETSMARK__CCTOR_OFFSET UNITYSDK_OFFSET(0x179167B0)
#define MOLEMOLE_MONOFEATURETARGETSMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x17916670)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFeatureTargetsMark_TypeDefinitionIndex = 78365;

	class MonoFeatureTargetsMark : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoFeatureTargetsMark*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoFeatureTargetsMark*>**)Il2CppClass::FromTypeDefinitionIndex(MonoFeatureTargetsMark_TypeDefinitionIndex)->GetStaticField(0x427D0);
		}
		::System::Boolean IsAutoDisableRootTarget; // 0x18
		::MoleMole::GameplayTag defaultRootPoint; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::ConfigFeatureTarget*>* featureTargets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoFeatureTargetsMark* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoFeatureTargetsMark*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATURETARGETSMARK_ONDISABLE_OFFSET))(this);
		}
	};
}
