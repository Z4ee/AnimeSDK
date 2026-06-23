#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace MoleMole::Config { class DifficultyRandomSuiteConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x170C6910)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170C68C0)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C6FB0)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170C6A80)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170C74B0)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x170C6A10)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C7010)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x170C6B00)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170C7300)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x170C6E50)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C7500)
#define MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x170C7510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RandomSuiteByDifficultyTrait_TypeDefinitionIndex = 59863;

	class RandomSuiteByDifficultyTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 FallbackSuiteIndex; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::DifficultyRandomSuiteConfig*>* DifficultyConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::RandomSuiteByDifficultyTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::RandomSuiteByDifficultyTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::RandomSuiteByDifficultyTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::RandomSuiteByDifficultyTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RANDOMSUITEBYDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
