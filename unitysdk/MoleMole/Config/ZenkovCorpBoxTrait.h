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

#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19BA3570)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA3670)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA3560)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA3DC0)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19BA38F0)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19BA3660)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA3E20)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19BA3970)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA4150)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19BA3C80)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA42E0)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA42F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovCorpBoxTrait_TypeDefinitionIndex = 51160;

	class ZenkovCorpBoxTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsNoSearch; // 0x18
		::System::Int32 CorpBoxID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovCorpBoxTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovCorpBoxTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovCorpBoxTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovCorpBoxTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
