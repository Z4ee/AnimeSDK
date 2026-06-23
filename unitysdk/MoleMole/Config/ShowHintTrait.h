#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xE981D10)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE981E70)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE981D00)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE9825E0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE981FA0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE982C20)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE981E00)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE982640)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE982020)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE982A80)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE9824A0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE982CD0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE982CE0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE982CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowHintTrait_TypeDefinitionIndex = 52747;

	class ShowHintTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ShowHintConfigID; // 0x18
		::System::Boolean OverrideObscureState; // 0x1C
		::System::Int32 ObscureStateOverride; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ShowHintTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ShowHintTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
