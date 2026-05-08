#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"

class Class_3_7F858A093DE88C2B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_673462C4273FC17A_METHOD_3_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x14798370)
#define CLASS_3_673462C4273FC17A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x147983E0)
#define CLASS_3_673462C4273FC17A__CTOR_OFFSET UNITYSDK_OFFSET(0x14798250)

inline static constexpr unsigned int Class_3_673462C4273FC17A_TypeDefinitionIndex = 52237;

class Class_3_673462C4273FC17A : public ::Class_2_BCA32DB678A03168
{
public:
	::Class_3_7F858A093DE88C2B* Field_3_1; // 0x38
	::MoleMole::Config::TimePeriodType Field_3_0; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_673462C4273FC17A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_673462C4273FC17A_METHOD_3_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_673462C4273FC17A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
