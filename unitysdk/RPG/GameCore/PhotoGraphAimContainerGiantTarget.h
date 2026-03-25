#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_METHOD_3_40103ECDFA8A8740_OFFSET UNITYSDK_OFFSET(0x174A7890)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_METHOD_3_7811DCE9F74636A4_OFFSET UNITYSDK_OFFSET(0x174A7940)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerGiantTarget_TypeDefinitionIndex = 16098;

	class PhotoGraphAimContainerGiantTarget : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x38
		::System::Single Radius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40103ECDFA8A8740(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_METHOD_3_40103ECDFA8A8740_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7811DCE9F74636A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerGiantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERGIANTTARGET_METHOD_3_7811DCE9F74636A4_OFFSET))(a1, a2);
		}
	};
}
