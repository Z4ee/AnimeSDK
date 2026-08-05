#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1350ECF0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1350EDF0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1350ECA0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350F340)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1350EF90)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1350F710)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1350EDE0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350F3A0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1350F010)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350F580)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1350F200)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1350F7C0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1350F810)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1350F820)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1350F830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverrideGuidePosTrait_TypeDefinitionIndex = 81907;

	class OverrideGuidePosTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* OverrideGuidePointName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::OverrideGuidePosTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::OverrideGuidePosTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::OverrideGuidePosTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::OverrideGuidePosTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
