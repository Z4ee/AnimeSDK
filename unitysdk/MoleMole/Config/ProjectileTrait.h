#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PROJECTILETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xE97E2A0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97E400)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97E250)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97E940)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE97E4E0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE97ED30)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xE97E390)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97E9A0)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97E560)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xE97EB90)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xE97E800)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE97EE00)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xE97EE10)
#define MOLEMOLE_CONFIG_PROJECTILETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE97EE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTrait_TypeDefinitionIndex = 40632;

	class ProjectileTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ProjectileTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ProjectileTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ProjectileTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
