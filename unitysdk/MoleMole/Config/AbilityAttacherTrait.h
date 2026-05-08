#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_BFC2F9D5895EB2FB;
class Class_1_F91ACF27C085FD90;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace MoleMole::Config { class ConfigAbilityFragmentParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x110155E0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11014DF0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11014B60)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_06A1C2A3209F64BB_OFFSET UNITYSDK_OFFSET(0x11015100)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x11014E50)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x11014870)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1EA0894A9616ED1B_OFFSET UNITYSDK_OFFSET(0x11015F00)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0x11015680)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x11015040)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x11014BE0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_60256B6F3F3B5E30_OFFSET UNITYSDK_OFFSET(0x11015720)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x11015EF0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_713C02985C53F80C_OFFSET UNITYSDK_OFFSET(0x11015CF0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_887F0117515D9A94_OFFSET UNITYSDK_OFFSET(0x11015860)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x11014810)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11014960)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x110149D0)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x11015090)
#define MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11015660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityAttacherTrait_TypeDefinitionIndex = 73773;

	class AbilityAttacherTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragment*>* AbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* Method_2_60256B6F3F3B5E30(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_60256B6F3F3B5E30_OFFSET))(a1);
		}

		static ::System::Void Method_2_887F0117515D9A94(::Class_1_BFC2F9D5895EB2FB* a1, ::MoleMole::Config::ConfigAbilityFragmentParam* a2)
		{
			return ((::System::Void(*)(::Class_1_BFC2F9D5895EB2FB*, ::MoleMole::Config::ConfigAbilityFragmentParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_887F0117515D9A94_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AbilityAttacherTrait* Method_2_713C02985C53F80C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AbilityAttacherTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_713C02985C53F80C_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_06A1C2A3209F64BB(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_06A1C2A3209F64BB_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_1EA0894A9616ED1B(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYATTACHERTRAIT_METHOD_2_1EA0894A9616ED1B_OFFSET))(this, a1);
		}
	};
}
