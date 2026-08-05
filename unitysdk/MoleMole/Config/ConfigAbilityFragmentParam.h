#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B545F90)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B546E60)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B5464E0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1B546560)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET UNITYSDK_OFFSET(0x1B546EC0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B547310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragmentParam_TypeDefinitionIndex = 79102;

	class ConfigAbilityFragmentParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::Enum_3_5D65F42F0EEB3310 ValType; // 0x18
		::System::Single Value; // 0x1C
		::System::Boolean BoolValue; // 0x20
		::System::Int32 IntValue; // 0x24
		::System::String* StringValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_EXPOSEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5DAF3CA1F13D8B5E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
		}
	};
}
