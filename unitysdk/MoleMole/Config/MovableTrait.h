#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A9440D0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9428C0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A9429C0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A942870)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A943A80)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A942FB0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A9429B0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A943AE0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A943030)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A943F40)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A943940)
#define MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A944160)
#define MOLEMOLE_CONFIG_MOVABLETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A944170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableTrait_TypeDefinitionIndex = 66513;

	class MovableTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* FixedCameraKey; // 0x18
		::Enum_3_E36C894DCA3F304A_2 MovablePathDir; // 0x20
		::UnityEngine::Vector3 PosStart; // 0x24
		::UnityEngine::Vector3 PosEnd; // 0x30
		::System::Int32 initProgress; // 0x3C
		::System::Boolean reverseInputDir; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MovableTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MovableTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
