#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Object.h"

class Class_1_76DBF6C211384509_Class_1_92BAA7CCF5A35C9A_9;
namespace MoleMole { template <typename T> class ConfigLazyLoadItem_1; }
namespace MoleMole::Config { class ConfigSubSystemSettingBase; }

#define CLASS_1_76DBF6C211384509_CLASS_1_C4C7561CCD04B9E3_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x13B6E310)
#define CLASS_1_76DBF6C211384509_CLASS_1_C4C7561CCD04B9E3__CTOR_OFFSET UNITYSDK_OFFSET(0x13B6E300)

inline static constexpr unsigned int Class_1_76DBF6C211384509_Class_1_C4C7561CCD04B9E3_TypeDefinitionIndex = 87367;

class Class_1_76DBF6C211384509_Class_1_C4C7561CCD04B9E3 : public ::System::Object
{
public:
	::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>* Field_1_1; // 0x10
	::Class_1_76DBF6C211384509_Class_1_92BAA7CCF5A35C9A_9* Field_1_2; // 0x18
	::MoleMole::ESystemSettingType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_CLASS_1_C4C7561CCD04B9E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_CLASS_1_C4C7561CCD04B9E3_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}
};
