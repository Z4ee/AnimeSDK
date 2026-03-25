#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9019E80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9019EB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C___INITMODULERELATEDMISSIONDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0x9019EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c_TypeDefinitionIndex = 50334;

	class ActivityTelevisionModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityTelevisionModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityTelevisionModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionModule___c_TypeDefinitionIndex)->GetStaticField(0x30630);
		}
		static ::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionModule___c_TypeDefinitionIndex)->GetStaticField(0x30638);
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
