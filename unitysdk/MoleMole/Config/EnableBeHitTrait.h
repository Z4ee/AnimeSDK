#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16AA20D0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA1DF0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AA1A80)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x16AA1810)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x16AA24E0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x16AA1B00)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x16AA1800)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_B79233E5C788E689_OFFSET UNITYSDK_OFFSET(0x16AA1E50)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_BE4CD7F8CF02DEB9_OFFSET UNITYSDK_OFFSET(0x16AA2200)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16AA1900)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_F2F91A7507C7443B_OFFSET UNITYSDK_OFFSET(0x16AA2340)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x16AA1970)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA21F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnableBeHitTrait_TypeDefinitionIndex = 81085;

	class EnableBeHitTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::CampType Camp; // 0x18
		::System::Boolean SetAliveState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EnableBeHitTrait* Method_2_BE4CD7F8CF02DEB9(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_BE4CD7F8CF02DEB9_OFFSET))(a1);
		}

		static ::MoleMole::Config::EnableBeHitTrait* Method_2_F2F91A7507C7443B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_F2F91A7507C7443B_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_B79233E5C788E689(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_B79233E5C788E689_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}
	};
}
