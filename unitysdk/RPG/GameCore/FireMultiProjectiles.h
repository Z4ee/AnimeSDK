#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileDataList; }

#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_D9E7272D7EA8CEA2_OFFSET UNITYSDK_OFFSET(0x1D09D910)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_ECCA1CB1D3EB455B_OFFSET UNITYSDK_OFFSET(0x1D09D8D0)
#define RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09D900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectiles_TypeDefinitionIndex = 22338;

	class FireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileDataList*>* ProjectileConfigList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ECCA1CB1D3EB455B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_ECCA1CB1D3EB455B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9E7272D7EA8CEA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_D9E7272D7EA8CEA2_OFFSET))(a1, a2);
		}
	};
}
