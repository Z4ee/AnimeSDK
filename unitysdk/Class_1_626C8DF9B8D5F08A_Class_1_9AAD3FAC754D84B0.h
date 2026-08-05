#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace System { class Action; }

#define CLASS_1_626C8DF9B8D5F08A_CLASS_1_9AAD3FAC754D84B0_METHOD_1_DA582044A959ED34_OFFSET UNITYSDK_OFFSET(0x13E64CD0)
#define CLASS_1_626C8DF9B8D5F08A_CLASS_1_9AAD3FAC754D84B0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E64CC0)

inline static constexpr unsigned int Class_1_626C8DF9B8D5F08A_Class_1_9AAD3FAC754D84B0_TypeDefinitionIndex = 60869;

class Class_1_626C8DF9B8D5F08A_Class_1_9AAD3FAC754D84B0 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_CLASS_1_9AAD3FAC754D84B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA582044A959ED34(::MoleMole::Config::ConfigLevelResultPerforms* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*))((::PBYTE)hIl2Cpp + CLASS_1_626C8DF9B8D5F08A_CLASS_1_9AAD3FAC754D84B0_METHOD_1_DA582044A959ED34_OFFSET))(this, a1);
	}
};
