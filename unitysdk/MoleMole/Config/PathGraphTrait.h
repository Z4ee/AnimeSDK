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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19FF8C60)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF8DC0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF8C10)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF96E0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF8F10)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19FF9E50)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19FF8D50)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF9740)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF8F90)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19FF9CB0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19FF95A0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF9F00)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF9F10)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19FF9F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PathGraphTrait_TypeDefinitionIndex = 68135;

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

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
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

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
