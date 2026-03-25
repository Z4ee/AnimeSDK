#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileDataList; }

#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_4D824E7070FE6859_OFFSET UNITYSDK_OFFSET(0x17471BC0)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_EF863CAC768C499B_OFFSET UNITYSDK_OFFSET(0x17471C40)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x17471C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireMultiProjectiles_TypeDefinitionIndex = 20773;

	class NewFireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::NewProjectileDataList*>* NewProjectileConfigList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D824E7070FE6859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_4D824E7070FE6859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF863CAC768C499B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_METHOD_4_EF863CAC768C499B_OFFSET))(a1, a2);
		}
	};
}
