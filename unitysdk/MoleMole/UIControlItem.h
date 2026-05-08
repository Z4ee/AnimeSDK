#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_52F51ECF03644FA0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UICONTROLITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x15EDCE90)
#define MOLEMOLE_UICONTROLITEM_ISMATCH_OFFSET UNITYSDK_OFFSET(0x15EDCB60)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_4DE8CBABBBA1918B_OFFSET UNITYSDK_OFFSET(0x15EDCF30)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_54EE5091F9DB1A7D_OFFSET UNITYSDK_OFFSET(0x15EDD570)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_7222809C3B193985_OFFSET UNITYSDK_OFFSET(0x15EDD110)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_7447D31007493755_OFFSET UNITYSDK_OFFSET(0x15EDD600)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_7F53CB1E098E0EB4_OFFSET UNITYSDK_OFFSET(0x15EDD500)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x15EDD100)
#define MOLEMOLE_UICONTROLITEM_METHOD_1_FF9D9C132E279CF6_OFFSET UNITYSDK_OFFSET(0x15EDD7E0)
#define MOLEMOLE_UICONTROLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDD0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlItem_TypeDefinitionIndex = 53034;

	class UIControlItem : public ::System::Object
	{
	public:
		::System::String* ExportName; // 0x10
		::Enum_3_52F51ECF03644FA0 ExportType; // 0x18
		::UnityEngine::Object* ExportObject; // 0x20
		::System::String* CustomExportTypeName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_ISMATCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_4DE8CBABBBA1918B(::MoleMole::UIControlItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_4DE8CBABBBA1918B_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
		}

		::System::Void Method_1_7222809C3B193985(::System::Boolean a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_7222809C3B193985_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_1_7F53CB1E098E0EB4(::MoleMole::UIControlItem* a1, ::MoleMole::UIControlItem* a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UIControlItem*, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_7F53CB1E098E0EB4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_1_54EE5091F9DB1A7D(::MoleMole::UIControlItem* a1, ::MoleMole::UIControlItem* a2)
		{
			return ((::System::Boolean(*)(::MoleMole::UIControlItem*, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_54EE5091F9DB1A7D_OFFSET))(a1, a2);
		}

		::UnityEngine::GameObject* Method_1_7447D31007493755()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_7447D31007493755_OFFSET))(this);
		}

		::MoleMole::UIControlItem* Method_1_FF9D9C132E279CF6()
		{
			return ((::MoleMole::UIControlItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_METHOD_1_FF9D9C132E279CF6_OFFSET))(this);
		}
	};
}
