#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ISubMissionGroupData; }
namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET UNITYSDK_OFFSET(0x9ABEB20)
#define RPG_CLIENT_MAINMISSIONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9ABEAE0)
#define RPG_CLIENT_MAINMISSIONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABEB10)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET UNITYSDK_OFFSET(0x9ABED80)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET UNITYSDK_OFFSET(0x9ABEF60)
#define RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET UNITYSDK_OFFSET(0x9ABEC50)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData___c_TypeDefinitionIndex = 53752;

	class MainMissionData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>** StaticGet___9__108_1()
		{
			return (::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x2A0D0);
		}
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__106_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x2A0D8);
		}
		static ::RPG::Client::MainMissionData___c** StaticGet___9()
		{
			return (::RPG::Client::MainMissionData___c**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x2A0E0);
		}
		static ::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>** StaticGet___9__108_0()
		{
			return (::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x2A0E8);
		}
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__107_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x2A0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddSubMission_b__106_0(::RPG::Client::SubMissionData* x, ::RPG::Client::SubMissionData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET))(this, x, y);
		}

		::System::Int32 _InitMissionData_b__107_0(::RPG::Client::SubMissionData* x, ::RPG::Client::SubMissionData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET))(this, x, y);
		}

		::System::Boolean _GetSubMissionGroups_b__108_0(::RPG::Client::ISubMissionGroupData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET))(this, item);
		}

		::System::Int32 _GetSubMissionGroups_b__108_1(::RPG::Client::ISubMissionGroupData* x, ::RPG::Client::ISubMissionGroupData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET))(this, x, y);
		}
	};
}
