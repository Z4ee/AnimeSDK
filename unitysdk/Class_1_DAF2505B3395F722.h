#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8111D94208AF9330;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DAF2505B3395F722_METHOD_1_00644FC785788876_OFFSET UNITYSDK_OFFSET(0x13E33A40)
#define CLASS_1_DAF2505B3395F722_METHOD_1_38133A7E5DD02F6E_OFFSET UNITYSDK_OFFSET(0x13E34690)
#define CLASS_1_DAF2505B3395F722_METHOD_1_428F692EB3B23F72_OFFSET UNITYSDK_OFFSET(0x13E34500)
#define CLASS_1_DAF2505B3395F722_METHOD_1_65EED24186C2800A_OFFSET UNITYSDK_OFFSET(0x13E34100)
#define CLASS_1_DAF2505B3395F722_METHOD_1_83F0F7F90884B24C_OFFSET UNITYSDK_OFFSET(0x13E33700)
#define CLASS_1_DAF2505B3395F722_METHOD_1_AA748774B3766540_OFFSET UNITYSDK_OFFSET(0x13E33AE0)
#define CLASS_1_DAF2505B3395F722_METHOD_1_E6446EC3D62F3366_OFFSET UNITYSDK_OFFSET(0x13E33ED0)

inline static constexpr unsigned int Class_1_DAF2505B3395F722_TypeDefinitionIndex = 73228;

class Class_1_DAF2505B3395F722 : public ::System::Object
{
public:
	static ::System::Void Method_1_83F0F7F90884B24C(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_83F0F7F90884B24C_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_00644FC785788876(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_00644FC785788876_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_AA748774B3766540(::System::UInt32 a1, ::Class_1_8111D94208AF9330* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::Class_1_8111D94208AF9330*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_AA748774B3766540_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::EntityHandle Method_1_E6446EC3D62F3366(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_E6446EC3D62F3366_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_65EED24186C2800A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_65EED24186C2800A_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_428F692EB3B23F72()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_428F692EB3B23F72_OFFSET))();
	}

	static ::System::Void Method_1_38133A7E5DD02F6E(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_METHOD_1_38133A7E5DD02F6E_OFFSET))(a1, a2, a3);
	}
};
