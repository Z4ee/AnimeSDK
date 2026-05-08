#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7995313CD264CFB8.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CGRuntimeReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET UNITYSDK_OFFSET(0x1751C000)
#define MOLEMOLE_CGRUNTIMEUNIT_METHOD_1_D6C88EFC4A50BAC6_OFFSET UNITYSDK_OFFSET(0x1751C050)
#define MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1751C3D0)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeUnit_TypeDefinitionIndex = 48771;

	class CGRuntimeUnit : public ::System::Object
	{
	public:
		::MoleMole::Config::EntityType unitType; // 0x10
		::System::Int32 unitId; // 0x14
		::System::Int32 index; // 0x18
		::MoleMole::CGRuntimeUnitLoadType loadType; // 0x1C
		::System::Boolean LoadSkin; // 0x20
		::System::Int32 SkinId; // 0x24
		::System::Boolean LoadAccessory; // 0x28
		::Enum_3_7995313CD264CFB8 showMode; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeReference*>* references; // 0x30
		::UnityEngine::Transform* unitObj; // 0x38
		::UnityEngine::Vector3 initPos; // 0x40
		::UnityEngine::Vector3 initAngles; // 0x4C

		::System::Void _ctor(::MoleMole::Config::EntityType a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_ReferenceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_GET_REFERENCENAME_OFFSET))(this);
		}

		static ::System::String* Method_1_D6C88EFC4A50BAC6(::MoleMole::Config::EntityType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEUNIT_METHOD_1_D6C88EFC4A50BAC6_OFFSET))(a1, a2, a3);
		}
	};
}
