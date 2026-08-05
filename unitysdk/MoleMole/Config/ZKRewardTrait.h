#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D862098692CC1FC.h"
#include "unitysdk/Enum_3_B25F7485F42A041A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Config { class ZKRewardStateEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4BF860)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BF960)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BF7F0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C0C00)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C0030)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4C1660)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4BF950)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C0C60)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C00B0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A4C17D0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4C1210)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4C0AC0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x1A4C13A0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C1AF0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4C1B00)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4C1B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKRewardTrait_TypeDefinitionIndex = 85203;

	class ZKRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_HideDropTextureSheet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZKRewardTrait_TypeDefinitionIndex)->GetStaticField(0xC9E0);
		}
		::Enum_3_6D862098692CC1FC ZKRewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Collections::Generic::List_1<::MoleMole::Config::ZKRewardStateEntry*>* StateRewards; // 0x20
		::System::Boolean IsMemberDrop; // 0x28
		::Enum_3_B25F7485F42A041A DropTimeType; // 0x2C
		::System::Int32 DropVOID; // 0x30
		::System::String* ItemAttachPoint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void UpdateTraits(::Class_1_BE29B49AC03370B6* context, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_UPDATETRAITS_OFFSET))(this, context, traits);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
