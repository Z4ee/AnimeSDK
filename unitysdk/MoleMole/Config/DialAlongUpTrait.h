#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA0F00)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AA0A00)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_0964D76C59C6E4FE_OFFSET UNITYSDK_OFFSET(0x16AA0F60)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x16AA0770)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x16AA1480)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x16AA1220)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x16AA1510)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x16AA0A80)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x16AA0760)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C276913EC2E1D8E6_OFFSET UNITYSDK_OFFSET(0x16AA1520)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16AA0860)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_E4B704195AACDF42_OFFSET UNITYSDK_OFFSET(0x16AA16C0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x16AA08D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x16AA1300)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA1470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DialAlongUpTrait_TypeDefinitionIndex = 63301;

	class DialAlongUpTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single rotateSpeed; // 0x18
		::System::Single initialRotation; // 0x1C
		::System::Boolean useRigidbody; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DialAlongUpTrait* Method_2_C276913EC2E1D8E6(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_C276913EC2E1D8E6_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0964D76C59C6E4FE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_0964D76C59C6E4FE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DialAlongUpTrait* Method_2_E4B704195AACDF42(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_METHOD_2_E4B704195AACDF42_OFFSET))(a1);
		}
	};
}
