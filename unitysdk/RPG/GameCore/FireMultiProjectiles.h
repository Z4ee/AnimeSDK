#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileDataList; }

#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_750C4C6A7CBF11A5_OFFSET UNITYSDK_OFFSET(0x188E7850)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_871A541457028307_OFFSET UNITYSDK_OFFSET(0x188E77D0)
#define RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x188E7820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectiles_TypeDefinitionIndex = 21474;

	class FireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileDataList*>* ProjectileConfigList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_871A541457028307(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_871A541457028307_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_750C4C6A7CBF11A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_4_750C4C6A7CBF11A5_OFFSET))(a1, a2);
		}
	};
}
