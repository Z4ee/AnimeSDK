#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_98DEB3F65623508B_OFFSET UNITYSDK_OFFSET(0x174A6B40)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_E7F93F7B2FCA272F_OFFSET UNITYSDK_OFFSET(0x174A6A90)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x174A6B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierTarget_TypeDefinitionIndex = 16093;

	class PhotoGraphAimContaierTarget : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7F93F7B2FCA272F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_E7F93F7B2FCA272F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98DEB3F65623508B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_98DEB3F65623508B_OFFSET))(a1, a2);
		}
	};
}
