#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB0FCE0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB0F9C0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0xFB0FD40)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xFB0FA40)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0xFB0FF30)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xFB0F780)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xFB10010)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0xFB101E0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xFB0F730)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_BB12CDA6BD7B045B_OFFSET UNITYSDK_OFFSET(0xFB100A0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C0D29AF64945AEB5_OFFSET UNITYSDK_OFFSET(0xFB101F0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xFB0F870)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0xFB0F8E0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB10000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTrait_TypeDefinitionIndex = 46734;

	class ProjectileTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1B38DDAB1EBE93B0(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ProjectileTrait* Method_2_BB12CDA6BD7B045B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_BB12CDA6BD7B045B_OFFSET))(a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ProjectileTrait* Method_2_C0D29AF64945AEB5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_METHOD_2_C0D29AF64945AEB5_OFFSET))(a1, a2);
		}
	};
}
