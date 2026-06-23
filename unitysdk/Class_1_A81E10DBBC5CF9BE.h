#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A81E10DBBC5CF9BE_Struct_2_68E92B447D4061AC.h"
#include "unitysdk/Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F.h"
#include "unitysdk/Class_1_A81E10DBBC5CF9BE_Struct_2_BE1226F9F46C02DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1334ABD0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_5140803F2D9E57C3_OFFSET UNITYSDK_OFFSET(0x1334BEC0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_531AE6C27EA2354D_OFFSET UNITYSDK_OFFSET(0x1334BBB0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_68B303FD1CE5A259_OFFSET UNITYSDK_OFFSET(0x1334AD50)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_6E53ECCBC7CBCF17_OFFSET UNITYSDK_OFFSET(0x1334BD80)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_8C7B891EE635C5AF_OFFSET UNITYSDK_OFFSET(0x1334C1F0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_8F5C93768F39E9F4_OFFSET UNITYSDK_OFFSET(0x1334D100)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_A300506950B88251_OFFSET UNITYSDK_OFFSET(0x1334C160)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_BFE924ED5B3FB797_OFFSET UNITYSDK_OFFSET(0x1334D3F0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C50A2293958CA940_1_OFFSET UNITYSDK_OFFSET(0x1334D010)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1334C0D0)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1334D000)
#define CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1334C1E0)
#define CLASS_1_A81E10DBBC5CF9BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1334AB40)
#define CLASS_1_A81E10DBBC5CF9BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1334AB30)

inline static constexpr unsigned int Class_1_A81E10DBBC5CF9BE_TypeDefinitionIndex = 54042;

class Class_1_A81E10DBBC5CF9BE : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_BE1226F9F46C02DE>** StaticGet_Field_1_12()
	{
		return (::System::Comparison_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_BE1226F9F46C02DE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A81E10DBBC5CF9BE_TypeDefinitionIndex)->GetStaticField(0x473B0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_BE1226F9F46C02DE>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_BE1226F9F46C02DE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A81E10DBBC5CF9BE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_1_2; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_6; // 0x18
	::Il2CppArray<::MoleMole::SceneSoundPortalData*>* Field_1_7; // 0x20
	::Il2CppArray<::System::Single>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* Field_1_4; // 0x30
	::Il2CppArray<::System::Int32>* Field_1_9; // 0x38
	::Il2CppArray<::Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F>* Field_1_3; // 0x40
	::Il2CppArray<::System::Boolean>* Field_1_8; // 0x48
	::System::Int32 Field_1_1; // 0x50
	::System::Int32 Field_1_10; // 0x54
	::System::Int32 Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_68B303FD1CE5A259(::MoleMole::SceneSoundPolygonData* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SceneSoundPolygonData* a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_68E92B447D4061AC>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::UnityEngine::Vector3, ::MoleMole::SceneSoundPolygonData*, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_A81E10DBBC5CF9BE_Struct_2_68E92B447D4061AC>*))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_68B303FD1CE5A259_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A300506950B88251(::MoleMole::SceneSoundPortalData* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::SceneSoundPortalData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_A300506950B88251_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E53ECCBC7CBCF17(::MoleMole::SceneSoundPolygonData* a1, ::MoleMole::SceneSoundPolygonData* a2, ::Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::MoleMole::SceneSoundPolygonData*, ::Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F&))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_6E53ECCBC7CBCF17_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_8C7B891EE635C5AF(::System::Int32 a1, ::System::Int32 a2, ::Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_A81E10DBBC5CF9BE_Struct_2_8BDCBE396B3B1C7F&))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_8C7B891EE635C5AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_C50A2293958CA940_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_531AE6C27EA2354D(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_531AE6C27EA2354D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F5C93768F39E9F4(::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_8F5C93768F39E9F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BFE924ED5B3FB797(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_BFE924ED5B3FB797_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5140803F2D9E57C3(::Class_1_A81E10DBBC5CF9BE_Struct_2_68E92B447D4061AC& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A81E10DBBC5CF9BE_Struct_2_68E92B447D4061AC&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A81E10DBBC5CF9BE_METHOD_1_5140803F2D9E57C3_OFFSET))(this, a1, a2, a3);
	}
};
