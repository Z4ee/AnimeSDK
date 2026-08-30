#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_16EA0FD679CFED2C_OFFSET UNITYSDK_OFFSET(0x1E16DB50)
#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1B8ECA01A6F43411_OFFSET UNITYSDK_OFFSET(0x1E16DA50)
#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1E259FB9F063C03C_OFFSET UNITYSDK_OFFSET(0x1E16DAD0)
#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_854B2D0D0C227AF9_OFFSET UNITYSDK_OFFSET(0x1E16DB30)
#define RPG_GAMECORE_TARGETFETCHCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16DAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCaster_TypeDefinitionIndex = 23632;

	class TargetFetchCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B8ECA01A6F43411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1B8ECA01A6F43411_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E259FB9F063C03C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1E259FB9F063C03C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_854B2D0D0C227AF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_854B2D0D0C227AF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_16EA0FD679CFED2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_16EA0FD679CFED2C_OFFSET))(a1, a2);
		}
	};
}
