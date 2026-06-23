#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UICpScoreTipScriptNew_Enum_3_6E7E21494AB02161.h"
#include "unitysdk/MoleMole/UICpScoreTipScriptNew_Enum_3_AAE040F2F04B1A1A.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E264810)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_INITDATA_OFFSET UNITYSDK_OFFSET(0x1E265D00)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_METHOD_5_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1E264860)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E2658B0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETEXCLAMATIONMARK_OFFSET UNITYSDK_OFFSET(0x1E266150)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETGLODMARK_OFFSET UNITYSDK_OFFSET(0x1E266060)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETLOADER_OFFSET UNITYSDK_OFFSET(0x1E265CB0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETNUM_OFFSET UNITYSDK_OFFSET(0x1E2663B0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETPROPSPRITE_OFFSET UNITYSDK_OFFSET(0x1E265E70)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETRIGHTROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E266350)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETSYMBOL_OFFSET UNITYSDK_OFFSET(0x1E266230)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E2664C0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2665C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpScoreTipScriptNew_TypeDefinitionIndex = 90836;

	class UICpScoreTipScriptNew : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single flowDuration; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* images; // 0x20
		::System::Boolean hideHeadZero; // 0x28
		::System::Action* Field_5_3; // 0x30
		::System::Action* Field_5_4; // 0x38
		::System::Collections::Generic::Dictionary_2<::MoleMole::UICpScoreTipScriptNew_Enum_3_6E7E21494AB02161, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* Field_5_5; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Nums; // 0x48
		::System::Int32 num; // 0x50
		::MoleMole::UICpScoreTipScriptNew_Enum_3_6E7E21494AB02161 numType; // 0x54
		::Il2CppArray<::System::Int32>* Field_5_9; // 0x58
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* loadFunc; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_5_11; // 0x68
		::System::Boolean Field_5_12; // 0x70
		::Il2CppArray<::UnityEngine::UI::Image*>* symbols; // 0x78
		::UnityEngine::UI::Image* exclamationMark; // 0x80
		::UnityEngine::Canvas* exclamationCanvas; // 0x88
		::UnityEngine::UI::Image* goldMark; // 0x90
		::UnityEngine::GameObject* goldMarkRoot; // 0x98
		::UnityEngine::UI::Image* propSprite; // 0xA0
		::System::Boolean Field_5_19; // 0xA8
		::System::Single Field_5_20; // 0xAC
		::System::Int32 Field_5_21; // 0xB0
		::System::Int32 Field_5_22; // 0xB4
		::System::Int32 Field_5_23; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_AWAKE_OFFSET))(this);
		}

		::System::Void Refresh(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_REFRESH_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetLoader(::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETLOADER_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* InitData(::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_INITDATA_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetRightRootActive(::System::Boolean a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETRIGHTROOTACTIVE_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetPropSprite(::System::String* a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETPROPSPRITE_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetGlodMark(::System::Boolean a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETGLODMARK_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetExclamationMark(::System::Boolean a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETEXCLAMATIONMARK_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetSymbol(::MoleMole::UICpScoreTipScriptNew_Enum_3_AAE040F2F04B1A1A a1)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::MoleMole::UICpScoreTipScriptNew_Enum_3_AAE040F2F04B1A1A))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETSYMBOL_OFFSET))(this, a1);
		}

		::MoleMole::UICpScoreTipScriptNew* SetNum(::MoleMole::UICpScoreTipScriptNew_Enum_3_6E7E21494AB02161 a1, ::System::Int32 a2)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::MoleMole::UICpScoreTipScriptNew_Enum_3_6E7E21494AB02161, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETNUM_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_METHOD_5_21886A8411E71157_OFFSET))(this);
		}
	};
}
