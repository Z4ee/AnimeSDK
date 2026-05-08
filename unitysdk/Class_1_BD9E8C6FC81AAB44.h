#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BD9E8C6FC81AAB44_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10042330)
#define CLASS_1_BD9E8C6FC81AAB44_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x10042280)
#define CLASS_1_BD9E8C6FC81AAB44_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x1007CE70)
#define CLASS_1_BD9E8C6FC81AAB44__CTOR_OFFSET UNITYSDK_OFFSET(0x1007CE60)

inline static constexpr unsigned int Class_1_BD9E8C6FC81AAB44_TypeDefinitionIndex = 50229;

class Class_1_BD9E8C6FC81AAB44 : public ::System::Object
{
public:
	static ::Class_1_BD9E8C6FC81AAB44** StaticGet_Field_1_0()
	{
		return (::Class_1_BD9E8C6FC81AAB44**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD9E8C6FC81AAB44_TypeDefinitionIndex)->GetStaticField(0x2BC80);
	}
	// static const ::System::UInt16 Field_1_1 = 0x0; // 0x0
	// static const ::System::UInt16 Field_1_2 = 0x1; // 0x0
	// static const ::System::UInt16 Field_1_3 = 0x2; // 0x0
	// static const ::System::UInt16 Field_1_4 = 0x3E9; // 0x0
	// static const ::System::UInt16 Field_1_5 = 0x3EA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Type*>* Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	static ::Class_1_BD9E8C6FC81AAB44* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_BD9E8C6FC81AAB44*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
