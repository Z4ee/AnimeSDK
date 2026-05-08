#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17D2CA80)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D2C6B0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D2C170)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_0F6C8AFD4346CFC5_OFFSET UNITYSDK_OFFSET(0x17D2D5E0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x17D2BEE0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_5FEED8BF00B20F35_OFFSET UNITYSDK_OFFSET(0x17D2D300)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x17D2D720)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_775C2B47B8DBA768_OFFSET UNITYSDK_OFFSET(0x17D2C710)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x17D2BE90)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17D2BFD0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x17D2C1F0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_E0CFB5DABD0D5243_OFFSET UNITYSDK_OFFSET(0x17D2D730)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x17D2C040)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x17D2D290)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x17D2CFD0)
#define MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2D5D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GadgetModelCaptureTrait_TypeDefinitionIndex = 39791;

	class GadgetModelCaptureTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* Key; // 0x18
		::System::Boolean UseOverrideEnableState; // 0x20
		::System::Boolean OverrideEnableState; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* Method_2_0F6C8AFD4346CFC5(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_0F6C8AFD4346CFC5_OFFSET))(a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5FEED8BF00B20F35(::MoleMole::EntityHandle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_5FEED8BF00B20F35_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::GadgetModelCaptureTrait* Method_2_E0CFB5DABD0D5243(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GadgetModelCaptureTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_E0CFB5DABD0D5243_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_775C2B47B8DBA768(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GADGETMODELCAPTURETRAIT_METHOD_2_775C2B47B8DBA768_OFFSET))(this, a1, a2);
		}
	};
}
