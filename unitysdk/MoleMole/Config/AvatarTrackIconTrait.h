#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12A4A3A0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A4A4A0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A4A390)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A4A9D0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12A4A640)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12A4AE30)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12A4A490)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A4AA30)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12A4A6C0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A4ACA0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12A4A890)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4AED0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12A4AEE0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12A4AEF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AvatarTrackIconTrait_TypeDefinitionIndex = 89648;

	class AvatarTrackIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PartnerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AvatarTrackIconTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AvatarTrackIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AvatarTrackIconTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AvatarTrackIconTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
