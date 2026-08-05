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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD7C760)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7C860)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7C750)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7CD90)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7CA00)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD7D1F0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD7C850)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7CDF0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7CA80)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7D060)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7CC50)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_TRYGETAVATARID_OFFSET UNITYSDK_OFFSET(0x1BD7D2C0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x1BD7D400)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7D710)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7D720)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD7D730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovSplitTeamMemberTrait_TypeDefinitionIndex = 86187;

	class ZenkovSplitTeamMemberTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PanelID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovSplitTeamMemberTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamMemberTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovSplitTeamMemberTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamMemberTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void UpdateTraits(::Class_1_BE29B49AC03370B6* context, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_UPDATETRAITS_OFFSET))(this, context, traits);
		}

		static ::System::Boolean TryGetAvatarId(::System::UInt32 groupId, ::System::UInt32 memberId, ::System::UInt32& avatarId)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_TRYGETAVATARID_OFFSET))(groupId, memberId, avatarId);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
