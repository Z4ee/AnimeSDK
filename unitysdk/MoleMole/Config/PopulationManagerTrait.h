#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x10D15890)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x10D15880)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D15C10)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10D15A00)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D15EE0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x10D15990)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D15CA0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x10D15A80)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x10D15D00)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x10D15AB0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15F70)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D15F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PopulationManagerTrait_TypeDefinitionIndex = 63224;

	class PopulationManagerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PopulationManagerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PopulationManagerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PopulationManagerTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PopulationManagerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
