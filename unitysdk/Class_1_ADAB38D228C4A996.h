#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ADAB38D228C4A996_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x131627D0)
#define CLASS_1_ADAB38D228C4A996_METHOD_1_AA2BD39AD9E13B05_OFFSET UNITYSDK_OFFSET(0x13162B60)
#define CLASS_1_ADAB38D228C4A996_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13162780)

inline static constexpr unsigned int Class_1_ADAB38D228C4A996_TypeDefinitionIndex = 64864;

class Class_1_ADAB38D228C4A996 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADAB38D228C4A996_TypeDefinitionIndex)->GetStaticField(0x10200);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADAB38D228C4A996_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADAB38D228C4A996_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_AA2BD39AD9E13B05(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + CLASS_1_ADAB38D228C4A996_METHOD_1_AA2BD39AD9E13B05_OFFSET))(a1);
	}
};
