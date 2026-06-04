#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ISubMissionGroupData; }
namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET UNITYSDK_OFFSET(0xBE9F7D0)
#define RPG_CLIENT_MAINMISSIONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE9F790)
#define RPG_CLIENT_MAINMISSIONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE9F7C0)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET UNITYSDK_OFFSET(0xBE9FA50)
#define RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET UNITYSDK_OFFSET(0xBE9FC30)
#define RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET UNITYSDK_OFFSET(0xBE9F910)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData___c_TypeDefinitionIndex = 61830;

	class MainMissionData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__107_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x50EB0);
		}
		static ::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>** StaticGet___9__108_0()
		{
			return (::System::Func_2<::RPG::Client::ISubMissionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x50EB8);
		}
		static ::System::Comparison_1<::RPG::Client::SubMissionData*>** StaticGet___9__106_0()
		{
			return (::System::Comparison_1<::RPG::Client::SubMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x50EC0);
		}
		static ::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>** StaticGet___9__108_1()
		{
			return (::System::Comparison_1<::RPG::Client::ISubMissionGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x50EC8);
		}
		static ::RPG::Client::MainMissionData___c** StaticGet___9()
		{
			return (::RPG::Client::MainMissionData___c**)Il2CppClass::FromTypeDefinitionIndex(MainMissionData___c_TypeDefinitionIndex)->GetStaticField(0x50ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddSubMission_b__106_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__ADDSUBMISSION_B__106_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _InitMissionData_b__107_0(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__INITMISSIONDATA_B__107_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetSubMissionGroups_b__108_0(::RPG::Client::ISubMissionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetSubMissionGroups_b__108_1(::RPG::Client::ISubMissionGroupData* a1, ::RPG::Client::ISubMissionGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ISubMissionGroupData*, ::RPG::Client::ISubMissionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__GETSUBMISSIONGROUPS_B__108_1_OFFSET))(this, a1, a2);
		}
	};
}
