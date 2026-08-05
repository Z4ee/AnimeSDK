#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B928E10)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B928A60)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1B928E70)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1B928AE0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B929100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKItemConsumeUnlockState_TypeDefinitionIndex = 70375;

	class ZKItemConsumeUnlockState : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Int32 StateValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMEUNLOCKSTATE_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
