#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17299FF0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17299C40)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x1729A050)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x17299CC0)
#define MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityFragment_TypeDefinitionIndex = 48572;

	class ConfigAbilityFragment : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragmentParam*>* AbilitySpecial; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGABILITYFRAGMENT_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}
	};
}
