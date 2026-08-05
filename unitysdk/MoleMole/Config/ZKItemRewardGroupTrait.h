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

#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4F4EF0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F4FF0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F4EE0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F5970)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F5350)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4F5FD0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B4F4FE0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F59D0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F53D0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4F5E40)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4F5830)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F6020)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4F6030)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B4F6040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKItemRewardGroupTrait_TypeDefinitionIndex = 84287;

	class ZKItemRewardGroupTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ZKRewardSetID; // 0x18
		::System::Int32 MinNum; // 0x1C
		::System::Int32 MaxNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKItemRewardGroupTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKItemRewardGroupTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKItemRewardGroupTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKItemRewardGroupTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
