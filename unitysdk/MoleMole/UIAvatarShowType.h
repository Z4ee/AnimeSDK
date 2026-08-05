#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UIAVATARSHOWTYPE_GETAVATARSHOWUITYPE_OFFSET UNITYSDK_OFFSET(0x1928F750)
#define MOLEMOLE_UIAVATARSHOWTYPE_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0x1928F5A0)
#define MOLEMOLE_UIAVATARSHOWTYPE_ONUITYPEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1928FA10)
#define MOLEMOLE_UIAVATARSHOWTYPE_SET_UITYPE_OFFSET UNITYSDK_OFFSET(0x1928F6E0)
#define MOLEMOLE_UIAVATARSHOWTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1928FA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarShowType_TypeDefinitionIndex = 48559;

	class UIAvatarShowType : public ::System::Object
	{
	public:
		::System::String* UIName; // 0x10
		::System::Type* _UIType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWTYPE__CTOR_OFFSET))(this);
		}

		::System::Type* get_UIType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWTYPE_GET_UITYPE_OFFSET))(this);
		}

		::System::Void set_UIType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWTYPE_SET_UITYPE_OFFSET))(this, value);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>* GetAvatarShowUIType()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWTYPE_GETAVATARSHOWUITYPE_OFFSET))(this);
		}

		::System::Void OnUITypeValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWTYPE_ONUITYPEVALUECHANGED_OFFSET))(this);
		}
	};
}
