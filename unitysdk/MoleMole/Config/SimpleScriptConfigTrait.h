#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x149514F0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x149511F0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14950DF0)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x14951250)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x14950C80)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_2D1E87061B69CB48_OFFSET UNITYSDK_OFFSET(0x14951C40)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x14950C30)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x14950D80)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_D1FF45A7A0892972_OFFSET UNITYSDK_OFFSET(0x14951A90)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x14950E70)
#define MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x14951A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SimpleScriptConfigTrait_TypeDefinitionIndex = 80657;

	class SimpleScriptConfigTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* ScritptConfigPath; // 0x18
		::System::Boolean UseFighterData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* Method_2_D1FF45A7A0892972(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_D1FF45A7A0892972_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_020D79381203C043_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::SimpleScriptConfigTrait* Method_2_2D1E87061B69CB48(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::SimpleScriptConfigTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SIMPLESCRIPTCONFIGTRAIT_METHOD_2_2D1E87061B69CB48_OFFSET))(a1);
		}
	};
}
