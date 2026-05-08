#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17543280)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17542C30)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17541AB0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x175431E0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x17541740)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x17543340)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_51AFA03869AD26A9_OFFSET UNITYSDK_OFFSET(0x175433D0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_61E9AF70F18EC235_OFFSET UNITYSDK_OFFSET(0x17542C90)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x17543330)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x17541B30)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_8798A418B59B100B_OFFSET UNITYSDK_OFFSET(0x17543570)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x175416F0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17541830)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x175418A0)
#define MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17543310)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectTrait_TypeDefinitionIndex = 79275;

	class EtherEyesObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::EtherEyesObjectConfig EtherEyesObjectConfig; // 0x18
		::System::Single HoldSuccessTime; // 0x30
		::System::Boolean UseInteractEffect; // 0x34
		::System::Single InteractDistanceOffset; // 0x38
		::System::Boolean UseFocusOutLine; // 0x3C
		::MoleMole::Config::EtherEyesObjectSize ObjectSize; // 0x40
		::System::String* OverrideHintKey; // 0x48
		::System::Boolean NeedOverride; // 0x50
		::System::Boolean ShowLockPointUI; // 0x51
		::MoleMole::Config::EtherEyesObjectOverrideConfig EtherEyesObjectOverrideConfig; // 0x52
		::MoleMole::Config::EtherEyesFixConfig EtherEyesFixConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* Method_2_51AFA03869AD26A9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_51AFA03869AD26A9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_82A3EC7819F9DAA7_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_61E9AF70F18EC235(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_61E9AF70F18EC235_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::EtherEyesObjectTrait* Method_2_8798A418B59B100B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::EtherEyesObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESOBJECTTRAIT_METHOD_2_8798A418B59B100B_OFFSET))(a1);
		}
	};
}
