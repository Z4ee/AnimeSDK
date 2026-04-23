#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_55F073C52EA3E1CD_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x11BBEDD0)
#define CLASS_1_55F073C52EA3E1CD_METHOD_1_A05FF636D7578814_OFFSET UNITYSDK_OFFSET(0x11BBED00)
#define CLASS_1_55F073C52EA3E1CD_METHOD_1_CC9D120E2C6D6E80_OFFSET UNITYSDK_OFFSET(0x11BBEC20)
#define CLASS_1_55F073C52EA3E1CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BBF000)

inline static constexpr unsigned int Class_1_55F073C52EA3E1CD_TypeDefinitionIndex = 45872;

class Class_1_55F073C52EA3E1CD : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_322*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_322*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55F073C52EA3E1CD_TypeDefinitionIndex)->GetStaticField(0x2E8D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55F073C52EA3E1CD__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CC9D120E2C6D6E80(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_55F073C52EA3E1CD_METHOD_1_CC9D120E2C6D6E80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A05FF636D7578814(::System::Action* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_55F073C52EA3E1CD_METHOD_1_A05FF636D7578814_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55F073C52EA3E1CD_METHOD_1_2C825E716CE9F2F9_OFFSET))();
	}
};
