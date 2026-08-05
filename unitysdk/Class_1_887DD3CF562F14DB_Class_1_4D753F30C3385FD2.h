#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637;
namespace MoleMole::Config { class ConfigLockTargets; }

#define CLASS_1_887DD3CF562F14DB_CLASS_1_4D753F30C3385FD2_METHOD_1_E72982934102C665_OFFSET UNITYSDK_OFFSET(0x11B5B250)
#define CLASS_1_887DD3CF562F14DB_CLASS_1_4D753F30C3385FD2__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5A6D0)

inline static constexpr unsigned int Class_1_887DD3CF562F14DB_Class_1_4D753F30C3385FD2_TypeDefinitionIndex = 82444;

class Class_1_887DD3CF562F14DB_Class_1_4D753F30C3385FD2 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Class_1_887DD3CF562F14DB_Class_1_7C782EB43E203637* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_4D753F30C3385FD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E72982934102C665(::MoleMole::Config::ConfigLockTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargets*))((::PBYTE)hIl2Cpp + CLASS_1_887DD3CF562F14DB_CLASS_1_4D753F30C3385FD2_METHOD_1_E72982934102C665_OFFSET))(this, a1);
	}
};
