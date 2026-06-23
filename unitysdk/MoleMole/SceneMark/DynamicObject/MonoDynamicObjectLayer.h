#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class Class_0_16E4307DCC419505_449;
namespace MoleMole::SceneMark { class SerializeableDynamicObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_FINDALLDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x11650EA0)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_FINDDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x11650D90)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_GETLAYERNAME_OFFSET UNITYSDK_OFFSET(0x116510F0)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x11650F60)
#define MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x11651170)

namespace MoleMole::SceneMark::DynamicObject
{
	inline static constexpr unsigned int MonoDynamicObjectLayer_TypeDefinitionIndex = 70506;

	class MonoDynamicObjectLayer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::SceneMark::SerializeableDynamicObject*>* dynamicObjectMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_449* FindDynamicObject(::MoleMole::GameplayTag tag)
		{
			return ((::Class_0_16E4307DCC419505_449*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_FINDDYNAMICOBJECT_OFFSET))(this, tag);
		}

		::System::Boolean FindAllDynamicObject(::MoleMole::GameplayTag tag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* OutList)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_FINDALLDYNAMICOBJECT_OFFSET))(this, tag, OutList);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_SETACTIVE_OFFSET))(this, value);
		}

		::System::String* GetLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DYNAMICOBJECT_MONODYNAMICOBJECTLAYER_GETLAYERNAME_OFFSET))(this);
		}
	};
}
