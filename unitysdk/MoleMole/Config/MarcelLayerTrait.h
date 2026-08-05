#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1350EA10)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1350E300)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1350E2F0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350E620)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1350E410)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1350E8F0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1350E400)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350E6B0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1350E490)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1350EA90)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1350E710)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1350E4C0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1350EBF0)
#define MOLEMOLE_CONFIG_MARCELLAYERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1350EC00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MarcelLayerTrait_TypeDefinitionIndex = 89058;

	class MarcelLayerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MarcelLayerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MarcelLayerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MarcelLayerTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MarcelLayerTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entity);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MARCELLAYERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
