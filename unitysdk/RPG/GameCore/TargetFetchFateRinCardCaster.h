#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_4D182CB262BC1140_OFFSET UNITYSDK_OFFSET(0x1E16EA80)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_8319BDBD838C610D_OFFSET UNITYSDK_OFFSET(0x1E16EAA0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_880AD15FBDF6C04D_OFFSET UNITYSDK_OFFSET(0x1E16EA20)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_C9F524EDF280C7E8_OFFSET UNITYSDK_OFFSET(0x1E16E9A0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16EA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardCaster_TypeDefinitionIndex = 23738;

	class TargetFetchFateRinCardCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C9F524EDF280C7E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_C9F524EDF280C7E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_880AD15FBDF6C04D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_880AD15FBDF6C04D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D182CB262BC1140(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_4D182CB262BC1140_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8319BDBD838C610D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDCASTER_METHOD_4_8319BDBD838C610D_OFFSET))(a1, a2);
		}
	};
}
