#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_EDCB547FB9E62C61_METHOD_1_1C050DFFF70DA400_OFFSET UNITYSDK_OFFSET(0x1020E8D0)
#define CLASS_1_EDCB547FB9E62C61_METHOD_1_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x1020E560)
#define CLASS_1_EDCB547FB9E62C61_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x1020E880)
#define CLASS_1_EDCB547FB9E62C61_METHOD_1_E67DAAC32E1878DD_OFFSET UNITYSDK_OFFSET(0x1020DEA0)
#define CLASS_1_EDCB547FB9E62C61_METHOD_1_E77707C07F29864A_OFFSET UNITYSDK_OFFSET(0x1020DE20)
#define CLASS_1_EDCB547FB9E62C61__CTOR_OFFSET UNITYSDK_OFFSET(0x1020DDC0)

inline static constexpr unsigned int Class_1_EDCB547FB9E62C61_TypeDefinitionIndex = 46099;

class Class_1_EDCB547FB9E62C61 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_6; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::Boolean Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E77707C07F29864A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61_METHOD_1_E77707C07F29864A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61_METHOD_1_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C050DFFF70DA400(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61_METHOD_1_1C050DFFF70DA400_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E67DAAC32E1878DD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDCB547FB9E62C61_METHOD_1_E67DAAC32E1878DD_OFFSET))(this, a1);
	}
};
