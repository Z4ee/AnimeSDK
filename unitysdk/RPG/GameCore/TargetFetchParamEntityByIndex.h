#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_1DA8DDBB5213D997_OFFSET UNITYSDK_OFFSET(0x1E1B5C40)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_548B85F97FD63192_OFFSET UNITYSDK_OFFSET(0x1E1B5D10)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_64B97FA6C87CB365_OFFSET UNITYSDK_OFFSET(0x1E1B5DC0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_DA3ED8F7000B24EA_OFFSET UNITYSDK_OFFSET(0x1E1B5DF0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityByIndex_TypeDefinitionIndex = 23645;

	class TargetFetchParamEntityByIndex : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Int32 Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1DA8DDBB5213D997(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_1DA8DDBB5213D997_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_548B85F97FD63192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_548B85F97FD63192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64B97FA6C87CB365(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_64B97FA6C87CB365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA3ED8F7000B24EA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_DA3ED8F7000B24EA_OFFSET))(a1, a2);
		}
	};
}
