#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_2BA77E645B243D08_OFFSET UNITYSDK_OFFSET(0x1E1B6000)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_B953DCBEB53D397D_OFFSET UNITYSDK_OFFSET(0x1E1B6060)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_E037E86D7EA6BAED_OFFSET UNITYSDK_OFFSET(0x1E1B5F80)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_F1E6F5FC5860A770_OFFSET UNITYSDK_OFFSET(0x1E1B6080)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityList_TypeDefinitionIndex = 23641;

	class TargetFetchParamEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E037E86D7EA6BAED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_E037E86D7EA6BAED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2BA77E645B243D08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_2BA77E645B243D08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B953DCBEB53D397D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_B953DCBEB53D397D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1E6F5FC5860A770(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_F1E6F5FC5860A770_OFFSET))(a1, a2);
		}
	};
}
