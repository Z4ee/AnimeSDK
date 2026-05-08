#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_246;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E36D219DC88075B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1359C1D0)
#define CLASS_2_E36D219DC88075B9_METHOD_2_5BC484BE70E2CDCD_OFFSET UNITYSDK_OFFSET(0x1359C480)
#define CLASS_2_E36D219DC88075B9_METHOD_2_5FD8F9100DB051DC_OFFSET UNITYSDK_OFFSET(0x1359C290)
#define CLASS_2_E36D219DC88075B9_METHOD_2_66E72C197F5FD868_OFFSET UNITYSDK_OFFSET(0x1359CC90)
#define CLASS_2_E36D219DC88075B9_METHOD_2_91BBA1C1E0FFD3D7_OFFSET UNITYSDK_OFFSET(0x1359CEE0)
#define CLASS_2_E36D219DC88075B9_METHOD_2_97C5239FA79A327C_1_OFFSET UNITYSDK_OFFSET(0x1359D0D0)
#define CLASS_2_E36D219DC88075B9_METHOD_2_97C5239FA79A327C_OFFSET UNITYSDK_OFFSET(0x1359CBC0)
#define CLASS_2_E36D219DC88075B9_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1359CC40)
#define CLASS_2_E36D219DC88075B9_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x1359CE80)
#define CLASS_2_E36D219DC88075B9_METHOD_2_DB178EDAF4B28985_OFFSET UNITYSDK_OFFSET(0x1359C930)
#define CLASS_2_E36D219DC88075B9_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1359C120)
#define CLASS_2_E36D219DC88075B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1359C050)

inline static constexpr unsigned int Class_2_E36D219DC88075B9_TypeDefinitionIndex = 41474;

class Class_2_E36D219DC88075B9 : public ::Foundation::SingletonDisposable_1<::Class_2_E36D219DC88075B9*>
{
public:
	::System::Action_3<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_246* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_5FD8F9100DB051DC(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_5FD8F9100DB051DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB178EDAF4B28985(::System::String* a1, ::UnityEngine::UI::Extension::UILocalizationText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_DB178EDAF4B28985_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C5239FA79A327C(::System::Action_3<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_97C5239FA79A327C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_246* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_246*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_66E72C197F5FD868(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_66E72C197F5FD868_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_246* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_246*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* Method_2_91BBA1C1E0FFD3D7(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_91BBA1C1E0FFD3D7_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_2_5BC484BE70E2CDCD(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_5BC484BE70E2CDCD_OFFSET))(a1);
	}

	::System::Void Method_2_97C5239FA79A327C_1(::System::Action_3<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::String*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E36D219DC88075B9_METHOD_2_97C5239FA79A327C_1_OFFSET))(this, a1);
	}
};
