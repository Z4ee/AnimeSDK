#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_2_167BB37617B940E3;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_E9CB61782B1950E4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF218DD0)
#define CLASS_3_E9CB61782B1950E4_METHOD_3_3EEEA77014B05956_OFFSET UNITYSDK_OFFSET(0xF218EF0)
#define CLASS_3_E9CB61782B1950E4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF218FA0)
#define CLASS_3_E9CB61782B1950E4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF218AF0)
#define CLASS_3_E9CB61782B1950E4__CCTOR_OFFSET UNITYSDK_OFFSET(0xF218E20)
#define CLASS_3_E9CB61782B1950E4__CTOR_OFFSET UNITYSDK_OFFSET(0xF218EA0)

inline static constexpr unsigned int Class_3_E9CB61782B1950E4_TypeDefinitionIndex = 50834;

class Class_3_E9CB61782B1950E4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x52; // 0x0
	::System::Collections::Generic::List_1<::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC>* Field_3_3; // 0x48
	::Class_2_167BB37617B940E3* Field_3_6; // 0x50
	::Il2CppArray<::UnityEngine::Collider*>* Field_3_0; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_5; // 0x60
	::System::Boolean Field_3_1; // 0x68
	::System::Boolean Field_3_2; // 0x69
	::UnityEngine::LayerMask Field_3_4; // 0x6C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_E9CB61782B1950E4* Method_3_3EEEA77014B05956()
	{
		return ((::Class_3_E9CB61782B1950E4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4_METHOD_3_3EEEA77014B05956_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
