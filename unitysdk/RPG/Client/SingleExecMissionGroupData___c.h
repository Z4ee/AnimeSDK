#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__ADDSUBMISSION_B__1_0_OFFSET UNITYSDK_OFFSET(0xC8DFFF0)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8DFFB0)
#define RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8DFFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleExecMissionGroupData___c_TypeDefinitionIndex = 61890;

	class SingleExecMissionGroupData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(SingleExecMissionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x476E0);
		}
		static ::RPG::Client::SingleExecMissionGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::SingleExecMissionGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(SingleExecMissionGroupData___c_TypeDefinitionIndex)->GetStaticField(0x476E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddSubMission_b__1_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEEXECMISSIONGROUPDATA___C__ADDSUBMISSION_B__1_0_OFFSET))(this, a1, a2);
		}
	};
}
