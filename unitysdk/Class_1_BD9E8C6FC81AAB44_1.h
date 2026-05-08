#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x107BA630)
#define CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x107BA8F0)
#define CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0x107BA760)
#define CLASS_1_BD9E8C6FC81AAB44_1__CTOR_OFFSET UNITYSDK_OFFSET(0x107BA620)

inline static constexpr unsigned int Class_1_BD9E8C6FC81AAB44_1_TypeDefinitionIndex = 54728;

class Class_1_BD9E8C6FC81AAB44_1 : public ::System::Object
{
public:
	static ::Class_1_BD9E8C6FC81AAB44_1** StaticGet_Field_1_0()
	{
		return (::Class_1_BD9E8C6FC81AAB44_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD9E8C6FC81AAB44_1_TypeDefinitionIndex)->GetStaticField(0x33820);
	}
	// static const ::System::UInt16 Field_1_1 = 0x0; // 0x0
	// static const ::System::UInt16 Field_1_2 = 0x1; // 0x0
	// static const ::System::UInt16 Field_1_3 = 0x2; // 0x0
	// static const ::System::UInt16 Field_1_4 = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Type*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>* Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	static ::Class_1_BD9E8C6FC81AAB44_1* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_BD9E8C6FC81AAB44_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD9E8C6FC81AAB44_1_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
