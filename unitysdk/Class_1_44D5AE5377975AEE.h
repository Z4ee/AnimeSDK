#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1054;
class Class_1_BE0E97EFC15B9DBB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44D5AE5377975AEE_GET_EDGES_OFFSET UNITYSDK_OFFSET(0xC0BB7F0)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_5ED506072C7AB3E7_OFFSET UNITYSDK_OFFSET(0xC0BB9C0)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0xC0BBA40)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_C274F06B92E13D31_OFFSET UNITYSDK_OFFSET(0xC0BB800)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0xC0BBB60)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xC0BBB00)
#define CLASS_1_44D5AE5377975AEE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0BBAC0)

inline static constexpr unsigned int Class_1_44D5AE5377975AEE_TypeDefinitionIndex = 68802;

class Class_1_44D5AE5377975AEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1054*>* _Edges_k__BackingField; // 0x10
	::Class_1_BE0E97EFC15B9DBB* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1054*>* get_Edges()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1054*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_GET_EDGES_OFFSET))(this);
	}

	static ::Class_1_44D5AE5377975AEE* Method_1_C274F06B92E13D31(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_C274F06B92E13D31_OFFSET))(a1, a2);
	}

	static ::Class_1_44D5AE5377975AEE* Method_1_5ED506072C7AB3E7(::Class_1_BE0E97EFC15B9DBB* a1)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::Class_1_BE0E97EFC15B9DBB*))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_5ED506072C7AB3E7_OFFSET))(a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_1054* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1054*))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}
};
