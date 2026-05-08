#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_3_7A267C1006DF3527;
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIBangkovItemInfoWidgetController_Context; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_61933880828D8052_METHOD_1_1CB9E9E1296AEA72_OFFSET UNITYSDK_OFFSET(0x10B97C00)
#define CLASS_1_61933880828D8052_METHOD_1_3151C3B808F91095_OFFSET UNITYSDK_OFFSET(0x10B97810)
#define CLASS_1_61933880828D8052_METHOD_1_3D000DBA693BD10D_OFFSET UNITYSDK_OFFSET(0x10B96FF0)
#define CLASS_1_61933880828D8052_METHOD_1_517868E032CD4C9E_1_OFFSET UNITYSDK_OFFSET(0x10B98480)
#define CLASS_1_61933880828D8052_METHOD_1_517868E032CD4C9E_OFFSET UNITYSDK_OFFSET(0x10B97BF0)
#define CLASS_1_61933880828D8052_METHOD_1_5FE09A64E5A28F5D_OFFSET UNITYSDK_OFFSET(0x10B98490)
#define CLASS_1_61933880828D8052_METHOD_1_6416A97C2280A565_OFFSET UNITYSDK_OFFSET(0x10B99370)
#define CLASS_1_61933880828D8052_METHOD_1_642AE53654CD1D97_OFFSET UNITYSDK_OFFSET(0x10B98500)
#define CLASS_1_61933880828D8052_METHOD_1_71915625398DA8B1_OFFSET UNITYSDK_OFFSET(0x10B98980)
#define CLASS_1_61933880828D8052_METHOD_1_8D626121790AEAD7_OFFSET UNITYSDK_OFFSET(0x10B95EB0)
#define CLASS_1_61933880828D8052_METHOD_1_96384A0ECB19BB6B_OFFSET UNITYSDK_OFFSET(0x10B988D0)
#define CLASS_1_61933880828D8052_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x10B97560)
#define CLASS_1_61933880828D8052_METHOD_1_C55438CC7C53AE02_1_OFFSET UNITYSDK_OFFSET(0x10B97610)
#define CLASS_1_61933880828D8052_METHOD_1_C55438CC7C53AE02_OFFSET UNITYSDK_OFFSET(0x10B96E00)
#define CLASS_1_61933880828D8052_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B98410)
#define CLASS_1_61933880828D8052_METHOD_1_DA7442F54E5610AC_OFFSET UNITYSDK_OFFSET(0x10B981C0)
#define CLASS_1_61933880828D8052_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET UNITYSDK_OFFSET(0x10B95E60)
#define CLASS_1_61933880828D8052_REQUESTNESTEDGIFTPREVIEW_OFFSET UNITYSDK_OFFSET(0x10B960B0)
#define CLASS_1_61933880828D8052__CTOR_OFFSET UNITYSDK_OFFSET(0x10B95D10)

inline static constexpr unsigned int Class_1_61933880828D8052_TypeDefinitionIndex = 62680;

class Class_1_61933880828D8052 : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::UIBangkovItemInfoWidgetController*>* Field_1_6; // 0x10
	::MoleMole::UIItemIconBtnWidgetController* Field_1_8; // 0x18
	::MoleMole::UIWindowController* Field_1_0; // 0x20
	::System::Func_1<::System::Boolean>* Field_1_2; // 0x28
	::MoleMole::UIItemIconBtnWidgetController* Field_1_7; // 0x30
	::System::Func_1<::UnityEngine::RectTransform*>* Field_1_1; // 0x38
	::System::Single Field_1_3; // 0x40
	::System::Boolean Field_1_4; // 0x44
	::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection> Field_1_5; // 0x48

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::System::Func_1<::UnityEngine::RectTransform*>* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection> a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Func_1<::UnityEngine::RectTransform*>*, ::System::Func_1<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection>))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void PreparePrimaryFromExternalIconClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET))(this);
	}

	::System::Void RequestNestedGiftPreview(::MoleMole::UIBangkovItemInfoWidgetController* a1, ::System::Int32 a2, ::MoleMole::UIItemIconBtnWidgetController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Int32, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_REQUESTNESTEDGIFTPREVIEW_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	static ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Method_1_C55438CC7C53AE02(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_C55438CC7C53AE02_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Method_1_C55438CC7C53AE02_1(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_C55438CC7C53AE02_1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3D000DBA693BD10D(::System::Int32 a1, ::UnityEngine::Transform* a2, ::MoleMole::UIBangkovItemInfoWidgetController_Context* a3, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::MoleMole::UIBangkovItemInfoWidgetController_Context*, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_3D000DBA693BD10D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3151C3B808F91095(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_3151C3B808F91095_OFFSET))(this, a1);
	}

	::System::Void Method_1_517868E032CD4C9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_517868E032CD4C9E_OFFSET))(this);
	}

	::System::Void Method_1_1CB9E9E1296AEA72(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_1CB9E9E1296AEA72_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D626121790AEAD7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_8D626121790AEAD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_517868E032CD4C9E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_517868E032CD4C9E_1_OFFSET))(this);
	}

	::System::Boolean Method_1_5FE09A64E5A28F5D(::MoleMole::UIItemIconBtnWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_5FE09A64E5A28F5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96384A0ECB19BB6B(::MoleMole::UIItemIconBtnWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_96384A0ECB19BB6B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_642AE53654CD1D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_642AE53654CD1D97_OFFSET))(this);
	}

	::System::Boolean Method_1_6416A97C2280A565(::MoleMole::UIItemIconBtnWidgetController* a1, ::Class_3_7A267C1006DF3527* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::Class_3_7A267C1006DF3527*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_6416A97C2280A565_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71915625398DA8B1(::MoleMole::UIItemIconBtnWidgetController* a1, ::Class_3_7A267C1006DF3527* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*, ::Class_3_7A267C1006DF3527*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_71915625398DA8B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DA7442F54E5610AC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_61933880828D8052_METHOD_1_DA7442F54E5610AC_OFFSET))(this, a1);
	}
};
