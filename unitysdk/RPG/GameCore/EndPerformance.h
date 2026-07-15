#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDPERFORMANCE_METHOD_3_9AD2305CA26BD1FF_OFFSET UNITYSDK_OFFSET(0x1C04F930)
#define RPG_GAMECORE_ENDPERFORMANCE_METHOD_3_C09B7CD0D9E59CC2_OFFSET UNITYSDK_OFFSET(0x1C04FA00)
#define RPG_GAMECORE_ENDPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C04F9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPerformance_TypeDefinitionIndex = 21041;

	class EndPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AD2305CA26BD1FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE_METHOD_3_9AD2305CA26BD1FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C09B7CD0D9E59CC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPERFORMANCE_METHOD_3_C09B7CD0D9E59CC2_OFFSET))(a1, a2);
		}
	};
}
