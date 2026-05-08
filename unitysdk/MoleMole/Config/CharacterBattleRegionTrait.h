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

#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17D1B460)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D1B160)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D1AD60)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x17D1B1C0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x17D1AAF0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_44EBBA41D24F6FA9_OFFSET UNITYSDK_OFFSET(0x17D1B640)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_510B71D0E9C4B817_OFFSET UNITYSDK_OFFSET(0x17D1B7E0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x17D1B920)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x17D1AAA0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17D1ABE0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x17D1ADE0)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x17D1AC50)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x17D1B500)
#define MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterBattleRegionTrait_TypeDefinitionIndex = 45551;

	class CharacterBattleRegionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* OverrideBornBattleRegion; // 0x18
		::System::Boolean EnableBattleRegionTeleport; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_POSTPROCESSENTITY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CharacterBattleRegionTrait* Method_2_44EBBA41D24F6FA9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CharacterBattleRegionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_44EBBA41D24F6FA9_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_020D79381203C043_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::CharacterBattleRegionTrait* Method_2_510B71D0E9C4B817(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CharacterBattleRegionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_510B71D0E9C4B817_OFFSET))(a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERBATTLEREGIONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}
	};
}
