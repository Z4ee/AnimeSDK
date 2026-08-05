#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A944EF0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A944EE0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A945210)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A945000)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A9454E0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A944FF0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A9452A0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A945080)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A945300)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A9450B0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A945570)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A945580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PhysicsCastTargetTrait_TypeDefinitionIndex = 46332;

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

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
