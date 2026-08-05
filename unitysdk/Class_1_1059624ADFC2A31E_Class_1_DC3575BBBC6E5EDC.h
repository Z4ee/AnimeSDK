#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x12B960D0)
#define CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12B960E0)
#define CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x12B95FB0)
#define CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B96050)

inline static constexpr unsigned int Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC_TypeDefinitionIndex = 60354;

class Class_1_1059624ADFC2A31E_Class_1_DC3575BBBC6E5EDC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_ONVISITONE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1059624ADFC2A31E_CLASS_1_DC3575BBBC6E5EDC_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
