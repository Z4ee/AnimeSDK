#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class LevelData; }

#define CLASS_1_BE1B9A4879A49F0F_CLASS_1_BDB5BAA956359006_METHOD_1_BE797D2BC938D2EC_OFFSET UNITYSDK_OFFSET(0x11AEF1D0)
#define CLASS_1_BE1B9A4879A49F0F_CLASS_1_BDB5BAA956359006__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEF1C0)

inline static constexpr unsigned int Class_1_BE1B9A4879A49F0F_Class_1_BDB5BAA956359006_TypeDefinitionIndex = 44531;

class Class_1_BE1B9A4879A49F0F_Class_1_BDB5BAA956359006 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F_CLASS_1_BDB5BAA956359006__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BE797D2BC938D2EC(::MoleMole::Project::Config::LevelData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F_CLASS_1_BDB5BAA956359006_METHOD_1_BE797D2BC938D2EC_OFFSET))(this, a1);
	}
};
