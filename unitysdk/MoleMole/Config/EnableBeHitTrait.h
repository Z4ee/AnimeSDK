#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_175;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x158BB650)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x158BAAA0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BAC00)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BAA90)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BB1D0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158BAD10)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158BAB90)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BB230)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BAD90)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158BB4B0)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158BB090)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x158BB780)
#define MOLEMOLE_CONFIG_ENABLEBEHITTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x158BB790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EnableBeHitTrait_TypeDefinitionIndex = 45741;

	class EnableBeHitTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::MoleMole::Config::CampType Camp; // 0x18
		::System::Boolean SetAliveState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EnableBeHitTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EnableBeHitTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EnableBeHitTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENABLEBEHITTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
