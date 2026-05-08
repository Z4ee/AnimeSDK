#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AD7CB0A7B6228E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
class Class_2_23B5560011126547;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x183C7440)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x183C6F20)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x183C6790)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x183C6810)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0x183C7350)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1BE0B5ADAE0F6979_OFFSET UNITYSDK_OFFSET(0x183C7760)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x183C64C0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x183C76C0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_61E9AF70F18EC235_OFFSET UNITYSDK_OFFSET(0x183C6F80)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x183C7750)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x183C64B0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x183C65B0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_EF6953D53ED0D78B_OFFSET UNITYSDK_OFFSET(0x183C7580)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x183C6620)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x183C74F0)
#define MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x183C7570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcIkTrait_TypeDefinitionIndex = 53168;

	class ConfigNpcIkTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean EnablePlayerLookAtIk; // 0x18
		::Enum_3_71AD7CB0A7B6228E NpcLookAtIkType; // 0x1C
		::System::Single NpcLookAtIkSectorRadius; // 0x20
		::System::Single NpcLookAtIkSectorAngle; // 0x24
		::System::Boolean EnableNpcFootIk; // 0x28
		::Class_2_23B5560011126547* component; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1B38DDAB1EBE93B0(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1B38DDAB1EBE93B0_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* Method_2_EF6953D53ED0D78B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_EF6953D53ED0D78B_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_61E9AF70F18EC235(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_61E9AF70F18EC235_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigNpcIkTrait* Method_2_1BE0B5ADAE0F6979(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigNpcIkTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCIKTRAIT_METHOD_2_1BE0B5ADAE0F6979_OFFSET))(a1, a2);
		}
	};
}
