#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_APPLYOPERATION_METHOD_3_B413468E2CB13815_OFFSET UNITYSDK_OFFSET(0x16F84DD0)
#define RPG_GAMECORE_APPLYOPERATION_METHOD_3_D89ED38EF0C12156_OFFSET UNITYSDK_OFFSET(0x16F84E60)
#define RPG_GAMECORE_APPLYOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyOperation_TypeDefinitionIndex = 21894;

	class ApplyOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B413468E2CB13815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_METHOD_3_B413468E2CB13815_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D89ED38EF0C12156(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_METHOD_3_D89ED38EF0C12156_OFFSET))(a1, a2);
		}
	};
}
