#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_68CB59C4BCB15F7F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7FF440)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B7FE6C0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7FE7C0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7FE6B0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FEFA0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FEA40)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B7FE7B0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FF000)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FEAC0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7FF2B0)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B7FEE60)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FF490)
#define MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7FF4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterSpawnerTrait_TypeDefinitionIndex = 79989;

	class MonsterSpawnerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SpawnerID; // 0x18
		::Enum_3_68CB59C4BCB15F7F MonsterSpawnerType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonsterSpawnerTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonsterSpawnerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERSPAWNERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
