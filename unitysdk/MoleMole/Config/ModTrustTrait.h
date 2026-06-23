#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x17E37150)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E372B0)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E37140)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E37A20)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E373E0)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x17E37240)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E37A80)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x17E37460)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E37EF0)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x17E378E0)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E38090)
#define MOLEMOLE_CONFIG_MODTRUSTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x17E380A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModTrustTrait_TypeDefinitionIndex = 57659;

	class ModTrustTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 TrustId; // 0x18
		::System::Int32 PartnerEvent; // 0x1C
		::System::Int32 PartnerID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ModTrustTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ModTrustTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ModTrustTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ModTrustTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODTRUSTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
