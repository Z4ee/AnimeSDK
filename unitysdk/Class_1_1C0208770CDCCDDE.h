#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15A8EF2824547B27.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionItemWidgetController; }
namespace MoleMole { class UIHollowCardOptionsDialogV2PopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_1_1C0208770CDCCDDE_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x12CD9EB0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x12CD88D0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x12CD99F0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_40BF8BFB24E091F4_OFFSET UNITYSDK_OFFSET(0x12CD9340)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_4B59CD817FECF6AC_OFFSET UNITYSDK_OFFSET(0x12CD87F0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x12CD90B0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0x12CD93C0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x12CD7CD0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_89C03AF435ED2C78_1_OFFSET UNITYSDK_OFFSET(0x12CDAB80)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x12CD9450)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x12CDAB60)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x12CD96A0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x12CD9690)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12CD7CB0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CD8C10)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12CD8FB0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_D1E3F03D8DEFE8A6_OFFSET UNITYSDK_OFFSET(0x12CD8C50)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12CDAB70)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12CD7CC0)
#define CLASS_1_1C0208770CDCCDDE_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x12CD8F90)
#define CLASS_1_1C0208770CDCCDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD7AA0)

inline static constexpr unsigned int Class_1_1C0208770CDCCDDE_TypeDefinitionIndex = 89773;

class Class_1_1C0208770CDCCDDE : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x28; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	::MoleMole::HollowCardCombineConfig* Field_1_22; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_19; // 0x28
	::DG::Tweening::Sequence* Field_1_18; // 0x30
	::Class_1_0D6706375CDAAE8C* Field_1_14; // 0x38
	::MoleMole::UIHollowCardOptionItemWidgetController* Field_1_0; // 0x40
	::UnityEngine::RectTransform* Field_1_23; // 0x48
	::UnityEngine::UI::HorizontalLayoutGroup* Field_1_7; // 0x50
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_13; // 0x58
	::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* Field_1_16; // 0x60
	::Enum_3_15A8EF2824547B27 Field_1_9; // 0x68
	::System::Single Field_1_4; // 0x6C
	::System::Int32 Field_1_17; // 0x70
	::System::Single Field_1_5; // 0x74
	::System::Boolean Field_1_20; // 0x78
	::System::Boolean Field_1_8; // 0x79
	::System::Boolean Field_1_21; // 0x7A
	::System::Boolean Field_1_15; // 0x7B

	::System::Void _ctor(::MoleMole::UIHollowCardOptionsDialogV2PopWindowController* a1, ::UnityEngine::Transform* a2, ::UnityEngine::UI::HorizontalLayoutGroup* a3, ::Enum_3_15A8EF2824547B27 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogV2PopWindowController*, ::UnityEngine::Transform*, ::UnityEngine::UI::HorizontalLayoutGroup*, ::Enum_3_15A8EF2824547B27))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D1E3F03D8DEFE8A6(::Class_1_0D6706375CDAAE8C* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_D1E3F03D8DEFE8A6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void Method_1_40BF8BFB24E091F4(::UnityEngine::ParticleSystem* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_40BF8BFB24E091F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_36726F9E10ADB55F_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_4B59CD817FECF6AC(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_4B59CD817FECF6AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89C03AF435ED2C78_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C0208770CDCCDDE_METHOD_1_89C03AF435ED2C78_1_OFFSET))(this);
	}
};
