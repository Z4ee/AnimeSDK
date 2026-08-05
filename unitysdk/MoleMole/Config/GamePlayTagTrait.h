#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD6EA90)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD6DD10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6DE10)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6DCA0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6E4F0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6DFB0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD6E9F0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD6DE00)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6E550)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6E030)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1BD6EB50)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD6E860)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD6E3B0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6ECB0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD6ECC0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD6ECD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamePlayTagTrait_TypeDefinitionIndex = 73324;

	class GamePlayTagTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* EntityTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GamePlayTagTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GamePlayTagTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPreEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
