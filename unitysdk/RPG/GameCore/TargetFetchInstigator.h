#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_C169270D61F3623A_OFFSET UNITYSDK_OFFSET(0x177BEC40)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET UNITYSDK_OFFSET(0x177B5A50)
#define RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x177B5A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchInstigator_TypeDefinitionIndex = 22204;

	class TargetFetchInstigator : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C169270D61F3623A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_C169270D61F3623A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1214B9F5310D3A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHINSTIGATOR_METHOD_4_D1214B9F5310D3A8_OFFSET))(a1, a2);
		}
	};
}
