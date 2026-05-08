#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141EAB30)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141EA190)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET UNITYSDK_OFFSET(0x141EAB90)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x141EA210)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_C8C10C8809F32C99_OFFSET UNITYSDK_OFFSET(0x141E9FF0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x141EAFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragmentParam_TypeDefinitionIndex = 71848;

	class ConfigAbilityFragmentParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::Enum_3_E0707159A4819BEE ValType; // 0x18
		::System::Single Value; // 0x1C
		::System::Boolean BoolValue; // 0x20
		::System::Int32 IntValue; // 0x24
		::System::String* StringValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C8C10C8809F32C99(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_C8C10C8809F32C99_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5DAF3CA1F13D8B5E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENTPARAM_METHOD_1_5DAF3CA1F13D8B5E_OFFSET))(this, a1, a2);
		}
	};
}
