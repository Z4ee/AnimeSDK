#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace System { class Action; }

#define CLASS_1_110F2DD152BF4DBC_CLASS_1_570F10366F6888F5_METHOD_1_7CEE10A27FBC03B0_OFFSET UNITYSDK_OFFSET(0x1431D720)
#define CLASS_1_110F2DD152BF4DBC_CLASS_1_570F10366F6888F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1431D710)

inline static constexpr unsigned int Class_1_110F2DD152BF4DBC_Class_1_570F10366F6888F5_TypeDefinitionIndex = 75680;

class Class_1_110F2DD152BF4DBC_Class_1_570F10366F6888F5 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_CLASS_1_570F10366F6888F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7CEE10A27FBC03B0(::MoleMole::Config::ConfigBuffMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*))((::PBYTE)hIl2Cpp + CLASS_1_110F2DD152BF4DBC_CLASS_1_570F10366F6888F5_METHOD_1_7CEE10A27FBC03B0_OFFSET))(this, a1);
	}
};
