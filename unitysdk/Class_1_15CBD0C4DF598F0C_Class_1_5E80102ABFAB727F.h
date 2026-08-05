#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace System { class Action; }

#define CLASS_1_15CBD0C4DF598F0C_CLASS_1_5E80102ABFAB727F_METHOD_1_E7E81FD8784F4CB6_OFFSET UNITYSDK_OFFSET(0x1567EB50)
#define CLASS_1_15CBD0C4DF598F0C_CLASS_1_5E80102ABFAB727F__CTOR_OFFSET UNITYSDK_OFFSET(0x1567EB40)

inline static constexpr unsigned int Class_1_15CBD0C4DF598F0C_Class_1_5E80102ABFAB727F_TypeDefinitionIndex = 60783;

class Class_1_15CBD0C4DF598F0C_Class_1_5E80102ABFAB727F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_CLASS_1_5E80102ABFAB727F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7E81FD8784F4CB6(::MoleMole::Config::ConfigCityHollowMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCityHollowMap*))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_CLASS_1_5E80102ABFAB727F_METHOD_1_E7E81FD8784F4CB6_OFFSET))(this, a1);
	}
};
