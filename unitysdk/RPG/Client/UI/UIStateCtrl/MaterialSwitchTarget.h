#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_29ED79A4693535A3_OFFSET UNITYSDK_OFFSET(0xE30B8A0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0xE30B9C0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_E78C6A7FA9F07F9A_OFFSET UNITYSDK_OFFSET(0xE30B960)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_EBCE0F8672AB6F83_OFFSET UNITYSDK_OFFSET(0xE30B900)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xE309FF0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MaterialSwitchTarget_TypeDefinitionIndex = 73974;

	class MaterialSwitchTarget : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_29ED79A4693535A3(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_29ED79A4693535A3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EBCE0F8672AB6F83(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_EBCE0F8672AB6F83_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_E78C6A7FA9F07F9A(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_E78C6A7FA9F07F9A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALSWITCHTARGET_METHOD_1_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
		}
	};
}
