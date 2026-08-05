#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_57;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x1554D6D0)
#define CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1554D680)
#define CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1554D6C0)

inline static constexpr unsigned int Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex = 70158;

class Class_3_5F8DAA47ACDB7251___c : public ::System::Object
{
public:
	static ::Class_3_5F8DAA47ACDB7251___c** StaticGet___9()
	{
		return (::Class_3_5F8DAA47ACDB7251___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x47C80);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_57*>** StaticGet___9__452_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5F8DAA47ACDB7251___c_TypeDefinitionIndex)->GetStaticField(0x47C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_57*))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
