#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_32D38A47E2A5ED82.h"
#include "unitysdk/Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIButtonPosHandler; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPosition; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_B9D914C54103CFA8_METHOD_2_1E78778740C9018B_OFFSET UNITYSDK_OFFSET(0x145F4C80)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_2BBDDBD12D0581B9_OFFSET UNITYSDK_OFFSET(0x145F58D0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_31D01CB38ACC3480_1_OFFSET UNITYSDK_OFFSET(0x145F5220)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_31D01CB38ACC3480_OFFSET UNITYSDK_OFFSET(0x145F3790)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x145F2750)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_44EA4232901F8977_OFFSET UNITYSDK_OFFSET(0x145F4BF0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_67A6ECABB3AF9566_OFFSET UNITYSDK_OFFSET(0x145F4BA0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_A0C1B8F25F9A03D7_OFFSET UNITYSDK_OFFSET(0x145F2C20)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_B64097CA13F700E8_OFFSET UNITYSDK_OFFSET(0x145F42C0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_CD7DAD2F3914CEE5_OFFSET UNITYSDK_OFFSET(0x145F4A50)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_CEECB3DB29C5B884_OFFSET UNITYSDK_OFFSET(0x145F5A90)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_D59AE8E11157D460_OFFSET UNITYSDK_OFFSET(0x145F33A0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_D6597182B6A19FE4_OFFSET UNITYSDK_OFFSET(0x145F4120)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_DEE62D7493F9AFC1_OFFSET UNITYSDK_OFFSET(0x145F34C0)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x145F4430)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_EBA805CE6A9E8CDB_OFFSET UNITYSDK_OFFSET(0x145F4000)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_EE5A361CA1BDC8E8_OFFSET UNITYSDK_OFFSET(0x145F3E40)
#define CLASS_2_B9D914C54103CFA8_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x145F28C0)
#define CLASS_2_B9D914C54103CFA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x145F2AC0)
#define CLASS_2_B9D914C54103CFA8__CTOR_OFFSET UNITYSDK_OFFSET(0x145F2A30)

inline static constexpr unsigned int Class_2_B9D914C54103CFA8_TypeDefinitionIndex = 62169;

class Class_2_B9D914C54103CFA8 : public ::Class_1_32D38A47E2A5ED82<::Class_2_B9D914C54103CFA8*>
{
public:
	static ::Il2CppArray<::MoleMole::ConfigUICommon_Input_PositionType>** StaticGet_Field_2_3()
	{
		return (::Il2CppArray<::MoleMole::ConfigUICommon_Input_PositionType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9D914C54103CFA8_TypeDefinitionIndex)->GetStaticField(0x391E0);
	}
	static ::Il2CppArray<::MoleMole::ConfigUICommon_Input_ButtonType>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::MoleMole::ConfigUICommon_Input_ButtonType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B9D914C54103CFA8_TypeDefinitionIndex)->GetStaticField(0x391E8);
	}
	::System::Collections::Generic::Dictionary_2<::Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_A0C1B8F25F9A03D7(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_A0C1B8F25F9A03D7_OFFSET))(this, a1);
	}

	static ::MoleMole::ConfigUICommon_Input_SceneType Method_2_DEE62D7493F9AFC1()
	{
		return ((::MoleMole::ConfigUICommon_Input_SceneType(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_DEE62D7493F9AFC1_OFFSET))();
	}

	::System::Void Method_2_31D01CB38ACC3480(::MoleMole::ConfigUICommon_Input_SceneType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_31D01CB38ACC3480_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE5A361CA1BDC8E8(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_EE5A361CA1BDC8E8_OFFSET))(this, a1);
	}

	::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* Method_2_B64097CA13F700E8(::MoleMole::ConfigUICommon_Input_ButtonType a1)
	{
		return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_B64097CA13F700E8_OFFSET))(this, a1);
	}

	::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_2_CD7DAD2F3914CEE5(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_CD7DAD2F3914CEE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_2_44EA4232901F8977(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_44EA4232901F8977_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* Method_2_D59AE8E11157D460()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_D59AE8E11157D460_OFFSET))(this);
	}

	::System::Void Method_2_31D01CB38ACC3480_1(::MoleMole::ConfigUICommon_Input_SceneType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_31D01CB38ACC3480_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_67A6ECABB3AF9566(::MoleMole::ConfigUICommon_Input_PositionType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_67A6ECABB3AF9566_OFFSET))(a1);
	}

	::System::Void Method_2_D6597182B6A19FE4(::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_D6597182B6A19FE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_2BBDDBD12D0581B9(::System::Collections::Generic::Dictionary_2<::Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_2BBDDBD12D0581B9_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::MoleMole::UIButtonPosHandler*, ::MoleMole::UIButtonSizeHandler*> Method_2_CEECB3DB29C5B884(::Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4 a1)
	{
		return ((::System::ValueTuple_2<::MoleMole::UIButtonPosHandler*, ::MoleMole::UIButtonSizeHandler*>(*)(::PVOID, ::Class_2_B9D914C54103CFA8_Struct_2_E5D2CB6FF4F251D4))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_CEECB3DB29C5B884_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1E78778740C9018B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_1E78778740C9018B_OFFSET))();
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* Method_2_EBA805CE6A9E8CDB()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9D914C54103CFA8_METHOD_2_EBA805CE6A9E8CDB_OFFSET))(this);
	}
};
