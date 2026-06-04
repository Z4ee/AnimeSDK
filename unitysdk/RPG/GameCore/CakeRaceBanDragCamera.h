#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA_METHOD_3_648FFB50C087B5DC_OFFSET UNITYSDK_OFFSET(0x195E8DB0)
#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA_METHOD_3_AF5EBA9394855D6D_OFFSET UNITYSDK_OFFSET(0x195E8E30)
#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x195E8E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBanDragCamera_TypeDefinitionIndex = 22977;

	class CakeRaceBanDragCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBan; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_648FFB50C087B5DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBanDragCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBanDragCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA_METHOD_3_648FFB50C087B5DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF5EBA9394855D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBanDragCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBanDragCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA_METHOD_3_AF5EBA9394855D6D_OFFSET))(a1, a2);
		}
	};
}
