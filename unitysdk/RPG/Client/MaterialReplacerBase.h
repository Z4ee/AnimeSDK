#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALREPLACERBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA872080)
#define RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_27EEE9768439A81E_OFFSET UNITYSDK_OFFSET(0xA8725A0)
#define RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_77DD15830483C589_OFFSET UNITYSDK_OFFSET(0xA872140)
#define RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0xA872540)
#define RPG_CLIENT_MATERIALREPLACERBASE_REPLACEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA8720D0)
#define RPG_CLIENT_MATERIALREPLACERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8726A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialReplacerBase_TypeDefinitionIndex = 63645;

	class MaterialReplacerBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* ArtNode; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::UnityEngine::Renderer*>, ::Il2CppArray<::UnityEngine::Material*>*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_AWAKE_OFFSET))(this);
		}

		::System::Void ReplaceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_REPLACEMATERIAL_OFFSET))(this);
		}

		::System::Void Method_5_77DD15830483C589(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_77DD15830483C589_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E6FA84ECDEF620CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_E6FA84ECDEF620CE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterConfig* Method_5_27EEE9768439A81E(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALREPLACERBASE_METHOD_5_27EEE9768439A81E_OFFSET))(this, a1);
		}
	};
}
