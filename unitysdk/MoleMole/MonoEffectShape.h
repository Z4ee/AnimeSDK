#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoEffectShape_EffectShapeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSHAPE_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x161FEB90)
#define MOLEMOLE_MONOEFFECTSHAPE_METHOD_5_BC32755818CA4F24_OFFSET UNITYSDK_OFFSET(0x161FF1C0)
#define MOLEMOLE_MONOEFFECTSHAPE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x161FF380)
#define MOLEMOLE_MONOEFFECTSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x161FF480)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectShape_TypeDefinitionIndex = 65434;

	class MonoEffectShape : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectShape_EffectShapeConfig*>* Configs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* childEffRelativePaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE__CTOR_OFFSET))(this);
		}

		::System::String* GetRelativePath(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_GETRELATIVEPATH_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean Method_5_BC32755818CA4F24(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSHAPE_METHOD_5_BC32755818CA4F24_OFFSET))(this, a1, a2);
		}
	};
}
