#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35504EF8BDEEADD3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_176;
class Class_1_22EF0C22B6FD8CD9;
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point; }
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Zone; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Spline { class NAPPointMeta; }
namespace MoleMole::Spline { class NAPPointMetaPluginBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_EF07D48DC08E3242_METHOD_1_02F87D92F9D06185_OFFSET UNITYSDK_OFFSET(0x17D1D980)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x1C3C0450)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_2513FFAF64CB1740_1_OFFSET UNITYSDK_OFFSET(0x1C3C1310)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_2513FFAF64CB1740_OFFSET UNITYSDK_OFFSET(0x1C3C11B0)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_25F90D4C940D48BE_OFFSET UNITYSDK_OFFSET(0x17D1DC00)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_26A90F59AE6B4E37_OFFSET UNITYSDK_OFFSET(0x1C3C01C0)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_2ADD635F1EF482BC_OFFSET UNITYSDK_OFFSET(0x1C3BFE10)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_37E8E75E32912EF7_OFFSET UNITYSDK_OFFSET(0x1C3C1470)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_4D92D9532E199C2E_OFFSET UNITYSDK_OFFSET(0x1C3C1700)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_50224E0C20244ACB_OFFSET UNITYSDK_OFFSET(0x1C3C1960)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1C3C0E00)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_97D34FD4DCD84DBF_OFFSET UNITYSDK_OFFSET(0x17D20000)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_9944A1908EF42E01_OFFSET UNITYSDK_OFFSET(0x1C3C0B00)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_D380120471B30DB9_OFFSET UNITYSDK_OFFSET(0x17D1DBF0)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_D74DCC727EDA1C0F_OFFSET UNITYSDK_OFFSET(0x1C3C0C80)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_F21DB3F45DB64BD3_OFFSET UNITYSDK_OFFSET(0x17D1D910)
#define CLASS_1_EF07D48DC08E3242_METHOD_1_FF16AFDAF5CD1E90_OFFSET UNITYSDK_OFFSET(0x1C3C1B60)
#define CLASS_1_EF07D48DC08E3242__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1D6B0)

inline static constexpr unsigned int Class_1_EF07D48DC08E3242_TypeDefinitionIndex = 61086;

class Class_1_EF07D48DC08E3242 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMeta*>* Field_1_7; // 0x10
	::Class_0_16E4307DCC419505_176* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMetaPluginBase*>* Field_1_6; // 0x20
	::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_35504EF8BDEEADD3>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Field_1_5; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_176* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F21DB3F45DB64BD3(::System::String* a1, ::System::Object* a2, ::UnityEngine::Object* a3, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_F21DB3F45DB64BD3_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_02F87D92F9D06185(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_02F87D92F9D06185_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Method_1_D380120471B30DB9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_D380120471B30DB9_OFFSET))(this);
	}

	::System::Void Method_1_25F90D4C940D48BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_25F90D4C940D48BE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_97D34FD4DCD84DBF(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_97D34FD4DCD84DBF_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Method_1_2ADD635F1EF482BC(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a4)
	{
		return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_2ADD635F1EF482BC_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_26A90F59AE6B4E37(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_26A90F59AE6B4E37_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Boolean Method_1_D74DCC727EDA1C0F(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_D74DCC727EDA1C0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9944A1908EF42E01(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_9944A1908EF42E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	static ::System::Boolean Method_1_37E8E75E32912EF7(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_37E8E75E32912EF7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2513FFAF64CB1740(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_2513FFAF64CB1740_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D92D9532E199C2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_4D92D9532E199C2E_OFFSET))(this);
	}

	::System::Void Method_1_2513FFAF64CB1740_1(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_2513FFAF64CB1740_1_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_FF16AFDAF5CD1E90(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a2)
	{
		return ((::System::Int32(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_FF16AFDAF5CD1E90_OFFSET))(a1, a2);
	}

	::System::Void Method_1_50224E0C20244ACB(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_METHOD_1_50224E0C20244ACB_OFFSET))(this, a1);
	}
};
