#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_0D46849FA1E9409D_OFFSET UNITYSDK_OFFSET(0x19D05B50)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET UNITYSDK_OFFSET(0x19CF9940)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_3CC01C72FC7BFDD4_OFFSET UNITYSDK_OFFSET(0x19D0CF60)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_65FD4FD173A774F6_OFFSET UNITYSDK_OFFSET(0x19D0CE80)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillCaster_TypeDefinitionIndex = 22685;

	class TargetFetchLastKillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_65FD4FD173A774F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_65FD4FD173A774F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34D1730DF36A13B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D46849FA1E9409D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_0D46849FA1E9409D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3CC01C72FC7BFDD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_3CC01C72FC7BFDD4_OFFSET))(a1, a2);
		}
	};
}
