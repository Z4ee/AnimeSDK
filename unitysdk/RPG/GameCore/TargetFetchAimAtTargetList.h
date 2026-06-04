#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AimTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_3E5D361B994DA2E6_OFFSET UNITYSDK_OFFSET(0x19D0A9C0)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_4279B81DCECDD3CA_OFFSET UNITYSDK_OFFSET(0x19D0A940)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_64828F4C5691276A_OFFSET UNITYSDK_OFFSET(0x19D04130)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET UNITYSDK_OFFSET(0x19CF6BD0)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF6B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAimAtTargetList_TypeDefinitionIndex = 22707;

	class TargetFetchAimAtTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::AimTargetType TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4279B81DCECDD3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_4279B81DCECDD3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C11CF74121445EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64828F4C5691276A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_64828F4C5691276A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E5D361B994DA2E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_3E5D361B994DA2E6_OFFSET))(a1, a2);
		}
	};
}
