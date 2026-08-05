#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelEndPerforms; }
namespace System { class Action; }

#define CLASS_1_7025DDE9124992DF_CLASS_1_5CA745E968234383_METHOD_1_1CD82571F251E441_OFFSET UNITYSDK_OFFSET(0x18DCBF80)
#define CLASS_1_7025DDE9124992DF_CLASS_1_5CA745E968234383__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCBF70)

inline static constexpr unsigned int Class_1_7025DDE9124992DF_Class_1_5CA745E968234383_TypeDefinitionIndex = 59437;

class Class_1_7025DDE9124992DF_Class_1_5CA745E968234383 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_CLASS_1_5CA745E968234383__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1CD82571F251E441(::MoleMole::Config::ConfigLevelEndPerforms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelEndPerforms*))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_CLASS_1_5CA745E968234383_METHOD_1_1CD82571F251E441_OFFSET))(this, a1);
	}
};
