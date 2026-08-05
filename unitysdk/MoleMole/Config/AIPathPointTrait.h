#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12EEE110)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12EEE100)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12EEE5D0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12EEE220)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12EEEA10)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12EEE210)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12EEE630)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12EEE2A0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x12EEEAF0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12EEE860)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12EEE470)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12EEEC00)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12EEEC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AIPathPointTrait_TypeDefinitionIndex = 67194;

	class AIPathPointTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsSlideAILevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AIPathPointTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AIPathPointTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
