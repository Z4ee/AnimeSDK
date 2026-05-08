#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1243DCC0)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1243D260)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1243D2E0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x1243E450)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1243CF60)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1243E6D0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x1243E6C0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_A971A44EFFBF5AC7_OFFSET UNITYSDK_OFFSET(0x1243E760)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_BCACB2982F45D509_OFFSET UNITYSDK_OFFSET(0x1243E520)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1243D050)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x1243CED0)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x1243DD20)
#define MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x1243D0C0)
#define MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1243E510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTrait_TypeDefinitionIndex = 59762;

	class StoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x18
		::System::String* PlayerPointKey; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* ActiveMemberConfigIDList; // 0x28
		::System::Int32 TeleportID; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* HideTags; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* Args; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_BCACB2982F45D509(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_BCACB2982F45D509_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::StoreTrait* Method_2_A971A44EFFBF5AC7(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_METHOD_2_A971A44EFFBF5AC7_OFFSET))(a1);
		}
	};
}
