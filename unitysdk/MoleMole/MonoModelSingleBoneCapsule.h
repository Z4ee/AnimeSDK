#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A.h"
#include "unitysdk/Enum_3_5DA9605B47485C09.h"
#include "unitysdk/MoleMole/IMonoModelShapeElement.h"
#include "unitysdk/Struct_2_71706210729AB681.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1702BFE0)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1702BFF0)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE_METHOD_2_0A9F8627F6BE695B_OFFSET UNITYSDK_OFFSET(0x1702C630)
#define MOLEMOLE_MONOMODELSINGLEBONECAPSULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1702C620)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelSingleBoneCapsule_TypeDefinitionIndex = 51061;

	class MonoModelSingleBoneCapsule : public ::MoleMole::IMonoModelShapeElement
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::Enum_3_5DA9605B47485C09 direction; // 0x18
		::System::Single boneOffset; // 0x1C
		::System::Single height; // 0x20
		::System::Single radius; // 0x24
		::Enum_3_3855198EDB5CF06A flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE__CTOR_OFFSET))(this);
		}

		::Enum_3_3855198EDB5CF06A get_Flag()
		{
			return ((::Enum_3_3855198EDB5CF06A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_FLAG_OFFSET))(this);
		}

		::Struct_2_71706210729AB681 get_Shape()
		{
			return ((::Struct_2_71706210729AB681(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_GET_SHAPE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_2_0A9F8627F6BE695B(::UnityEngine::Transform* a1, ::Enum_3_5DA9605B47485C09 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::Enum_3_5DA9605B47485C09))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELSINGLEBONECAPSULE_METHOD_2_0A9F8627F6BE695B_OFFSET))(a1, a2);
		}
	};
}
