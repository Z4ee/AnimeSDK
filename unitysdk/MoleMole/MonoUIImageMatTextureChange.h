#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73A07ADA64B8C00F.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_APPLY_OFFSET UNITYSDK_OFFSET(0x1177E4E0)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETAG_OFFSET UNITYSDK_OFFSET(0x1177E4D0)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1177E900)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_METHOD_5_41654240C876123C_OFFSET UNITYSDK_OFFSET(0x1177E690)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1177E990)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1177E910)
#define MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1177EA10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageMatTextureChange_TypeDefinitionIndex = 68415;

	class MonoUIImageMatTextureChange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* matTag; // 0x18
		::Il2CppArray<::UnityEngine::UI::Image*>* uImages; // 0x20
		::System::String* texName; // 0x28
		::UnityEngine::Texture2D* tex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE__CTOR_OFFSET))(this);
		}

		::System::String* get_ChangeTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETAG_OFFSET))(this);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_APPLY_OFFSET))(this);
		}

		::Enum_3_73A07ADA64B8C00F get_ChangeType()
		{
			return ((::Enum_3_73A07ADA64B8C00F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_GET_CHANGETYPE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_41654240C876123C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGEMATTEXTURECHANGE_METHOD_5_41654240C876123C_OFFSET))(this, a1);
		}
	};
}
