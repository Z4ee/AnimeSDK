#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STAGEVERSIONDATA_METHOD_2_931F6F78ECACBEF0_OFFSET UNITYSDK_OFFSET(0x1CAECCC0)
#define RPG_GAMECORE_STAGEVERSIONDATA_METHOD_2_FF9B108871914036_OFFSET UNITYSDK_OFFSET(0x1CAECBD0)
#define RPG_GAMECORE_STAGEVERSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVersionData_TypeDefinitionIndex = 18909;

	class StageVersionData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Byte LightVersion; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF9B108871914036(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVersionData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVersionData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA_METHOD_2_FF9B108871914036_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_931F6F78ECACBEF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVERSIONDATA_METHOD_2_931F6F78ECACBEF0_OFFSET))(a1, a2);
		}
	};
}
