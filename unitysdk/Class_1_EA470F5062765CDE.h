#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EA470F5062765CDE_METHOD_1_6856F9F9BA5B38EF_OFFSET UNITYSDK_OFFSET(0x1A762600)
#define CLASS_1_EA470F5062765CDE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A7627E0)
#define CLASS_1_EA470F5062765CDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A762870)

inline static constexpr unsigned int Class_1_EA470F5062765CDE_TypeDefinitionIndex = 49687;

class Class_1_EA470F5062765CDE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LACBLLBHPIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA470F5062765CDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6856F9F9BA5B38EF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA470F5062765CDE_METHOD_1_6856F9F9BA5B38EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA470F5062765CDE_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
