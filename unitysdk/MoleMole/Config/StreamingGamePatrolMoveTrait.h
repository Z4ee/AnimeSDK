#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58DDA0D0BFEB8FA2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x115E87C0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x115E8920)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x115E8770)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115E9200)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115E8A70)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x115E96D0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x115E88B0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x115E9260)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x115E8AF0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x115E9530)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x115E90C0)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x115E9770)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x115E9780)
#define MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x115E9790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StreamingGamePatrolMoveTrait_TypeDefinitionIndex = 65096;

	class StreamingGamePatrolMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::ConfigPatrolPointSet* PointSets; // 0x18
		::System::Single StuckTimeoutSeconds; // 0x20
		::Enum_3_58DDA0D0BFEB8FA2 StuckResolution; // 0x24
		::System::Single StuckFadeDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StreamingGamePatrolMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StreamingGamePatrolMoveTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STREAMINGGAMEPATROLMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
