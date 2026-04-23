#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DebugGUIManager_Struct_2_0090549FE42EDE8E.h"
#include "unitysdk/RPG/Client/DebugGUIManager_Struct_2_E71A4E719BBCD0AD.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_869;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET UNITYSDK_OFFSET(0xA0F5D50)
#define RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA0F57B0)
#define RPG_CLIENT_DEBUGGUIMANAGER_BEGINCHANGECHECK_OFFSET UNITYSDK_OFFSET(0xA0F6BF0)
#define RPG_CLIENT_DEBUGGUIMANAGER_ENDCHANGECHECK_OFFSET UNITYSDK_OFFSET(0xA0F6CA0)
#define RPG_CLIENT_DEBUGGUIMANAGER_GETCURRENTCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xA0F6670)
#define RPG_CLIENT_DEBUGGUIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA0F6E20)
#define RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET UNITYSDK_OFFSET(0xA0F5800)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPCOLOR_OFFSET UNITYSDK_OFFSET(0xA0F6AA0)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xA0F64E0)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPGROUP_OFFSET UNITYSDK_OFFSET(0xA0F67B0)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHCOLOR_OFFSET UNITYSDK_OFFSET(0xA0F6900)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xA0F6140)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHGROUP_OFFSET UNITYSDK_OFFSET(0xA0F66E0)
#define RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET UNITYSDK_OFFSET(0xA0F5F20)
#define RPG_CLIENT_DEBUGGUIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F6E60)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugGUIManager_TypeDefinitionIndex = 63005;

	class DebugGUIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::DebugGUIManager** StaticGet_Field_5_1()
		{
			return (::RPG::Client::DebugGUIManager**)Il2CppClass::FromTypeDefinitionIndex(DebugGUIManager_TypeDefinitionIndex)->GetStaticField(0x31200);
		}
		::System::Boolean EnableGUI; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_869*>* Field_5_2; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DebugGUIManager_Struct_2_0090549FE42EDE8E>* Field_5_3; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DebugGUIManager_Struct_2_E71A4E719BBCD0AD>* Field_5_4; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Field_5_5; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET))(this);
		}

		static ::System::Void AddGUI(::Class_0_16E4307DCC419505_869* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET))(a1);
		}

		static ::System::Void RemoveGUI(::Class_0_16E4307DCC419505_869* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_869*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET))(a1);
		}

		::System::Void PushContentScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHCONTENTSCALE_OFFSET))(this, a1);
		}

		::System::Void PopContentScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPCONTENTSCALE_OFFSET))(this);
		}

		::System::Single GetCurrentContentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_GETCURRENTCONTENTSCALE_OFFSET))(this);
		}

		::System::Void PushGroup(::System::Boolean a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void PopGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPGROUP_OFFSET))(this);
		}

		::System::Void PushColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHCOLOR_OFFSET))(this, a1);
		}

		::System::Void PopColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPCOLOR_OFFSET))(this);
		}

		::System::Void BeginChangeCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_BEGINCHANGECHECK_OFFSET))(this);
		}

		::System::Boolean EndChangeCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ENDCHANGECHECK_OFFSET))(this);
		}

		static ::RPG::Client::DebugGUIManager* get_Instance()
		{
			return ((::RPG::Client::DebugGUIManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
