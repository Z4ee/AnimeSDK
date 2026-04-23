#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVariable.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_METHOD_3_0C47CFA1EBF050A7_OFFSET UNITYSDK_OFFSET(0x18A6D690)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_METHOD_3_211AB275A4295C7A_OFFSET UNITYSDK_OFFSET(0x18A6CE20)
#define RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVariableFixPoint_TypeDefinitionIndex = 17945;

	class LittleGameLevelVariableFixPoint : public ::RPG::GameCore::LittleGameLevelVariable
	{
	public:
		::RPG::GameCore::FixPoint DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C47CFA1EBF050A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableFixPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableFixPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_METHOD_3_0C47CFA1EBF050A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_211AB275A4295C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVariableFixPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVariableFixPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARIABLEFIXPOINT_METHOD_3_211AB275A4295C7A_OFFSET))(a1, a2);
		}
	};
}
