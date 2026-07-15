#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class MemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1984F8A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1984F8E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLYTEAM_B__5_0_OFFSET UNITYSDK_OFFSET(0x1984FEA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x1984F8F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_1_OFFSET UNITYSDK_OFFSET(0x1984F960)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_2_OFFSET UNITYSDK_OFFSET(0x1984F980)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1984FA80)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_1_OFFSET UNITYSDK_OFFSET(0x1984FB40)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_2_OFFSET UNITYSDK_OFFSET(0x1984FC00)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_3_OFFSET UNITYSDK_OFFSET(0x1984FD10)
#define RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_4_OFFSET UNITYSDK_OFFSET(0x1984FE00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportHelper___c_TypeDefinitionIndex = 64520;

	class RogueTournBuildRefReportHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DB0);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::String*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DB8);
		}
		static ::RPG::Client::RogueTournBuildRefReportHelper___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefReportHelper___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DC0);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::MongoObjectId>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::MongoObjectId>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DC8);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Int32>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DD0);
		}
		static ::System::Func_2<::RPG::Client::MemberData*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::MemberData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DD8);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DE0);
		}
		static ::System::Func_2<::RPG::Client::MemberData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MemberData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DE8);
		}
		static ::System::Func_2<::RPG::Client::IRogueMiracleInGame*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::RPG::Client::IRogueMiracleInGame*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DF0);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefReportHelper___c_TypeDefinitionIndex)->GetStaticField(0x28DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _ReportBuildRefApply_b__0_0(::RPG::Client::MemberData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_0_OFFSET))(this, a1);
		}

		::System::UInt32 _ReportBuildRefApply_b__0_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _ReportBuildRefApply_b__0_2(::RPG::Client::IRogueMiracleInGame* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueMiracleInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLY_B__0_2_OFFSET))(this, a1);
		}

		::System::Boolean _ReportBuildRefFilter_b__2_0(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _ReportBuildRefFilter_b__2_1(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_1_OFFSET))(this, a1);
		}

		::System::String* _ReportBuildRefFilter_b__2_2(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_2_OFFSET))(this, a1);
		}

		::RPG::Client::MongoObjectId _ReportBuildRefFilter_b__2_3(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_3_OFFSET))(this, a1);
		}

		::System::Int32 _ReportBuildRefFilter_b__2_4(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFFILTER_B__2_4_OFFSET))(this, a1);
		}

		::System::UInt32 _ReportBuildRefApplyTeam_b__5_0(::RPG::Client::MemberData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFREPORTHELPER___C__REPORTBUILDREFAPPLYTEAM_B__5_0_OFFSET))(this, a1);
		}
	};
}
