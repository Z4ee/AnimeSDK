#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA8C80)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AA89F0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x16AA8CE0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x16AA8EC0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x16AA8880)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x16AA9120)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_3B62040E9A1CF3E4_OFFSET UNITYSDK_OFFSET(0x16AA91B0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x16AA8A70)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x16AA8830)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16AA8980)
#define MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_EC5C50D13EE664E6_OFFSET UNITYSDK_OFFSET(0x16AA8F70)
#define MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA8F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StateTreeTrait_TypeDefinitionIndex = 52803;

	class StateTreeTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* StateTreeAssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StateTreeTrait* Method_2_EC5C50D13EE664E6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_EC5C50D13EE664E6_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StateTreeTrait* Method_2_3B62040E9A1CF3E4(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_3B62040E9A1CF3E4_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
