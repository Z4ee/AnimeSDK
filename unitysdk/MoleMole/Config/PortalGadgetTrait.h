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

#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x127267F0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12725BC0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12725D20)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12725B70)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12726340)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12725E30)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12725CB0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x127263A0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12725EB0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12726650)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12726200)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x12726840)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x127269E0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x127269F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PortalGadgetTrait_TypeDefinitionIndex = 42800;

	class PortalGadgetTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* LinkTag; // 0x18
		::System::Boolean IsSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_175* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PortalGadgetTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PortalGadgetTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PortalGadgetTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PortalGadgetTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_175* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
