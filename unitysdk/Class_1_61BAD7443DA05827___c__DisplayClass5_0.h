#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_61BAD7443DA05827___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25A700)
#define CLASS_1_61BAD7443DA05827___C__DISPLAYCLASS5_0___FILTERCATVALUEMAPBYEXTREM_B__0_OFFSET UNITYSDK_OFFSET(0x1B25D370)

inline static constexpr unsigned int Class_1_61BAD7443DA05827___c__DisplayClass5_0_TypeDefinitionIndex = 36653;

class Class_1_61BAD7443DA05827___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::UInt32 extremValue; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FilterCatValueMapByExtrem_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_61BAD7443DA05827___C__DISPLAYCLASS5_0___FILTERCATVALUEMAPBYEXTREM_B__0_OFFSET))(this, a1);
	}
};
