#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_76731230AE1ABC6C_OFFSET UNITYSDK_OFFSET(0x1CE2B1A0)
#define RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_98B493D44D99BC97_OFFSET UNITYSDK_OFFSET(0x1CE2B0A0)
#define RPG_GAMECORE_ATTACHAVATARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2B130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachAvatarChange_TypeDefinitionIndex = 23342;

	class AttachAvatarChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigGroupName; // 0x18
		::RPG::GameCore::DynamicFloat* NewAvatarID; // 0x20
		::RPG::GameCore::DynamicFloat* NewAvatarEnhancedID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeNewAvatarCreate; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarCreate; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarRefresh; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98B493D44D99BC97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachAvatarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachAvatarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_98B493D44D99BC97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76731230AE1ABC6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachAvatarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_76731230AE1ABC6C_OFFSET))(a1, a2);
		}
	};
}
