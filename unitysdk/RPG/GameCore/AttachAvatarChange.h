#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_E5512ABD59C718E8_OFFSET UNITYSDK_OFFSET(0x186ACFB0)
#define RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_EC72F70D496E573F_OFFSET UNITYSDK_OFFSET(0x186AD0D0)
#define RPG_GAMECORE_ATTACHAVATARCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x186AD050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachAvatarChange_TypeDefinitionIndex = 22588;

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

		static ::System::Void Method_3_E5512ABD59C718E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachAvatarChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachAvatarChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_E5512ABD59C718E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC72F70D496E573F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachAvatarChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHAVATARCHANGE_METHOD_3_EC72F70D496E573F_OFFSET))(a1, a2);
		}
	};
}
