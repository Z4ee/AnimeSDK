#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_691;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F7D3BAFD8C03B69_METHOD_1_39410AAA536323DB_OFFSET UNITYSDK_OFFSET(0x10668B50)
#define CLASS_1_8F7D3BAFD8C03B69_METHOD_1_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x10668AF0)
#define CLASS_1_8F7D3BAFD8C03B69__CTOR_OFFSET UNITYSDK_OFFSET(0x10668AE0)

inline static constexpr unsigned int Class_1_8F7D3BAFD8C03B69_TypeDefinitionIndex = 54628;

class Class_1_8F7D3BAFD8C03B69 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_691*>* Field_1_0; // 0x10
	::Enum_3_63BCB6C405BA8A1D_1 Field_1_1; // 0x18

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1))((::PBYTE)hIl2Cpp + CLASS_1_8F7D3BAFD8C03B69__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_691*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_691*>*))((::PBYTE)hIl2Cpp + CLASS_1_8F7D3BAFD8C03B69_METHOD_1_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_1_39410AAA536323DB(::Class_0_16E4307DCC419505_691* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_691*))((::PBYTE)hIl2Cpp + CLASS_1_8F7D3BAFD8C03B69_METHOD_1_39410AAA536323DB_OFFSET))(this, a1);
	}
};
