#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3221F717AA0FB040_Struct_2_68E92B447D4061AC.h"
#include "unitysdk/Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F.h"
#include "unitysdk/Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3221F717AA0FB040_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1B32D780)
#define CLASS_1_3221F717AA0FB040_METHOD_1_221BEFE330A9B6A9_OFFSET UNITYSDK_OFFSET(0x1B32DF80)
#define CLASS_1_3221F717AA0FB040_METHOD_1_5140803F2D9E57C3_OFFSET UNITYSDK_OFFSET(0x1B32DD70)
#define CLASS_1_3221F717AA0FB040_METHOD_1_531AE6C27EA2354D_OFFSET UNITYSDK_OFFSET(0x1B32D520)
#define CLASS_1_3221F717AA0FB040_METHOD_1_58C3E1E91CA4452F_OFFSET UNITYSDK_OFFSET(0x1B32D910)
#define CLASS_1_3221F717AA0FB040_METHOD_1_9E94FD5F0D776C04_OFFSET UNITYSDK_OFFSET(0x1B32DC30)
#define CLASS_1_3221F717AA0FB040_METHOD_1_A300506950B88251_OFFSET UNITYSDK_OFFSET(0x1B32D4A0)
#define CLASS_1_3221F717AA0FB040_METHOD_1_B6B4246E37198CC6_OFFSET UNITYSDK_OFFSET(0x1B32BF60)
#define CLASS_1_3221F717AA0FB040_METHOD_1_BFE924ED5B3FB797_OFFSET UNITYSDK_OFFSET(0x1B32CCE0)
#define CLASS_1_3221F717AA0FB040_METHOD_1_C50A2293958CA940_1_OFFSET UNITYSDK_OFFSET(0x1B32D6F0)
#define CLASS_1_3221F717AA0FB040_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1B32BE70)
#define CLASS_1_3221F717AA0FB040_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1B32EDF0)
#define CLASS_1_3221F717AA0FB040_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B32D900)
#define CLASS_1_3221F717AA0FB040__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B32BDE0)
#define CLASS_1_3221F717AA0FB040__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32BDD0)

inline static constexpr unsigned int Class_1_3221F717AA0FB040_TypeDefinitionIndex = 51458;

class Class_1_3221F717AA0FB040 : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE>** StaticGet_Field_1_12()
	{
		return (::System::Comparison_1<::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3221F717AA0FB040_TypeDefinitionIndex)->GetStaticField(0x4B990);
	}
	static ::System::Collections::Generic::List_1<::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::List_1<::Class_1_3221F717AA0FB040_Struct_2_BE1226F9F46C02DE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3221F717AA0FB040_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::MoleMole::SceneSoundPortalData*>* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* Field_1_6; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_15; // 0x20
	::Il2CppArray<::System::Boolean>* Field_1_8; // 0x28
	::Il2CppArray<::Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* Field_1_4; // 0x38
	::Il2CppArray<::System::Int32>* Field_1_10; // 0x40
	::Il2CppArray<::System::Single>* Field_1_11; // 0x48
	::System::Int32 Field_1_0; // 0x50
	::System::Int32 Field_1_14; // 0x54
	::System::Int32 Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6B4246E37198CC6(::System::Int32 a1, ::System::Int32 a2, ::Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F&))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_B6B4246E37198CC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BFE924ED5B3FB797(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>*))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_BFE924ED5B3FB797_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A300506950B88251(::MoleMole::SceneSoundPortalData* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::SceneSoundPortalData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_A300506950B88251_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50A2293958CA940_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_C50A2293958CA940_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_531AE6C27EA2354D(::MoleMole::SceneSoundPolygonData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_531AE6C27EA2354D_OFFSET))(this, a1);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_58C3E1E91CA4452F(::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::SceneSoundPolygonData*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::MoleMole::SceneSoundPortalData*>>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_58C3E1E91CA4452F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9E94FD5F0D776C04(::MoleMole::SceneSoundPolygonData* a1, ::MoleMole::SceneSoundPolygonData* a2, ::Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::MoleMole::SceneSoundPolygonData*, ::Class_1_3221F717AA0FB040_Struct_2_8BDCBE396B3B1C7F&))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_9E94FD5F0D776C04_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_5140803F2D9E57C3(::Class_1_3221F717AA0FB040_Struct_2_68E92B447D4061AC& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3221F717AA0FB040_Struct_2_68E92B447D4061AC&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_5140803F2D9E57C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_221BEFE330A9B6A9(::MoleMole::SceneSoundPolygonData* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SceneSoundPolygonData* a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::Class_1_3221F717AA0FB040_Struct_2_68E92B447D4061AC>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*, ::UnityEngine::Vector3, ::MoleMole::SceneSoundPolygonData*, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_3221F717AA0FB040_Struct_2_68E92B447D4061AC>*))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_221BEFE330A9B6A9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3221F717AA0FB040_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
