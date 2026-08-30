#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_681685FAADA1782B_Struct_2_6DFDCE2D3BB8044E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundsInt.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_348F6607ADBFC3FB_OFFSET UNITYSDK_OFFSET(0x1786CDD0)
#define CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_96E4292424C0D3B5_OFFSET UNITYSDK_OFFSET(0x1786A890)
#define CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17873AE0)
#define CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_DD5B791C4D61BAF3_OFFSET UNITYSDK_OFFSET(0x1786A970)
#define CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018__CTOR_OFFSET UNITYSDK_OFFSET(0x1786A830)

inline static constexpr unsigned int Class_1_681685FAADA1782B_Class_1_5C9211387FF6C018_TypeDefinitionIndex = 52062;

class Class_1_681685FAADA1782B_Class_1_5C9211387FF6C018 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PJCEPNKEDJO; // 0x10
	::System::Single MFDEGPMABFJ; // 0x18
	::System::Int32 DHHNPMOMLIF; // 0x1C
	::System::Single JKFKEJHIPFM; // 0x20
	::UnityEngine::BoundsInt IKNEGODHDGO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96E4292424C0D3B5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_96E4292424C0D3B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD5B791C4D61BAF3(::Class_1_681685FAADA1782B_Struct_2_6DFDCE2D3BB8044E a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_681685FAADA1782B_Struct_2_6DFDCE2D3BB8044E, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_DD5B791C4D61BAF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_348F6607ADBFC3FB(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_348F6607ADBFC3FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_681685FAADA1782B_CLASS_1_5C9211387FF6C018_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
