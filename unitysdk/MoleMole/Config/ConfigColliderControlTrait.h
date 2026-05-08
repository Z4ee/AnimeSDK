#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigColliderRegisterData.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186ACD70)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x186ACA50)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x186ACDD0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x186ACAD0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x186AD050)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x186AC810)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x186AD2A0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_5B509BC15E92CA31_OFFSET UNITYSDK_OFFSET(0x186AD340)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x186AD330)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x186AC7C0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x186AC900)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_F673749DA45855C3_OFFSET UNITYSDK_OFFSET(0x186AD100)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x186AC970)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x186ACFC0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x186AD0F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColliderControlTrait_TypeDefinitionIndex = 38329;

	class ConfigColliderControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigColliderRegisterData>* ColliderConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigColliderControlTrait* Method_2_F673749DA45855C3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigColliderControlTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_F673749DA45855C3_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigColliderControlTrait* Method_2_5B509BC15E92CA31(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigColliderControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_METHOD_2_5B509BC15E92CA31_OFFSET))(a1);
		}
	};
}
