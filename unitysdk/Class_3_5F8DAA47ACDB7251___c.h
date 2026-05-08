#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_306;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x121E3EF0)
#define CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x121E3EA0)
#define CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET UNITYSDK_OFFSET(0x121E3EE0)

inline static constexpr unsigned int Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex = 42856;

class Class_3_5F8DAA47ACDB7251___c : public ::System::Object
{
public:
	static ::Class_3_5F8DAA47ACDB7251___c** StaticGet___9()
	{
		return (::Class_3_5F8DAA47ACDB7251___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x31520);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_306*>** StaticGet___9__456_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_306*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x31528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_306* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_306*))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
