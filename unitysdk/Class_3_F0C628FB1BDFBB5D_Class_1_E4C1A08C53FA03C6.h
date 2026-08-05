#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116AD600)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_METHOD_1_26AB7891EF94EAD6_OFFSET UNITYSDK_OFFSET(0x116AD6A0)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x116AD5A0)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6__CTOR_OFFSET UNITYSDK_OFFSET(0x116AD690)

inline static constexpr unsigned int Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6_TypeDefinitionIndex = 63330;

class Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_ONVISITONE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_DISPOSE_OFFSET))(this);
	}

	::Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6* Method_1_26AB7891EF94EAD6()
	{
		return ((::Class_3_F0C628FB1BDFBB5D_Class_1_E4C1A08C53FA03C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_1_E4C1A08C53FA03C6_METHOD_1_26AB7891EF94EAD6_OFFSET))(this);
	}
};
