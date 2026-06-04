#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookChapterData; }
namespace RPG::Client { class HandbookRogueData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCFDC40)
#define RPG_CLIENT_HANDBOOKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCFDC70)
#define RPG_CLIENT_HANDBOOKMODULE___C__GENERATECHAPTERDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0xBCFDC80)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSHOWROGUEDATALIST_B__149_0_OFFSET UNITYSDK_OFFSET(0xBCFDF70)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDMAINPATHLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xBCFDCD0)
#define RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDSUBPATHLIST_B__12_0_OFFSET UNITYSDK_OFFSET(0xBCFDF30)
#define RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUEDLC_B__150_0_OFFSET UNITYSDK_OFFSET(0xBCFE140)
#define RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUENOUS_B__151_0_OFFSET UNITYSDK_OFFSET(0xBCFE1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c_TypeDefinitionIndex = 61361;

	class HandbookModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__150_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41EF0);
		}
		static ::System::Comparison_1<::RPG::Client::HandbookChapterData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookChapterData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41EF8);
		}
		static ::System::Comparison_1<::RPG::Client::MissionChronicleSubPathData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::MissionChronicleSubPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41F00);
		}
		static ::System::Comparison_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41F08);
		}
		static ::RPG::Client::HandbookModule___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookModule___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41F10);
		}
		static ::System::Action** StaticGet___9__151_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41F18);
		}
		static ::System::Comparison_1<::RPG::Client::HandbookRogueData*>** StaticGet___9__149_0()
		{
			return (::System::Comparison_1<::RPG::Client::HandbookRogueData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookModule___c_TypeDefinitionIndex)->GetStaticField(0x41F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateChapterData_b__8_0(::RPG::Client::HandbookChapterData* a1, ::RPG::Client::HandbookChapterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookChapterData*, ::RPG::Client::HandbookChapterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GENERATECHAPTERDATA_B__8_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSortedMainPathList_b__11_0(::RPG::Client::MissionChronicleMainPathData* a1, ::RPG::Client::MissionChronicleMainPathData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDMAINPATHLIST_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetSortedSubPathList_b__12_0(::RPG::Client::MissionChronicleSubPathData* a1, ::RPG::Client::MissionChronicleSubPathData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSORTEDSUBPATHLIST_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetShowRogueDataList_b__149_0(::RPG::Client::HandbookRogueData* a1, ::RPG::Client::HandbookRogueData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HandbookRogueData*, ::RPG::Client::HandbookRogueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GETSHOWROGUEDATALIST_B__149_0_OFFSET))(this, a1, a2);
		}

		::System::Void _GotoToGuideRogueDLC_b__150_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUEDLC_B__150_0_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogueNous_b__151_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__GOTOTOGUIDEROGUENOUS_B__151_0_OFFSET))(this);
		}
	};
}
