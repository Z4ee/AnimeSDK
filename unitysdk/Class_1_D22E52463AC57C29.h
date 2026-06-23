#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35504EF8BDEEADD3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
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

#define CLASS_1_D22E52463AC57C29_METHOD_1_02F87D92F9D06185_OFFSET UNITYSDK_OFFSET(0xE7FBCA0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_1B14917828C33F72_OFFSET UNITYSDK_OFFSET(0xE7FB420)
#define CLASS_1_D22E52463AC57C29_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xE7FC5B0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_2513FFAF64CB1740_1_OFFSET UNITYSDK_OFFSET(0xE7FBF10)
#define CLASS_1_D22E52463AC57C29_METHOD_1_2513FFAF64CB1740_OFFSET UNITYSDK_OFFSET(0xE7FB8E0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_2ADD635F1EF482BC_OFFSET UNITYSDK_OFFSET(0xE7F8AD0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_47C38943516FAAD3_OFFSET UNITYSDK_OFFSET(0xE7F8E80)
#define CLASS_1_D22E52463AC57C29_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xE7FC200)
#define CLASS_1_D22E52463AC57C29_METHOD_1_53E39BCCCF9BFE6E_OFFSET UNITYSDK_OFFSET(0xE7FC070)
#define CLASS_1_D22E52463AC57C29_METHOD_1_7ACA77EC51F5DC5C_OFFSET UNITYSDK_OFFSET(0xE7FCC50)
#define CLASS_1_D22E52463AC57C29_METHOD_1_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0xE7F9080)
#define CLASS_1_D22E52463AC57C29_METHOD_1_97D34FD4DCD84DBF_OFFSET UNITYSDK_OFFSET(0xE7F8860)
#define CLASS_1_D22E52463AC57C29_METHOD_1_9BAB385F8658C2AD_OFFSET UNITYSDK_OFFSET(0xE7FBA40)
#define CLASS_1_D22E52463AC57C29_METHOD_1_C4EAAAE05F20251C_OFFSET UNITYSDK_OFFSET(0xE7F85D0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_D380120471B30DB9_OFFSET UNITYSDK_OFFSET(0xE7F85C0)
#define CLASS_1_D22E52463AC57C29_METHOD_1_EE96F7355EDA2E10_OFFSET UNITYSDK_OFFSET(0xE7FB490)
#define CLASS_1_D22E52463AC57C29_METHOD_1_FF16AFDAF5CD1E90_OFFSET UNITYSDK_OFFSET(0xE7FB620)
#define CLASS_1_D22E52463AC57C29__CTOR_OFFSET UNITYSDK_OFFSET(0xE7F8360)

inline static constexpr unsigned int Class_1_D22E52463AC57C29_TypeDefinitionIndex = 84389;

class Class_1_D22E52463AC57C29 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMeta*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_35504EF8BDEEADD3>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Spline::NAPPointMetaPluginBase*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_280* Field_1_0; // 0x38
	::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*>* Field_1_5; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Method_1_D380120471B30DB9()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_D380120471B30DB9_OFFSET))(this);
	}

	static ::System::Boolean Method_1_C4EAAAE05F20251C(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_C4EAAAE05F20251C_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>* Method_1_2ADD635F1EF482BC(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a4)
	{
		return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvyMetadataBase_Point*>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_2ADD635F1EF482BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_47C38943516FAAD3(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_47C38943516FAAD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EF378E5C246C05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_92EF378E5C246C05_OFFSET))(this);
	}

	::System::Void Method_1_1B14917828C33F72(::System::String* a1, ::System::Object* a2, ::UnityEngine::Object* a3, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_1B14917828C33F72_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_FF16AFDAF5CD1E90(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a2)
	{
		return ((::System::Int32(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_FF16AFDAF5CD1E90_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2513FFAF64CB1740(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_2513FFAF64CB1740_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BAB385F8658C2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_9BAB385F8658C2AD_OFFSET))(this);
	}

	static ::System::Boolean Method_1_02F87D92F9D06185(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_02F87D92F9D06185_OFFSET))(a1, a2);
	}

	::System::Void Method_1_2513FFAF64CB1740_1(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_2513FFAF64CB1740_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53E39BCCCF9BFE6E(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_53E39BCCCF9BFE6E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EE96F7355EDA2E10(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_EE96F7355EDA2E10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	static ::System::Boolean Method_1_7ACA77EC51F5DC5C(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Point*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_7ACA77EC51F5DC5C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_97D34FD4DCD84DBF(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvyMetadataBase_Zone*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D22E52463AC57C29_METHOD_1_97D34FD4DCD84DBF_OFFSET))(a1, a2);
	}
};
