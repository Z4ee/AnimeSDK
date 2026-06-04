#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_548B85F97FD63192_OFFSET UNITYSDK_OFFSET(0x19CFB330)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_CD1C78218AFC423F_OFFSET UNITYSDK_OFFSET(0x19D0E200)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_EC461EB4A2BDE4AD_OFFSET UNITYSDK_OFFSET(0x19D069D0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_FC973ACDF2311B99_OFFSET UNITYSDK_OFFSET(0x19D0E0D0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFB2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityByIndex_TypeDefinitionIndex = 22602;

	class TargetFetchParamEntityByIndex : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Int32 Index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC973ACDF2311B99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_FC973ACDF2311B99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_548B85F97FD63192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_548B85F97FD63192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC461EB4A2BDE4AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_EC461EB4A2BDE4AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD1C78218AFC423F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYBYINDEX_METHOD_4_CD1C78218AFC423F_OFFSET))(a1, a2);
		}
	};
}
