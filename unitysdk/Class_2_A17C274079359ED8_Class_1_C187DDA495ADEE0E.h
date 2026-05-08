#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E_METHOD_1_82125FD1B8FE1611_OFFSET UNITYSDK_OFFSET(0x1365FC30)
#define CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x1365FC20)
#define CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1365FC10)

inline static constexpr unsigned int Class_2_A17C274079359ED8_Class_1_C187DDA495ADEE0E_TypeDefinitionIndex = 46318;

class Class_2_A17C274079359ED8_Class_1_C187DDA495ADEE0E : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_82125FD1B8FE1611(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A17C274079359ED8_CLASS_1_C187DDA495ADEE0E_METHOD_1_82125FD1B8FE1611_OFFSET))(this, a1);
	}
};
