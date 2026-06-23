#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLensDistortions; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_D0CE3E8D7DFE3498_METHOD_1_FB6AAE3FB6DD7AF9_OFFSET UNITYSDK_OFFSET(0x14408A60)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_D0CE3E8D7DFE3498__CTOR_OFFSET UNITYSDK_OFFSET(0x14408A50)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_D0CE3E8D7DFE3498_TypeDefinitionIndex = 77466;

class Class_1_5C5D1BCD30A891BA_Class_1_D0CE3E8D7DFE3498 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigLensDistortions*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_D0CE3E8D7DFE3498__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB6AAE3FB6DD7AF9(::MoleMole::Config::ConfigLensDistortions* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLensDistortions*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_D0CE3E8D7DFE3498_METHOD_1_FB6AAE3FB6DD7AF9_OFFSET))(this, a1);
	}
};
