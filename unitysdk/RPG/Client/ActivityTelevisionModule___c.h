#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C77050)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C77080)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C___INITMODULERELATEDMISSIONDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0x9C77090)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c_TypeDefinitionIndex = 57193;

	class ActivityTelevisionModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityTelevisionModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityTelevisionModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionModule___c_TypeDefinitionIndex)->GetStaticField(0x3E710);
		}
		static ::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionModule___c_TypeDefinitionIndex)->GetStaticField(0x3E718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __InitModuleRelatedMissionData_b__38_0(::RPG::Client::ActivityTelevisionData* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C___INITMODULERELATEDMISSIONDATA_B__38_0_OFFSET))(this, data);
		}
	};
}
