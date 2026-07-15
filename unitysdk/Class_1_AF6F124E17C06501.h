#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define CLASS_1_AF6F124E17C06501_METHOD_1_1A010C928AC92A68_OFFSET UNITYSDK_OFFSET(0x14BBCF20)
#define CLASS_1_AF6F124E17C06501_METHOD_1_3FA4CE7CF842B8D8_OFFSET UNITYSDK_OFFSET(0x14BBCB40)
#define CLASS_1_AF6F124E17C06501_METHOD_1_40F8548F21298F1D_OFFSET UNITYSDK_OFFSET(0x14BBCCF0)
#define CLASS_1_AF6F124E17C06501_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x14BBCEC0)
#define CLASS_1_AF6F124E17C06501_METHOD_1_F06595BF7728A1A0_OFFSET UNITYSDK_OFFSET(0x14BBCC70)
#define CLASS_1_AF6F124E17C06501__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BBCF70)

inline static constexpr unsigned int Class_1_AF6F124E17C06501_TypeDefinitionIndex = 6704;

class Class_1_AF6F124E17C06501 : public ::System::Object
{
public:
	static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_Field_1_0()
	{
		return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF6F124E17C06501_TypeDefinitionIndex)->GetStaticField(0x4B30);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AF6F124E17C06501_TypeDefinitionIndex)->GetStaticField(0x4B38);
	}
	// static const ::System::Int32 Field_1_2 = 0x65; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7FEFFFFD; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501__CCTOR_OFFSET))();
	}

	static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* Method_1_3FA4CE7CF842B8D8()
	{
		return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501_METHOD_1_3FA4CE7CF842B8D8_OFFSET))();
	}

	static ::System::Boolean Method_1_F06595BF7728A1A0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501_METHOD_1_F06595BF7728A1A0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_40F8548F21298F1D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501_METHOD_1_40F8548F21298F1D_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Int32 Method_1_1A010C928AC92A68(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF6F124E17C06501_METHOD_1_1A010C928AC92A68_OFFSET))(a1);
	}
};
