#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15DE77E3D7DAA1BE_METHOD_1_1901CC7D1C5FA45C_OFFSET UNITYSDK_OFFSET(0x113E1520)
#define CLASS_1_15DE77E3D7DAA1BE_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x113E1190)
#define CLASS_1_15DE77E3D7DAA1BE_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x113E1140)

inline static constexpr unsigned int Class_1_15DE77E3D7DAA1BE_TypeDefinitionIndex = 41962;

class Class_1_15DE77E3D7DAA1BE : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15DE77E3D7DAA1BE_TypeDefinitionIndex)->GetStaticField(0xF480);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15DE77E3D7DAA1BE_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_1901CC7D1C5FA45C(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + CLASS_1_15DE77E3D7DAA1BE_METHOD_1_1901CC7D1C5FA45C_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15DE77E3D7DAA1BE_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}
};
