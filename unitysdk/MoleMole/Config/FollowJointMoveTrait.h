#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C46BA00)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C46B9B0)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46BEE0)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46BB10)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C46BB00)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46BF40)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46BB90)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1C46C820)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_ONPREENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1C46C390)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C46C1E0)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C46BD80)
#define MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46CB20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FollowJointMoveTrait_TypeDefinitionIndex = 81974;

	class FollowJointMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* FollowerPrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::FollowJointMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::FollowJointMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::FollowJointMoveTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::FollowJointMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPreEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_ONPREENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWJOINTMOVETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}
	};
}
