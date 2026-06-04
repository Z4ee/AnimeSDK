#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_0F33A7CA75FC2777_OFFSET UNITYSDK_OFFSET(0x19D0B5D0)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_939DA2276DAB0093_OFFSET UNITYSDK_OFFSET(0x19CF7780)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_E63769BA9E93D433_OFFSET UNITYSDK_OFFSET(0x19D04810)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_EAFCBA383BD2D242_OFFSET UNITYSDK_OFFSET(0x19D0B660)
#define RPG_GAMECORE_TARGETFETCHAVATARBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAvatarByID_TypeDefinitionIndex = 22645;

	class TargetFetchAvatarByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F33A7CA75FC2777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_0F33A7CA75FC2777_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_939DA2276DAB0093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_939DA2276DAB0093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E63769BA9E93D433(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_E63769BA9E93D433_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EAFCBA383BD2D242(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARBYID_METHOD_4_EAFCBA383BD2D242_OFFSET))(a1, a2);
		}
	};
}
