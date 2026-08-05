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

#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x13514CB0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x13514DB0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x13514CA0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13515BD0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135152D0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x13514DA0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x13515C30)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x13515350)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x13516060)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x13515A90)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x135161F0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x13516200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StableCarrotChipControlTrait_TypeDefinitionIndex = 77437;

	class StableCarrotChipControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single FirstRadius; // 0x18
		::System::Single SecondRadius; // 0x1C
		::System::Single CenterOffsetRatioMin; // 0x20
		::System::Int32 CrossPOIDepth; // 0x24
		::System::Int32 MaxSampleRetry; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StableCarrotChipControlTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StableCarrotChipControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StableCarrotChipControlTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StableCarrotChipControlTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
