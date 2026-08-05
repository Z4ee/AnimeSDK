#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_DAEC0C5AAB1F40ED_METHOD_1_68D1F8E4033341A2_OFFSET UNITYSDK_OFFSET(0x18B90A30)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_DAEC0C5AAB1F40ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90A20)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_DAEC0C5AAB1F40ED_TypeDefinitionIndex = 67637;

class Class_1_5C5D1BCD30A891BA_Class_1_DAEC0C5AAB1F40ED : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityFilmGrains*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_DAEC0C5AAB1F40ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68D1F8E4033341A2(::MoleMole::Config::ConfigEntityFilmGrains* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFilmGrains*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_DAEC0C5AAB1F40ED_METHOD_1_68D1F8E4033341A2_OFFSET))(this, a1);
	}
};
