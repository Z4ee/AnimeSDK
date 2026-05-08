#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x181D7770)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181D7230)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181D6E80)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x181D6C20)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1FAC9B543EF43496_OFFSET UNITYSDK_OFFSET(0x181D7290)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x181D7FC0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x181D8050)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_68A9BA81122CADE8_OFFSET UNITYSDK_OFFSET(0x181D7E20)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x181D6F00)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x181D6C10)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_BCB413A8765F7D64_OFFSET UNITYSDK_OFFSET(0x181D7CE0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x181D6D10)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x181D7600)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x181D6D80)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x181D7CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DropItemTrait_TypeDefinitionIndex = 67233;

	class DropItemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ItemID; // 0x18
		::System::Int32 OverridePickType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_EC28FD7AA4FC3328(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_EC28FD7AA4FC3328_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a2)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DropItemTrait* Method_2_BCB413A8765F7D64(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_BCB413A8765F7D64_OFFSET))(a1);
		}

		static ::MoleMole::Config::DropItemTrait* Method_2_68A9BA81122CADE8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_68A9BA81122CADE8_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1FAC9B543EF43496(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1FAC9B543EF43496_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}
	};
}
