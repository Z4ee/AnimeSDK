#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10;
class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define MOLEMOLE_CONFIGLEVELCONDITIONDYNAMICWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x88EDF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelConditionDynamicWrapper_TypeDefinitionIndex = 63542;

	struct alignas(8) ConfigLevelConditionDynamicWrapper
	{
		// static const ::System::String* DynamicKeyConditionID; // 0x0
		// static const ::System::String* DynamicKeyConditionTemplate; // 0x0
		// static const ::System::String* DynamicKeyConditionScriptArgs; // 0x0
		::MoleMole::Config::DynamicInt* ConditionID; // 0x10
		::MoleMole::Config::DynamicInt* ConditionTemplate; // 0x18
		::MoleMole::Config::DynamicString* ConditionScriptArgs; // 0x20

		::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10* Create(::Class_1_BFC2F9D5895EB2FB* argMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_0_16E7307DCC43CB2C_10*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELCONDITIONDYNAMICWRAPPER_CREATE_OFFSET))(this, argMap);
		}
	};
}
