#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STATETREETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x158C2FF0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x158C2630)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158C2620)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C2B50)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158C27A0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158C2FA0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158C2730)
#define MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C2BB0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158C2820)
#define MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x158C3360)
#define MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x158C3100)
#define MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C2DF0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158C29F0)
#define MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x158C34D0)
#define MOLEMOLE_CONFIG_STATETREETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158C34E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StateTreeTrait_TypeDefinitionIndex = 61117;

	class StateTreeTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::Foundation::AssetPath AssetPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StateTreeTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StateTreeTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
