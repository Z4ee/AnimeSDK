#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadScrollView_Struct_2_85114379B8BC4029.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x17DD51C0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x17DD3A10)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x17DD3B80)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x17DD3A20)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x17DD4D40)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x17DD5DE0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_542BC40870A64D2F_OFFSET UNITYSDK_OFFSET(0x17DD3D00)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0x17DD4170)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_7F7EAC60E1D93F7A_OFFSET UNITYSDK_OFFSET(0x17DD4BA0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_7F890042F480F391_OFFSET UNITYSDK_OFFSET(0x17DD4CA0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17DD6170)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_8B6FD31A446C482F_OFFSET UNITYSDK_OFFSET(0x17DD58C0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_AF0383B32411EDFF_OFFSET UNITYSDK_OFFSET(0x17DD4DA0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_C780AE0E2BA9FEE8_OFFSET UNITYSDK_OFFSET(0x17DD5B80)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17DD5B30)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17DD5AE0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA59D119EC839119_OFFSET UNITYSDK_OFFSET(0x17DD5690)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x17DD4F60)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17DD5040)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD5230)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x17DD53F0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0x17DD5480)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17DD5510)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x17DD55C0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17DD55D0)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x17DD5680)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadScrollView_TypeDefinitionIndex = 47270;

	class MonoGamepadScrollView : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MonoUITableScrollV2* _scrollView; // 0xE8
		::MoleMole::InputLogicEventType _scrollEvent; // 0xF0
		::System::Single _speed; // 0xF4
		::UnityEngine::RectTransform_Axis _moveType; // 0xF8
		::System::Single _thresholdDelta; // 0xFC
		::System::Single _thresholdAngle; // 0x100
		::System::Boolean _trySelectContentSelectable; // 0x104
		::MoleMole::InputLogicEventType _prevItemEvent; // 0x108
		::MoleMole::InputLogicEventType _nextItemEvent; // 0x10C
		::MoleMole::InputLogicEventType _confirmItemEvent; // 0x110
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadSelectable*>* Field_6_10; // 0x118
		::System::Int32 Field_6_11; // 0x120
		::System::Int32 Field_6_12; // 0x124
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_6_13; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GET_SELECTEDINDEX_OFFSET))(this);
		}

		::System::Boolean Method_6_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean Method_6_542BC40870A64D2F(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_542BC40870A64D2F_OFFSET))(this, a1);
		}

		::System::Void Method_6_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_17BD30EFE8176014_OFFSET))(this);
		}

		::System::Void Method_6_AF0383B32411EDFF(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_AF0383B32411EDFF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void SelectIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_SELECTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_GETITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean __base_IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_7F7EAC60E1D93F7A(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_7F7EAC60E1D93F7A_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_CA59D119EC839119(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA59D119EC839119_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_6_8B6FD31A446C482F(::MoleMole::MonoGamepadSelectable* a1, ::MoleMole::MonoGamepadScrollView_Struct_2_85114379B8BC4029& a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadScrollView_Struct_2_85114379B8BC4029&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_8B6FD31A446C482F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_60BAB51FAB46DBD1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_60BAB51FAB46DBD1_OFFSET))(this, a1);
		}

		::System::Void Method_6_361C06486F56B4E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_361C06486F56B4E7_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* Method_6_7F890042F480F391()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_7F890042F480F391_OFFSET))(this);
		}

		::System::Int32 Method_6_C780AE0E2BA9FEE8(::MoleMole::MonoGamepadScrollView_Struct_2_85114379B8BC4029& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadScrollView_Struct_2_85114379B8BC4029&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_C780AE0E2BA9FEE8_OFFSET))(this, a1);
		}

		::System::Void Method_6_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW_METHOD_6_832295EC279E5994_OFFSET))(this);
		}
	};
}
