#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRYREQUESTENTERREGION_METHOD_3_A325C1008CE911CF_OFFSET UNITYSDK_OFFSET(0x190CF9D0)
#define RPG_GAMECORE_TRYREQUESTENTERREGION_METHOD_3_AAC5373C73794E50_OFFSET UNITYSDK_OFFSET(0x190CFB30)
#define RPG_GAMECORE_TRYREQUESTENTERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x190CFA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryRequestEnterRegion_TypeDefinitionIndex = 19736;

	class TryRequestEnterRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TargetRegionID; // 0x18
		::RPG::GameCore::DynamicFloat* TargetRegionID2; // 0x20
		::RPG::GameCore::DynamicFloat* LoadingRate; // 0x28
		::RPG::GameCore::DynamicFloat* CancelDelay; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EnterFinishCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A325C1008CE911CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryRequestEnterRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryRequestEnterRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION_METHOD_3_A325C1008CE911CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAC5373C73794E50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYREQUESTENTERREGION_METHOD_3_AAC5373C73794E50_OFFSET))(a1, a2);
		}
	};
}
