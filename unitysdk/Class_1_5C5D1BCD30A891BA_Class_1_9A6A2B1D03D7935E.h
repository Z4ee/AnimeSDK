#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_9A6A2B1D03D7935E_METHOD_1_379EA02B4CCC434A_OFFSET UNITYSDK_OFFSET(0x1605EC90)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_9A6A2B1D03D7935E__CTOR_OFFSET UNITYSDK_OFFSET(0x1605EC80)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_9A6A2B1D03D7935E_TypeDefinitionIndex = 77451;

class Class_1_5C5D1BCD30A891BA_Class_1_9A6A2B1D03D7935E : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_9A6A2B1D03D7935E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_379EA02B4CCC434A(::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_9A6A2B1D03D7935E_METHOD_1_379EA02B4CCC434A_OFFSET))(this, a1);
	}
};
