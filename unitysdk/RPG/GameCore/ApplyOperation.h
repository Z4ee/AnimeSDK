#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_APPLYOPERATION_METHOD_3_8561C2DC7FB90A3F_OFFSET UNITYSDK_OFFSET(0x1947CC30)
#define RPG_GAMECORE_APPLYOPERATION_METHOD_3_C4E96B1947524B0E_OFFSET UNITYSDK_OFFSET(0x1947CBA0)
#define RPG_GAMECORE_APPLYOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1947CC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyOperation_TypeDefinitionIndex = 22356;

	class ApplyOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4E96B1947524B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_METHOD_3_C4E96B1947524B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8561C2DC7FB90A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYOPERATION_METHOD_3_8561C2DC7FB90A3F_OFFSET))(a1, a2);
		}
	};
}
