#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
class Class_1_5FA9CCDDD9957726;
class Class_2_F3CFF1AFF7EE7DCD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x158BCA90)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x158BB8E0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BBA40)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BB8D0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BC2D0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158BBB70)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158BC950)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158BB9D0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BC330)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BBBF0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BC7B0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BC190)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x158BD750)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__REQUESTCREATEFOLLOWAVATAR_OFFSET UNITYSDK_OFFSET(0x158BCB20)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BD760)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158BD770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FollowAvatarTrait_TypeDefinitionIndex = 73020;

	class FollowAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SummonRobotID; // 0x18
		::System::Int32 AI_ID; // 0x1C
		::MoleMole::Config::CampType Camp; // 0x20
		::System::Boolean AdaptWorldLevel; // 0x24
		::Class_1_5FA9CCDDD9957726* _config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::FollowAvatarTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::FollowAvatarTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* extraComponents)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET))(this, handle, extraComponents);
		}

		::MoleMole::EntityHandle _RequestCreateFollowAvatar(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* extraComponents)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__REQUESTCREATEFOLLOWAVATAR_OFFSET))(this, handle, extraComponents);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
