#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_32D38A47E2A5ED82.h"
#include "unitysdk/Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4.h"
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

#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_1E78778740C9018B_OFFSET UNITYSDK_OFFSET(0x1812AB90)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_2BBDDBD12D0581B9_OFFSET UNITYSDK_OFFSET(0x1812BE80)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_2FDF8593414E852E_OFFSET UNITYSDK_OFFSET(0x1812A380)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x18128A80)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_44EA4232901F8977_OFFSET UNITYSDK_OFFSET(0x1812AB00)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_67A6ECABB3AF9566_OFFSET UNITYSDK_OFFSET(0x18129690)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_74343DB685925285_1_OFFSET UNITYSDK_OFFSET(0x1812B4A0)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_74343DB685925285_OFFSET UNITYSDK_OFFSET(0x18129CE0)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_C06B78E31CBFB018_OFFSET UNITYSDK_OFFSET(0x1812BC90)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_CA688C7D3625AD50_OFFSET UNITYSDK_OFFSET(0x1812BB40)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_CEECB3DB29C5B884_OFFSET UNITYSDK_OFFSET(0x18129800)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_D59AE8E11157D460_OFFSET UNITYSDK_OFFSET(0x18129570)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_D6597182B6A19FE4_OFFSET UNITYSDK_OFFSET(0x1812B130)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_DEE62D7493F9AFC1_OFFSET UNITYSDK_OFFSET(0x18129A10)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x18128F50)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EBA805CE6A9E8CDB_OFFSET UNITYSDK_OFFSET(0x181296E0)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EE5A361CA1BDC8E8_OFFSET UNITYSDK_OFFSET(0x1812B2D0)
#define CLASS_2_7EA7B2D0505ACA5E_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x18128BF0)
#define CLASS_2_7EA7B2D0505ACA5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18128DF0)
#define CLASS_2_7EA7B2D0505ACA5E__CTOR_OFFSET UNITYSDK_OFFSET(0x18128D60)

inline static constexpr unsigned int Class_2_7EA7B2D0505ACA5E_TypeDefinitionIndex = 54487;

class Class_2_7EA7B2D0505ACA5E : public ::Class_1_32D38A47E2A5ED82<::Class_2_7EA7B2D0505ACA5E*>
{
public:
	static ::Il2CppArray<::MoleMole::ConfigUICommon_Input_PositionType>** StaticGet_Field_2_4()
	{
		return (::Il2CppArray<::MoleMole::ConfigUICommon_Input_PositionType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EA7B2D0505ACA5E_TypeDefinitionIndex)->GetStaticField(0x49980);
	}
	static ::Il2CppArray<::MoleMole::ConfigUICommon_Input_ButtonType>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::MoleMole::ConfigUICommon_Input_ButtonType>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7EA7B2D0505ACA5E_TypeDefinitionIndex)->GetStaticField(0x49988);
	}
	::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* Field_2_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>* Field_2_1; // 0x18
	::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* Field_2_6; // 0x20
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* Method_2_EBA805CE6A9E8CDB()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EBA805CE6A9E8CDB_OFFSET))(this);
	}

	::System::ValueTuple_2<::MoleMole::UIButtonPosHandler*, ::MoleMole::UIButtonSizeHandler*> Method_2_CEECB3DB29C5B884(::Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4 a1)
	{
		return ((::System::ValueTuple_2<::MoleMole::UIButtonPosHandler*, ::MoleMole::UIButtonSizeHandler*>(*)(::PVOID, ::Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_CEECB3DB29C5B884_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* Method_2_D59AE8E11157D460()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_D59AE8E11157D460_OFFSET))(this);
	}

	static ::MoleMole::ConfigUICommon_Input_SceneType Method_2_DEE62D7493F9AFC1()
	{
		return ((::MoleMole::ConfigUICommon_Input_SceneType(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_DEE62D7493F9AFC1_OFFSET))();
	}

	::System::Void Method_2_74343DB685925285(::MoleMole::ConfigUICommon_Input_SceneType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_74343DB685925285_OFFSET))(this, a1);
	}

	::System::Void Method_2_44EA4232901F8977(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_44EA4232901F8977_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6597182B6A19FE4(::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_D6597182B6A19FE4_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1E78778740C9018B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_1E78778740C9018B_OFFSET))();
	}

	::System::Void Method_2_2FDF8593414E852E(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_2FDF8593414E852E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE5A361CA1BDC8E8(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_EE5A361CA1BDC8E8_OFFSET))(this, a1);
	}

	::System::Void Method_2_74343DB685925285_1(::MoleMole::ConfigUICommon_Input_SceneType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_74343DB685925285_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_67A6ECABB3AF9566(::MoleMole::ConfigUICommon_Input_PositionType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_67A6ECABB3AF9566_OFFSET))(a1);
	}

	::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_2_CA688C7D3625AD50(::MoleMole::ConfigUICommon_Input_PanelType a1)
	{
		return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_CA688C7D3625AD50_OFFSET))(this, a1);
	}

	::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* Method_2_C06B78E31CBFB018(::MoleMole::ConfigUICommon_Input_ButtonType a1)
	{
		return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_C06B78E31CBFB018_OFFSET))(this, a1);
	}

	::System::Void Method_2_2BBDDBD12D0581B9(::System::Collections::Generic::Dictionary_2<::Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Class_2_7EA7B2D0505ACA5E_Struct_2_E5D2CB6FF4F251D4, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EA7B2D0505ACA5E_METHOD_2_2BBDDBD12D0581B9_OFFSET))(this, a1);
	}
};
