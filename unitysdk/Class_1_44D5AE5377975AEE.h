#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1104;
class Class_1_4BC03BAAC61C4531;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44D5AE5377975AEE_GET_EDGES_OFFSET UNITYSDK_OFFSET(0xA72FEF0)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xA730140)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_5ED506072C7AB3E7_OFFSET UNITYSDK_OFFSET(0xA7300C0)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA730260)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_C274F06B92E13D31_OFFSET UNITYSDK_OFFSET(0xA72FF00)
#define CLASS_1_44D5AE5377975AEE_METHOD_1_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0xA7302E0)
#define CLASS_1_44D5AE5377975AEE__CTOR_OFFSET UNITYSDK_OFFSET(0xA730220)

inline static constexpr unsigned int Class_1_44D5AE5377975AEE_TypeDefinitionIndex = 69614;

class Class_1_44D5AE5377975AEE : public ::System::Object
{
public:
	::Class_1_4BC03BAAC61C4531* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1104*>* _Edges_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1104*>* get_Edges()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1104*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_GET_EDGES_OFFSET))(this);
	}

	static ::Class_1_44D5AE5377975AEE* Method_1_C274F06B92E13D31(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_C274F06B92E13D31_OFFSET))(a1, a2);
	}

	static ::Class_1_44D5AE5377975AEE* Method_1_5ED506072C7AB3E7(::Class_1_4BC03BAAC61C4531* a1)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::Class_1_4BC03BAAC61C4531*))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_5ED506072C7AB3E7_OFFSET))(a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_1104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1104*))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Single Method_1_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D5AE5377975AEE_METHOD_1_DAC9219D09D338F5_OFFSET))(this);
	}
};
