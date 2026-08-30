#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_4B12DA7AE76FE0CD_OFFSET UNITYSDK_OFFSET(0x1D5AAFC0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_5897A32B4225D5D4_OFFSET UNITYSDK_OFFSET(0x1D5AB0C0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_74E3EDA2F5708BD0_OFFSET UNITYSDK_OFFSET(0x1D5AB100)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_8CFD2E091BF9E868_OFFSET UNITYSDK_OFFSET(0x1D5AB060)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeSource_TypeDefinitionIndex = 23667;

	class TargetFetchElationTimeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4B12DA7AE76FE0CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_4B12DA7AE76FE0CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CFD2E091BF9E868(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_8CFD2E091BF9E868_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5897A32B4225D5D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_5897A32B4225D5D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74E3EDA2F5708BD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMESOURCE_METHOD_4_74E3EDA2F5708BD0_OFFSET))(a1, a2);
		}
	};
}
