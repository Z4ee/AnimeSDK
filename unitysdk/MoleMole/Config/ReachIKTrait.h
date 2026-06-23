#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_41605D8FFAF51822_Struct_2_1F8F89E884923C37.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ReachIKConfig.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE97FC90)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xE97F200)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_CREATECONFIG_OFFSET UNITYSDK_OFFSET(0xE97FD70)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97F360)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97F1B0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97F8A0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE97F440)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE97FF40)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE97F2F0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97F900)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97F4C0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97FAF0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97F760)
#define MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE97FFB0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97FFC0)
#define MOLEMOLE_CONFIG_REACHIKTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE97FFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ReachIKTrait_TypeDefinitionIndex = 52326;

	class ReachIKTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ReachIKConfig>* IKConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ReachIKTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ReachIKTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ReachIKTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void CreateConfig(::Il2CppArray<::Class_3_41605D8FFAF51822_Struct_2_1F8F89E884923C37>*& list, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_3_41605D8FFAF51822_Struct_2_1F8F89E884923C37>*&, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT_CREATECONFIG_OFFSET))(this, list, groupID);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REACHIKTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
