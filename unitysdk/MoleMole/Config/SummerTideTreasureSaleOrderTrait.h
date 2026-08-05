#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192119C0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19211210)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19211200)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19211530)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19211320)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19211800)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19211310)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192115C0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192113A0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19211620)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192113D0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19211AF0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19211B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummerTideTreasureSaleOrderTrait_TypeDefinitionIndex = 42776;

	class SummerTideTreasureSaleOrderTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleOrderTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleOrderTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleOrderTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleOrderTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
