#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"

class Class_0_16E4307DCC419505_669;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E32533CEFCF35A88_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161D6EB0)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_14CFD846B977D391_OFFSET UNITYSDK_OFFSET(0x161D70A0)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_2FF8627B06F9011A_OFFSET UNITYSDK_OFFSET(0x161D7FC0)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_31C1B44BC0765CA5_OFFSET UNITYSDK_OFFSET(0x161D7D30)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_5BC484BE70E2CDCD_OFFSET UNITYSDK_OFFSET(0x161D72B0)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_9078F16716F49E4E_OFFSET UNITYSDK_OFFSET(0x161D7B20)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_B67739F38D713D09_OFFSET UNITYSDK_OFFSET(0x161D7760)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x161D6F70)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x161D6FC0)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_E615B51EF9D855EB_1_OFFSET UNITYSDK_OFFSET(0x161D7F40)
#define CLASS_2_E32533CEFCF35A88_METHOD_2_E615B51EF9D855EB_OFFSET UNITYSDK_OFFSET(0x161D7020)
#define CLASS_2_E32533CEFCF35A88_ONCREATE_OFFSET UNITYSDK_OFFSET(0x161D6E00)
#define CLASS_2_E32533CEFCF35A88__CCTOR_OFFSET UNITYSDK_OFFSET(0x161D6F60)
#define CLASS_2_E32533CEFCF35A88__CTOR_OFFSET UNITYSDK_OFFSET(0x161D6D30)

inline static constexpr unsigned int Class_2_E32533CEFCF35A88_TypeDefinitionIndex = 72142;

class Class_2_E32533CEFCF35A88 : public ::Foundation::SingletonDisposable_1<::Class_2_E32533CEFCF35A88*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E32533CEFCF35A88_TypeDefinitionIndex)->GetStaticField(0x10430);
	}
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_6; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_7; // 0x18
	::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_669* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_669* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_669*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_669* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_669*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Void Method_2_E615B51EF9D855EB(::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_E615B51EF9D855EB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_14CFD846B977D391(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_14CFD846B977D391_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_B67739F38D713D09(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_B67739F38D713D09_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* Method_2_9078F16716F49E4E(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_9078F16716F49E4E_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_2_5BC484BE70E2CDCD(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_5BC484BE70E2CDCD_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_31C1B44BC0765CA5(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_31C1B44BC0765CA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_E615B51EF9D855EB_1(::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::UI::Extension::LinkClickInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_E615B51EF9D855EB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FF8627B06F9011A(::UnityEngine::UI::Extension::LinkClickInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::LinkClickInfo))((::PBYTE)hIl2Cpp + CLASS_2_E32533CEFCF35A88_METHOD_2_2FF8627B06F9011A_OFFSET))(this, a1);
	}
};
