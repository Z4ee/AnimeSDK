#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1753DE70)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1753DA00)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1753CE40)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_06032CE7EE955FC9_OFFSET UNITYSDK_OFFSET(0x1753E2B0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1753CB30)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET UNITYSDK_OFFSET(0x1753E210)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1753E070)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1753CEC0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1753CAC0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x1753E2A0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET UNITYSDK_OFFSET(0x1753DA60)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_97E22DAD4194162F_OFFSET UNITYSDK_OFFSET(0x1753E0D0)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1753CC20)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x1753CC90)
#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1753E0C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelectionTrait_TypeDefinitionIndex = 42665;

	class ConfigTeleportSelectionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::TeleportSelectionType Type; // 0x18
		::System::Single PreInteractDistanceOffset; // 0x1C
		::System::Single InteractDistanceOffset; // 0x20
		::System::Single InteractAngle; // 0x24
		::System::Boolean NeedShowUI; // 0x28
		::System::String* MobileTextKey; // 0x30
		::System::String* PcOrConsoleTextKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* Method_2_97E22DAD4194162F(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_97E22DAD4194162F_OFFSET))(a1);
		}

		::System::Boolean Method_2_7D22EC5431ECF5C7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554_1(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_2A6B87C525933554_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigTeleportSelectionTrait* Method_2_06032CE7EE955FC9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTeleportSelectionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTIONTRAIT_METHOD_2_06032CE7EE955FC9_OFFSET))(a1, a2);
		}
	};
}
