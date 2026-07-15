#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_1231DACA80ADEE46_OFFSET UNITYSDK_OFFSET(0x1B4BE010)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_98DEB3F65623508B_OFFSET UNITYSDK_OFFSET(0x1B4BE0D0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BE090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierTarget_TypeDefinitionIndex = 16816;

	class PhotoGraphAimContaierTarget : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1231DACA80ADEE46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_1231DACA80ADEE46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98DEB3F65623508B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERTARGET_METHOD_3_98DEB3F65623508B_OFFSET))(a1, a2);
		}
	};
}
