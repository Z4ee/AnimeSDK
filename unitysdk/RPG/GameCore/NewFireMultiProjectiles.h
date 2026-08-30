#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileDataList; }

#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_16E3981F67F0C209_OFFSET UNITYSDK_OFFSET(0x1CE8DAF0)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_1D339455895AF8E8_OFFSET UNITYSDK_OFFSET(0x1CE8DB30)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8DB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireMultiProjectiles_TypeDefinitionIndex = 22339;

	class NewFireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::NewProjectileDataList*>* NewProjectileConfigList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16E3981F67F0C209(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_16E3981F67F0C209_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D339455895AF8E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_1D339455895AF8E8_OFFSET))(a1, a2);
		}
	};
}
