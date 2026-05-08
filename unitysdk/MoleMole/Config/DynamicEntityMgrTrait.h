#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C1E30)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x186C1B90)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x186C1E90)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x186C1950)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x186C22E0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_650023DCEF5DBFD2_OFFSET UNITYSDK_OFFSET(0x186C22F0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x186C1C10)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_8CA713D2AB176132_OFFSET UNITYSDK_OFFSET(0x186C2140)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x186C1900)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x186C1A40)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x186C1AB0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicEntityMgrTrait_TypeDefinitionIndex = 44502;

	class DynamicEntityMgrTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* Method_2_8CA713D2AB176132(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_8CA713D2AB176132_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* Method_2_650023DCEF5DBFD2(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_650023DCEF5DBFD2_OFFSET))(a1);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
