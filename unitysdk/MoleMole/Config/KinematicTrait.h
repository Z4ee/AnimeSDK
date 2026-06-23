#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_KINEMATICTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x158BEF30)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x158BE510)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BE670)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BE500)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BEB00)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158BE750)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158BE600)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BEB60)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BE7D0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x158BEFB0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BED90)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BE9C0)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x158BF510)
#define MOLEMOLE_CONFIG_KINEMATICTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BF520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int KinematicTrait_TypeDefinitionIndex = 71087;

	class KinematicTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsKinematic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::KinematicTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::KinematicTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::KinematicTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::KinematicTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_KINEMATICTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
