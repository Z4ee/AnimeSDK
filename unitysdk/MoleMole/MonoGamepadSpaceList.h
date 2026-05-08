#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_Struct_2_1A82DD538E15537D.h"
#include "unitysdk/MoleMole/MonoGamepadCustomList.h"
#include "unitysdk/MoleMole/MonoGamepadSpaceList_Enum_3_EBB7C008583235EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoGamepadSpaceTarget; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_012A22ADF3F7C5C4_OFFSET UNITYSDK_OFFSET(0x1235D740)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_0B0744E71AE9AEFF_OFFSET UNITYSDK_OFFSET(0x1235C130)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_219339329CC0972E_OFFSET UNITYSDK_OFFSET(0x1235D600)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_266A11C83A4BA7EF_OFFSET UNITYSDK_OFFSET(0x1235BDB0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x1235B1E0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_52A2E47646B3D010_OFFSET UNITYSDK_OFFSET(0x1235B6F0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_94B535719D771BB5_1_OFFSET UNITYSDK_OFFSET(0x1235DE80)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_94B535719D771BB5_OFFSET UNITYSDK_OFFSET(0x1235DBF0)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_97301F7D796C67A8_OFFSET UNITYSDK_OFFSET(0x1235B660)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_C1660E54F11A6094_OFFSET UNITYSDK_OFFSET(0x1235DD40)
#define MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_DDC17051BA491457_OFFSET UNITYSDK_OFFSET(0x1235BED0)
#define MOLEMOLE_MONOGAMEPADSPACELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D410)
#define MOLEMOLE_MONOGAMEPADSPACELIST___BASE_ISHANDLEINPUTPOST_OFFSET UNITYSDK_OFFSET(0x1235D500)
#define MOLEMOLE_MONOGAMEPADSPACELIST___BASE_ONRUNTIMEMANAGEDITEMSCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1235D530)
#define MOLEMOLE_MONOGAMEPADSPACELIST___BASE_TRYMOVEINDEXBYDIR_OFFSET UNITYSDK_OFFSET(0x1235D5C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSpaceList_TypeDefinitionIndex = 38674;

	class MonoGamepadSpaceList : public ::MoleMole::MonoGamepadCustomList
	{
	public:
		::System::Int32 CheckOffect; // 0x1C8
		::System::Single ForwardWeightValue; // 0x1CC
		::System::Single PreferWeightValue; // 0x1D0
		::System::Boolean SkipIgnoreItem; // 0x1D4
		::System::Boolean PreferLastSelect; // 0x1D5
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MoleMole::MonoGamepadSpaceTarget*>* Field_8_5; // 0x1D8
		::System::Boolean Field_8_6; // 0x1E0
		::System::Boolean Field_8_7; // 0x1E1
		::UnityEngine::Vector2 Field_8_8; // 0x1E4
		::UnityEngine::Vector2 Field_8_9; // 0x1EC
		::UnityEngine::Vector2 Field_8_10; // 0x1F4
		::UnityEngine::Vector2 Field_8_11; // 0x1FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Boolean Method_8_97301F7D796C67A8(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_97301F7D796C67A8_OFFSET))(this, a1);
		}

		::System::Int32 Method_8_52A2E47646B3D010(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_52A2E47646B3D010_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean __base_IsHandleInputPost(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST___BASE_ISHANDLEINPUTPOST_OFFSET))(this, a1);
		}

		::System::Void __base_OnRuntimeManagedItemsChangeHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST___BASE_ONRUNTIMEMANAGEDITEMSCHANGEHANDLE_OFFSET))(this);
		}

		::System::Int32 __base_TryMoveIndexByDir(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST___BASE_TRYMOVEINDEXBYDIR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_8_219339329CC0972E(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_219339329CC0972E_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::InputLogicEventType Method_8_266A11C83A4BA7EF(::UnityEngine::Vector2 a1)
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_266A11C83A4BA7EF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_8_012A22ADF3F7C5C4(::UnityEngine::RectTransform* a1, ::MoleMole::MonoGamepadSpaceList_Enum_3_EBB7C008583235EF a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::MoleMole::MonoGamepadSpaceList_Enum_3_EBB7C008583235EF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_012A22ADF3F7C5C4_OFFSET))(this, a1, a2);
		}

		::System::Single Method_8_94B535719D771BB5(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_94B535719D771BB5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Method_8_0B0744E71AE9AEFF(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_0B0744E71AE9AEFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single Method_8_94B535719D771BB5_1(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_94B535719D771BB5_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_8_C1660E54F11A6094(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_C1660E54F11A6094_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_8_DDC17051BA491457(::MoleMole::InputLogicEventType a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSPACELIST_METHOD_8_DDC17051BA491457_OFFSET))(this, a1, a2, a3);
		}
	};
}
