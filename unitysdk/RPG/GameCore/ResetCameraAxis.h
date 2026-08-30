#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETCAMERAAXIS_METHOD_3_3292BD1E5D1865A7_OFFSET UNITYSDK_OFFSET(0x1D3A4300)
#define RPG_GAMECORE_RESETCAMERAAXIS_METHOD_3_D9B7DF1E0EAEED0A_OFFSET UNITYSDK_OFFSET(0x1D3A43D0)
#define RPG_GAMECORE_RESETCAMERAAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A43C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCameraAxis_TypeDefinitionIndex = 20045;

	class ResetCameraAxis : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3292BD1E5D1865A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCameraAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCameraAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS_METHOD_3_3292BD1E5D1865A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9B7DF1E0EAEED0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetCameraAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetCameraAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCAMERAAXIS_METHOD_3_D9B7DF1E0EAEED0A_OFFSET))(a1, a2);
		}
	};
}
