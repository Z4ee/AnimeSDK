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

#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B800540)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B800640)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8004F0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B801230)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B800A80)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B801990)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B800630)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B801290)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B800B00)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B801800)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8010F0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B801A40)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B801A50)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B801A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PathGraphTrait_TypeDefinitionIndex = 54364;

	class PathGraphTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PathGraphID; // 0x18
		::System::Int32 StateID; // 0x1C
		::System::Boolean EnableAllSubGraph; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* EnabledSubGraph; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PathGraphTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PathGraphTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
