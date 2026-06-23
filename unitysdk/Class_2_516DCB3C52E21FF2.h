#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_19F59E00BF26DFA9.h"
#include "unitysdk/Enum_3_E8AA3BFDDEBD45EA.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_FA093D24932D214F.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B5F58059A372D660;
namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_516DCB3C52E21FF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x131DF6A0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_2483ADBE483CF401_OFFSET UNITYSDK_OFFSET(0x131E14E0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_6760ACCBF02B4927_OFFSET UNITYSDK_OFFSET(0x131DFEF0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_84F804B2B956D18D_OFFSET UNITYSDK_OFFSET(0x131E1140)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_891D2360CB4AAF39_OFFSET UNITYSDK_OFFSET(0x131E1450)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x131E16D0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_9727757D1D6D3326_OFFSET UNITYSDK_OFFSET(0x131E06A0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_9F8864631434A8C7_1_OFFSET UNITYSDK_OFFSET(0x131E1780)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_9F8864631434A8C7_OFFSET UNITYSDK_OFFSET(0x131E1630)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x131E17E0)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x131E1340)
#define CLASS_2_516DCB3C52E21FF2_METHOD_2_FABC9D43ED6552D8_OFFSET UNITYSDK_OFFSET(0x131E0F90)
#define CLASS_2_516DCB3C52E21FF2_ONCREATE_OFFSET UNITYSDK_OFFSET(0x131DF030)
#define CLASS_2_516DCB3C52E21FF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x131DFEE0)
#define CLASS_2_516DCB3C52E21FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x131DFD20)

inline static constexpr unsigned int Class_2_516DCB3C52E21FF2_TypeDefinitionIndex = 78924;

class Class_2_516DCB3C52E21FF2 : public ::Foundation::SingletonDisposable_1<::Class_2_516DCB3C52E21FF2*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_516DCB3C52E21FF2_TypeDefinitionIndex)->GetStaticField(0x11320);
	}
	::Class_1_B5F58059A372D660* Field_2_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>* Field_2_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_E8AA3BFDDEBD45EA, ::Class_1_B5F58059A372D660*>* Field_2_1; // 0x20
	::System::Runtime::CompilerServices::ConditionalWeakTable_2<::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::Vector3>*>* Field_2_5; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_FA093D24932D214F>* Method_2_6760ACCBF02B4927(::System::Collections::Generic::IEnumerable_1<::MoleMole::UICloudController_UIRTCItem*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FA093D24932D214F>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::UICloudController_UIRTCItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_6760ACCBF02B4927_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FABC9D43ED6552D8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_FABC9D43ED6552D8_OFFSET))(this, a1);
	}

	::Class_1_B5F58059A372D660* Method_2_84F804B2B956D18D(::Enum_3_E8AA3BFDDEBD45EA a1)
	{
		return ((::Class_1_B5F58059A372D660*(*)(::PVOID, ::Enum_3_E8AA3BFDDEBD45EA))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_84F804B2B956D18D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_2483ADBE483CF401(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_2483ADBE483CF401_OFFSET))(this, a1);
	}

	::Struct_2_FA093D24932D214F Method_2_9727757D1D6D3326(::Enum_3_19F59E00BF26DFA9 a1, ::UnityEngine::RectTransform* a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* a4, ::System::Boolean& a5)
	{
		return ((::Struct_2_FA093D24932D214F(*)(::PVOID, ::Enum_3_19F59E00BF26DFA9, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_9727757D1D6D3326_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_E8AA3BFDDEBD45EA Method_2_891D2360CB4AAF39()
	{
		return ((::Enum_3_E8AA3BFDDEBD45EA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_891D2360CB4AAF39_OFFSET))(this);
	}

	::System::Void Method_2_9F8864631434A8C7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_9F8864631434A8C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_9F8864631434A8C7_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_9F8864631434A8C7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_516DCB3C52E21FF2_METHOD_2_AA08720895458700_OFFSET))(this, a1);
	}
};
