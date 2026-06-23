#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_169668527B46D279_METHOD_1_A8B66DBB396DC015_OFFSET UNITYSDK_OFFSET(0x15D21860)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_169668527B46D279__CTOR_OFFSET UNITYSDK_OFFSET(0x15D21850)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_169668527B46D279_TypeDefinitionIndex = 77473;

class Class_1_5C5D1BCD30A891BA_Class_1_169668527B46D279 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityColorAdjustments*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_169668527B46D279__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8B66DBB396DC015(::MoleMole::Config::ConfigEntityColorAdjustments* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityColorAdjustments*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_169668527B46D279_METHOD_1_A8B66DBB396DC015_OFFSET))(this, a1);
	}
};
