#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_METHOD_3_6BC4F6675F81C4B1_OFFSET UNITYSDK_OFFSET(0x1D1B2460)
#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_METHOD_3_C5DC5FB9BC79E7BA_OFFSET UNITYSDK_OFFSET(0x1D1B24A0)
#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B2490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IsometricEnableClusterLighting_TypeDefinitionIndex = 21962;

	class IsometricEnableClusterLighting : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BC4F6675F81C4B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IsometricEnableClusterLighting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IsometricEnableClusterLighting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_METHOD_3_6BC4F6675F81C4B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5DC5FB9BC79E7BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IsometricEnableClusterLighting* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IsometricEnableClusterLighting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_METHOD_3_C5DC5FB9BC79E7BA_OFFSET))(a1, a2);
		}
	};
}
