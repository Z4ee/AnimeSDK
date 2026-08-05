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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B9F020)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B9F120)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B9EFD0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B9FAD0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B9F480)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19BA0100)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B9F110)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B9FB30)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B9F500)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B9FF70)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B9F990)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x19BA01B0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA02D0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19BA02E0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19BA02F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneTransformationVOTrait_TypeDefinitionIndex = 72161;

	class SceneTransformationVOTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsOverrideBackStage; // 0x18
		::System::Boolean DefaultBackStage; // 0x19
		::System::Collections::Generic::List_1<::System::String*>* AttachTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SceneTransformationVOTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SceneTransformationVOTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SceneTransformationVOTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SceneTransformationVOTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
