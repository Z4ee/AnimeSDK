#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB0DAD0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB0D840)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xFB0DB30)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xFB0D6D0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_6C9269FC85EE431C_OFFSET UNITYSDK_OFFSET(0xFB0DD20)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xFB0D8C0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_93EEBD19EBD49B86_OFFSET UNITYSDK_OFFSET(0xFB0DED0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xFB0D680)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xFB0D7D0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0DD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DebugInfoTrait_TypeDefinitionIndex = 62311;

	class DebugInfoTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DebugInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DebugInfoTrait* Method_2_6C9269FC85EE431C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_6C9269FC85EE431C_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::DebugInfoTrait* Method_2_93EEBD19EBD49B86(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_93EEBD19EBD49B86_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
