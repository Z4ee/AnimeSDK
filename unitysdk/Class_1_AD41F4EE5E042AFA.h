#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_851;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AD41F4EE5E042AFA_METHOD_1_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x1150A3C0)
#define CLASS_1_AD41F4EE5E042AFA_METHOD_1_DF1E9043A23F69A0_OFFSET UNITYSDK_OFFSET(0x1150A480)
#define CLASS_1_AD41F4EE5E042AFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1150A520)

inline static constexpr unsigned int Class_1_AD41F4EE5E042AFA_TypeDefinitionIndex = 58811;

class Class_1_AD41F4EE5E042AFA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_851*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD41F4EE5E042AFA__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_851* Method_1_30BE3523CF9B739E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_851*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD41F4EE5E042AFA_METHOD_1_30BE3523CF9B739E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF1E9043A23F69A0(::System::String* a1, ::Class_0_16E4307DCC419505_851* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_851*))((::PBYTE)hIl2Cpp + CLASS_1_AD41F4EE5E042AFA_METHOD_1_DF1E9043A23F69A0_OFFSET))(this, a1, a2);
	}
};
