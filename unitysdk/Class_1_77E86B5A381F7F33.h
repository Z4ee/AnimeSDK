#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define CLASS_1_77E86B5A381F7F33_METHOD_1_3784D4F9FF83A5F2_OFFSET UNITYSDK_OFFSET(0x1923F210)
#define CLASS_1_77E86B5A381F7F33_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x1923F070)
#define CLASS_1_77E86B5A381F7F33_METHOD_1_E7CEC87B97975625_OFFSET UNITYSDK_OFFSET(0x1923F1E0)
#define CLASS_1_77E86B5A381F7F33__CTOR_OFFSET UNITYSDK_OFFSET(0x1923F140)

inline static constexpr unsigned int Class_1_77E86B5A381F7F33_TypeDefinitionIndex = 39674;

class Class_1_77E86B5A381F7F33 : public ::System::Object
{
public:
	static ::Class_1_77E86B5A381F7F33** StaticGet_Field_1_0()
	{
		return (::Class_1_77E86B5A381F7F33**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E86B5A381F7F33_TypeDefinitionIndex)->GetStaticField(0x1DE70);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::Google::Protobuf::IMessage*>*>* Field_1_2; // 0x10
	::Class_1_64C1E63642C4A2DF<::RPG::Client::NetPacket*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77E86B5A381F7F33__CTOR_OFFSET))(this);
	}

	static ::Class_1_77E86B5A381F7F33* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_77E86B5A381F7F33*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E86B5A381F7F33_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::Client::NetPacket* Method_1_E7CEC87B97975625()
	{
		return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77E86B5A381F7F33_METHOD_1_E7CEC87B97975625_OFFSET))(this);
	}

	::System::Void Method_1_3784D4F9FF83A5F2(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_77E86B5A381F7F33_METHOD_1_3784D4F9FF83A5F2_OFFSET))(this, a1);
	}
};
