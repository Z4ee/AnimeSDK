#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_BB7A861296988E7A_METHOD_1_D0AFAD242F7CED77_OFFSET UNITYSDK_OFFSET(0x13343760)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_BB7A861296988E7A__CTOR_OFFSET UNITYSDK_OFFSET(0x13343750)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_BB7A861296988E7A_TypeDefinitionIndex = 77478;

class Class_1_5C5D1BCD30A891BA_Class_1_BB7A861296988E7A : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigGaussianBlurEffects*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_BB7A861296988E7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0AFAD242F7CED77(::MoleMole::Config::ConfigGaussianBlurEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGaussianBlurEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_BB7A861296988E7A_METHOD_1_D0AFAD242F7CED77_OFFSET))(this, a1);
	}
};
