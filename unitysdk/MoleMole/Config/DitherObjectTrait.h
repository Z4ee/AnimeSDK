#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BD68330)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD67AB0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD67A60)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD67F70)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD67BC0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD67BB0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD67FD0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD67C40)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD68180)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD67E10)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD68380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DitherObjectTrait_TypeDefinitionIndex = 65402;

	class DitherObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DitherConfigKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DitherObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DitherObjectTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
