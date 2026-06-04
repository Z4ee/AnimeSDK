#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_5D0420C2BC146F68;
class Class_1_9CD95AD0A2E83C8D;
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace RPG::GameCore { class PlayerOutfitDetailRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70480EB58AE1B9EC_METHOD_1_169AEE44E296B520_OFFSET UNITYSDK_OFFSET(0xA8D1E80)
#define CLASS_1_70480EB58AE1B9EC_METHOD_1_CD02F03D9149FAC8_OFFSET UNITYSDK_OFFSET(0xA8D2120)
#define CLASS_1_70480EB58AE1B9EC_METHOD_1_DE77E4F77718686A_OFFSET UNITYSDK_OFFSET(0xA8D2660)
#define CLASS_1_70480EB58AE1B9EC_METHOD_1_E2F7986F4EE23105_OFFSET UNITYSDK_OFFSET(0xA8D24D0)
#define CLASS_1_70480EB58AE1B9EC_METHOD_1_E73D7EF32BC70C84_OFFSET UNITYSDK_OFFSET(0xA8D1F20)

inline static constexpr unsigned int Class_1_70480EB58AE1B9EC_TypeDefinitionIndex = 58472;

class Class_1_70480EB58AE1B9EC : public ::System::Object
{
public:
	static ::RPG::Client::AvatarOutfitUnit* Method_1_169AEE44E296B520(::RPG::GameCore::PlayerOutfitBaseRow* a1, ::RPG::Client::AvatarOutfitSlot* a2)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::RPG::GameCore::PlayerOutfitBaseRow*, ::RPG::Client::AvatarOutfitSlot*))((::PBYTE)hIl2Cpp + CLASS_1_70480EB58AE1B9EC_METHOD_1_169AEE44E296B520_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>* Method_1_CD02F03D9149FAC8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70480EB58AE1B9EC_METHOD_1_CD02F03D9149FAC8_OFFSET))(a1, a2);
	}

	static ::Class_1_9CD95AD0A2E83C8D* Method_1_E2F7986F4EE23105(::RPG::GameCore::PlayerOutfitDetailRow* a1, ::RPG::Client::ItemData* a2, ::Class_1_5D0420C2BC146F68* a3)
	{
		return ((::Class_1_9CD95AD0A2E83C8D*(*)(::RPG::GameCore::PlayerOutfitDetailRow*, ::RPG::Client::ItemData*, ::Class_1_5D0420C2BC146F68*))((::PBYTE)hIl2Cpp + CLASS_1_70480EB58AE1B9EC_METHOD_1_E2F7986F4EE23105_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>* Method_1_E73D7EF32BC70C84(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TargetGenderType, ::Class_1_9CD95AD0A2E83C8D*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70480EB58AE1B9EC_METHOD_1_E73D7EF32BC70C84_OFFSET))(a1);
	}

	static ::Class_1_9CD95AD0A2E83C8D* Method_1_DE77E4F77718686A(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
	{
		return ((::Class_1_9CD95AD0A2E83C8D*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + CLASS_1_70480EB58AE1B9EC_METHOD_1_DE77E4F77718686A_OFFSET))(a1, a2);
	}
};
