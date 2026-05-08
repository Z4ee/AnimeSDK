#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677CEA8C88AC78AB.h"
#include "unitysdk/Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_3_FFD0045B4597F294;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E65E055C82ED9E59_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x13DB3810)
#define CLASS_2_E65E055C82ED9E59_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13DB3380)
#define CLASS_2_E65E055C82ED9E59_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x13DB35A0)
#define CLASS_2_E65E055C82ED9E59__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB34F0)

inline static constexpr unsigned int Class_2_E65E055C82ED9E59_TypeDefinitionIndex = 45866;

class Class_2_E65E055C82ED9E59 : public ::Class_1_677CEA8C88AC78AB
{
public:
	::Class_3_FFD0045B4597F294* Field_2_6; // 0x80
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_0; // 0x88
	::System::Collections::Generic::List_1<::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC>* Field_2_3; // 0x90
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_5; // 0x98
	::System::Boolean Field_2_2; // 0xA0
	::System::Boolean Field_2_1; // 0xA1
	::UnityEngine::LayerMask Field_2_4; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65E055C82ED9E59__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65E055C82ED9E59_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65E055C82ED9E59_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E65E055C82ED9E59_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
