#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16270680)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16270780)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16270670)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16270CB0)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16270920)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16270770)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16270D10)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x162709A0)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16270F80)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16270B70)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16271110)
#define MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16271120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovQuestItemSubmitTrait_TypeDefinitionIndex = 48138;

	class ZenkovQuestItemSubmitTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ZenkovQuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovQuestItemSubmitTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovQuestItemSubmitTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovQuestItemSubmitTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovQuestItemSubmitTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVQUESTITEMSUBMITTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
