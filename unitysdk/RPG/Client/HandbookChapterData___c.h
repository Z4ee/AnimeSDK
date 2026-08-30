#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD393970)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3939B0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET UNITYSDK_OFFSET(0xD393A00)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET UNITYSDK_OFFSET(0xD3939C0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET UNITYSDK_OFFSET(0xD3939E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData___c_TypeDefinitionIndex = 65675;

	class HandbookChapterData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HandbookChapterData___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookChapterData___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0x56EB0);
		}
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_1()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0x56EB8);
		}
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0x56EC0);
		}
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)Il2CppClass::FromTypeDefinitionIndex(HandbookChapterData___c_TypeDefinitionIndex)->GetStaticField(0x56EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetMainPathList_b__48_0(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean _SetMainPathList_b__48_1(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsProcessing_b__49_0(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET))(this, a1);
		}
	};
}
