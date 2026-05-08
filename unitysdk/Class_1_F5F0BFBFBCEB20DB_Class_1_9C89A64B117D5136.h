#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class Action; }

#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_9C89A64B117D5136_METHOD_1_9931D3EC88DBAD70_OFFSET UNITYSDK_OFFSET(0x1652D4F0)
#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_9C89A64B117D5136__CTOR_OFFSET UNITYSDK_OFFSET(0x1652D4E0)

inline static constexpr unsigned int Class_1_F5F0BFBFBCEB20DB_Class_1_9C89A64B117D5136_TypeDefinitionIndex = 60212;

class Class_1_F5F0BFBFBCEB20DB_Class_1_9C89A64B117D5136 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_9C89A64B117D5136__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9931D3EC88DBAD70(::MoleMole::Config::ConfigUIPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_9C89A64B117D5136_METHOD_1_9931D3EC88DBAD70_OFFSET))(this, a1);
	}
};
