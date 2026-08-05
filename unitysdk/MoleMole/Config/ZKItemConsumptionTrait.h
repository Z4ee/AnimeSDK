#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace MoleMole::Config { class ZKItemConsumeUnlockState; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1626F1B0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1626F2B0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1626F140)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1626FEE0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1626F6F0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16270550)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1626F2A0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1626FF40)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1626F770)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x162703C0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1626FDA0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16270600)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16270610)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16270620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKItemConsumptionTrait_TypeDefinitionIndex = 75272;

	class ZKItemConsumptionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SubmitID; // 0x18
		::System::Int32 AlternativeSubmitID; // 0x1C
		::System::String* AttachPointName; // 0x20
		::MoleMole::Config::ZKItemConsumeUnlockState* UnlockState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKItemConsumptionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKItemConsumptionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKItemConsumptionTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKItemConsumptionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
