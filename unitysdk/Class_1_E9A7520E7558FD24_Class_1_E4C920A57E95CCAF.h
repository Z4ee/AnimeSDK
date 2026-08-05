#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E9A7520E7558FD24_CLASS_1_E4C920A57E95CCAF_METHOD_1_30356801260988B2_OFFSET UNITYSDK_OFFSET(0x15572DD0)
#define CLASS_1_E9A7520E7558FD24_CLASS_1_E4C920A57E95CCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x15572DC0)

inline static constexpr unsigned int Class_1_E9A7520E7558FD24_Class_1_E4C920A57E95CCAF_TypeDefinitionIndex = 54688;

class Class_1_E9A7520E7558FD24_Class_1_E4C920A57E95CCAF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_6; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Single Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_CLASS_1_E4C920A57E95CCAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30356801260988B2(::Foundation::MultiVersionDiffConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E9A7520E7558FD24_CLASS_1_E4C920A57E95CCAF_METHOD_1_30356801260988B2_OFFSET))(this, a1);
	}
};
