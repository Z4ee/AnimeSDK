#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190DB806630B40CE_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17E97A40)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_261DF843E298B71B_OFFSET UNITYSDK_OFFSET(0x17E98440)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_31258BE0B18AB062_OFFSET UNITYSDK_OFFSET(0x17E98240)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17E98120)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_A8E5FA6BCD56FEC4_OFFSET UNITYSDK_OFFSET(0x17E983C0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E97E50)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_RESETBLOCK_OFFSET UNITYSDK_OFFSET(0x17E97D30)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E980E0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E98090)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStreamingGameMarcelBlock_TypeDefinitionIndex = 47246;

	class MonoStreamingGameMarcelBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoStreamingGameMarcelBlock_TypeDefinitionIndex)->GetStaticField(0x10AB0);
		}
		::Enum_3_190DB806630B40CE_1 Field_5_0; // 0x18
		::UnityEngine::MaterialPropertyBlock* Field_5_1; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x28
		::Foundation::Coroutine::CoroutineHandle Field_5_3; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_INITIALIZE_OFFSET))(this);
		}

		::System::Void ResetBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_RESETBLOCK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_31258BE0B18AB062(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_31258BE0B18AB062_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_5_261DF843E298B71B()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_261DF843E298B71B_OFFSET))(this);
		}

		::System::Void Method_5_A8E5FA6BCD56FEC4(::Enum_3_190DB806630B40CE_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_190DB806630B40CE_1))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_METHOD_5_A8E5FA6BCD56FEC4_OFFSET))(this, a1);
		}
	};
}
