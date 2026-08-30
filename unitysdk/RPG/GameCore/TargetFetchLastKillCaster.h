#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET UNITYSDK_OFFSET(0x1D5AB9A0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_3CC01C72FC7BFDD4_OFFSET UNITYSDK_OFFSET(0x1D5ABA40)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_4493618A12F64E09_OFFSET UNITYSDK_OFFSET(0x1D5AB900)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_7140C6807B96C2D8_OFFSET UNITYSDK_OFFSET(0x1D5ABA00)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillCaster_TypeDefinitionIndex = 23728;

	class TargetFetchLastKillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4493618A12F64E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_4493618A12F64E09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34D1730DF36A13B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7140C6807B96C2D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_7140C6807B96C2D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3CC01C72FC7BFDD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_3CC01C72FC7BFDD4_OFFSET))(a1, a2);
		}
	};
}
