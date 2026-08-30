#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeliobusSkillData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A07EC10)
#define RPG_CLIENT_HELIOBUSMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07EC40)
#define RPG_CLIENT_HELIOBUSMODULE___C___INITHELIOBUSSKILLDATA_B__66_0_OFFSET UNITYSDK_OFFSET(0x1A07EC50)
#define RPG_CLIENT_HELIOBUSMODULE___C___PREPAREMAINMISSIONDATA_B__97_0_OFFSET UNITYSDK_OFFSET(0x1A07ECA0)
#define RPG_CLIENT_HELIOBUSMODULE___C___PREPAREMAINMISSIONDATA_B__97_1_OFFSET UNITYSDK_OFFSET(0x198102E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c_TypeDefinitionIndex = 65729;

	class HeliobusModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>** StaticGet___9__97_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusModule___c_TypeDefinitionIndex)->GetStaticField(0x57CE0);
		}
		static ::RPG::Client::HeliobusModule___c** StaticGet___9()
		{
			return (::RPG::Client::HeliobusModule___c**)Il2CppClass::FromTypeDefinitionIndex(HeliobusModule___c_TypeDefinitionIndex)->GetStaticField(0x57CE8);
		}
		static ::System::Comparison_1<::RPG::Client::HeliobusSkillData*>** StaticGet___9__66_0()
		{
			return (::System::Comparison_1<::RPG::Client::HeliobusSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusModule___c_TypeDefinitionIndex)->GetStaticField(0x57CF0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__97_1()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusModule___c_TypeDefinitionIndex)->GetStaticField(0x57CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitHeliobusSkillData_b__66_0(::RPG::Client::HeliobusSkillData* a1, ::RPG::Client::HeliobusSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HeliobusSkillData*, ::RPG::Client::HeliobusSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C___INITHELIOBUSSKILLDATA_B__66_0_OFFSET))(this, a1, a2);
		}

		::System::Void __PrepareMainMissionData_b__97_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C___PREPAREMAINMISSIONDATA_B__97_0_OFFSET))(this, a1);
		}

		::System::UInt32 __PrepareMainMissionData_b__97_1(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C___PREPAREMAINMISSIONDATA_B__97_1_OFFSET))(this, a1);
		}
	};
}
