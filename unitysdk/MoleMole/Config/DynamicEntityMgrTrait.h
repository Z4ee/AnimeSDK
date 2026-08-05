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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4BB580)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BB680)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BB530)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BBBD0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BB820)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A4BB670)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BBC30)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BB8A0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4BBED0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A4BBA90)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BC060)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BC070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicEntityMgrTrait_TypeDefinitionIndex = 85084;

	class DynamicEntityMgrTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
