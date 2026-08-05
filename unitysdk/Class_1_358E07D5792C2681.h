#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
class Class_3_0D78EA91F90092C6;
namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIBangkovItemInfoWidgetController_Context; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_358E07D5792C2681_METHOD_1_3D000DBA693BD10D_OFFSET UNITYSDK_OFFSET(0x10F7B450)
#define CLASS_1_358E07D5792C2681_METHOD_1_3EAFF2CBFF6D648C_OFFSET UNITYSDK_OFFSET(0x10F7D530)
#define CLASS_1_358E07D5792C2681_METHOD_1_46778EB0EE8D9609_OFFSET UNITYSDK_OFFSET(0x10F7C3D0)
#define CLASS_1_358E07D5792C2681_METHOD_1_642AE53654CD1D97_OFFSET UNITYSDK_OFFSET(0x10F7D160)
#define CLASS_1_358E07D5792C2681_METHOD_1_7C3C9490BC79BC67_OFFSET UNITYSDK_OFFSET(0x10F7C710)
#define CLASS_1_358E07D5792C2681_METHOD_1_8D626121790AEAD7_OFFSET UNITYSDK_OFFSET(0x10F7A370)
#define CLASS_1_358E07D5792C2681_METHOD_1_8E51129BB7AF6021_OFFSET UNITYSDK_OFFSET(0x10F7B9B0)
#define CLASS_1_358E07D5792C2681_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x10F7D680)
#define CLASS_1_358E07D5792C2681_METHOD_1_C1732FC101BC4424_OFFSET UNITYSDK_OFFSET(0x10F7D5B0)
#define CLASS_1_358E07D5792C2681_METHOD_1_C55438CC7C53AE02_1_OFFSET UNITYSDK_OFFSET(0x10F7C1D0)
#define CLASS_1_358E07D5792C2681_METHOD_1_C55438CC7C53AE02_OFFSET UNITYSDK_OFFSET(0x10F7B260)
#define CLASS_1_358E07D5792C2681_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F7D620)
#define CLASS_1_358E07D5792C2681_METHOD_1_DA7442F54E5610AC_OFFSET UNITYSDK_OFFSET(0x10F7BF80)
#define CLASS_1_358E07D5792C2681_METHOD_1_E1161022F3813359_OFFSET UNITYSDK_OFFSET(0x10F7C7C0)
#define CLASS_1_358E07D5792C2681_METHOD_1_FD6692A5F6B0AC0C_1_OFFSET UNITYSDK_OFFSET(0x10F7D5A0)
#define CLASS_1_358E07D5792C2681_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x10F7C3C0)
#define CLASS_1_358E07D5792C2681_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET UNITYSDK_OFFSET(0x10F7A320)
#define CLASS_1_358E07D5792C2681_REQUESTNESTEDGIFTPREVIEW_OFFSET UNITYSDK_OFFSET(0x10F7A570)
#define CLASS_1_358E07D5792C2681__CTOR_OFFSET UNITYSDK_OFFSET(0x10F7A1D0)

inline static constexpr unsigned int Class_1_358E07D5792C2681_TypeDefinitionIndex = 45539;

class Class_1_358E07D5792C2681 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_175* Field_1_9; // 0x10
	::Class_0_16E4307DCC419505_175* Field_1_10; // 0x18
	::System::Func_1<::UnityEngine::RectTransform*>* Field_1_0; // 0x20
	::System::Func_1<::System::Boolean>* Field_1_7; // 0x28
	::MoleMole::UIWindowController* Field_1_1; // 0x30
	::Il2CppArray<::MoleMole::UIBangkovItemInfoWidgetController*>* Field_1_11; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Boolean Field_1_5; // 0x44
	::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection> Field_1_4; // 0x48

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::System::Func_1<::UnityEngine::RectTransform*>* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection> a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Func_1<::UnityEngine::RectTransform*>*, ::System::Func_1<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Nullable_1<::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection>))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void PreparePrimaryFromExternalIconClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_PREPAREPRIMARYFROMEXTERNALICONCLICK_OFFSET))(this);
	}

	::System::Void RequestNestedGiftPreview(::MoleMole::UIBangkovItemInfoWidgetController* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_175* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBangkovItemInfoWidgetController*, ::System::Int32, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_REQUESTNESTEDGIFTPREVIEW_OFFSET))(this, a1, a2, a3);
	}

	static ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Method_1_C55438CC7C53AE02(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_C55438CC7C53AE02_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8E51129BB7AF6021(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_8E51129BB7AF6021_OFFSET))(this, a1);
	}

	static ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Method_1_C55438CC7C53AE02_1(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_C55438CC7C53AE02_1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8D626121790AEAD7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_8D626121790AEAD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D000DBA693BD10D(::System::Int32 a1, ::UnityEngine::Transform* a2, ::MoleMole::UIBangkovItemInfoWidgetController_Context* a3, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::MoleMole::UIBangkovItemInfoWidgetController_Context*, ::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_3D000DBA693BD10D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_DA7442F54E5610AC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_DA7442F54E5610AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_1_7C3C9490BC79BC67(::Class_0_16E4307DCC419505_175* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_7C3C9490BC79BC67_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_642AE53654CD1D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_642AE53654CD1D97_OFFSET))(this);
	}

	::System::Boolean Method_1_3EAFF2CBFF6D648C(::Class_0_16E4307DCC419505_175* a1, ::Class_3_0D78EA91F90092C6* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::Class_3_0D78EA91F90092C6*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_3EAFF2CBFF6D648C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_FD6692A5F6B0AC0C_1_OFFSET))(this);
	}

	::System::Boolean Method_1_C1732FC101BC4424(::Class_0_16E4307DCC419505_175* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_C1732FC101BC4424_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E1161022F3813359(::Class_0_16E4307DCC419505_175* a1, ::Class_3_0D78EA91F90092C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::Class_3_0D78EA91F90092C6*))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_E1161022F3813359_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_1_46778EB0EE8D9609(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_358E07D5792C2681_METHOD_1_46778EB0EE8D9609_OFFSET))(this, a1);
	}
};
