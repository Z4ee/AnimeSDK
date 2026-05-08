#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_68CB59C4BCB15F7F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x181D96F0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181D93E0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181D8FA0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_000428738BFA9EC0_OFFSET UNITYSDK_OFFSET(0x181D9750)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x181D9020)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_19FB73C58CF6B764_OFFSET UNITYSDK_OFFSET(0x181D98F0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x181D8D30)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x181D9A30)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x181D8D20)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_BF50AF6BCBDE0EBC_OFFSET UNITYSDK_OFFSET(0x181D9440)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x181D8E20)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x181D8E90)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x181D9740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterSpawnerTrait_TypeDefinitionIndex = 47542;

	class MonsterSpawnerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SpawnerID; // 0x18
		::Enum_3_68CB59C4BCB15F7F MonsterSpawnerType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* Method_2_000428738BFA9EC0(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_000428738BFA9EC0_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* Method_2_19FB73C58CF6B764(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_19FB73C58CF6B764_OFFSET))(a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_BF50AF6BCBDE0EBC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_METHOD_2_BF50AF6BCBDE0EBC_OFFSET))(this, a1, a2);
		}
	};
}
