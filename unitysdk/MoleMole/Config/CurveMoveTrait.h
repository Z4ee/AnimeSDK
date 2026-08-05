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

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C468150)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C468250)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4680D0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4695C0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C468920)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C469C10)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C468240)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C469620)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C4689A0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1C469CF0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C469A80)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C469480)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46A050)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C46A060)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C46A070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait_TypeDefinitionIndex = 85807;

	class CurveMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single MinHeight; // 0x18
		::System::Single MaxHeight; // 0x1C
		::System::Single ColliderOpenHeight; // 0x20
		::System::Single TimeOffset; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* TimePeriods; // 0x28
		::System::String* UpCurveKey; // 0x30
		::System::String* DownCurveKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::CurveMoveTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::CurveMoveTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
