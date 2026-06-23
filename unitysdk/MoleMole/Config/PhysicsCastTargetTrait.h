#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_53842913455A8556;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x158C1970)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158C1960)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C1CF0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158C1AE0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158C1FC0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158C1A70)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C1D80)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158C1B60)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158C1DE0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158C1B90)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2050)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x158C2060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PhysicsCastTargetTrait_TypeDefinitionIndex = 60198;

	class PhysicsCastTargetTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PhysicsCastTargetTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PhysicsCastTargetTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PhysicsCastTargetTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PhysicsCastTargetTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_53842913455A8556* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_53842913455A8556* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
