#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A.h"
#include "unitysdk/MoleMole/IMonoModelShapeElement.h"
#include "unitysdk/Struct_2_71706210729AB681.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x10E46E10)
#define MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x10E46910)
#define MOLEMOLE_MONOMODELTOWBONESCAPSULE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E46E20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelTowBonesCapsule_TypeDefinitionIndex = 66687;

	class MonoModelTowBonesCapsule : public ::MoleMole::IMonoModelShapeElement
	{
	public:
		::UnityEngine::Transform* startBone; // 0x10
		::UnityEngine::Transform* endBone; // 0x18
		::System::Single startBoneOffset; // 0x20
		::System::Single endBoneOffset; // 0x24
		::System::Single radius; // 0x28
		::Enum_3_3855198EDB5CF06A flag; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE__CTOR_OFFSET))(this);
		}

		::Struct_2_71706210729AB681 get_Shape()
		{
			return ((::Struct_2_71706210729AB681(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_SHAPE_OFFSET))(this);
		}

		::Enum_3_3855198EDB5CF06A get_Flag()
		{
			return ((::Enum_3_3855198EDB5CF06A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_FLAG_OFFSET))(this);
		}
	};
}
