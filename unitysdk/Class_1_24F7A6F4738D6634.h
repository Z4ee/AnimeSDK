#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantAIService_DelayBehavior; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24F7A6F4738D6634_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8C2B6F0)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_27F94A46B55AF447_OFFSET UNITYSDK_OFFSET(0x8C2C1D0)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_2F226633FD5312E9_OFFSET UNITYSDK_OFFSET(0x8C2CA00)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_526D3BFDA0C2BD50_OFFSET UNITYSDK_OFFSET(0x8C2C540)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_61A87885FD61D87F_OFFSET UNITYSDK_OFFSET(0x8C2C370)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_A01029E3B5821EFA_OFFSET UNITYSDK_OFFSET(0x8C2CCE0)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_BB935EA2EEDC620F_OFFSET UNITYSDK_OFFSET(0x8C2C7F0)
#define CLASS_1_24F7A6F4738D6634_METHOD_1_E510DCAFC00987CB_OFFSET UNITYSDK_OFFSET(0x8C2D030)
#define CLASS_1_24F7A6F4738D6634__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2B5D0)

inline static constexpr unsigned int Class_1_24F7A6F4738D6634_TypeDefinitionIndex = 62929;

class Class_1_24F7A6F4738D6634 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_1; // 0x10
	::Class_2_43D1AA62A6D00FFF* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x20
	::Class_3_F4528A5C0F861AF2* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_27F94A46B55AF447(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_27F94A46B55AF447_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB935EA2EEDC620F(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_BB935EA2EEDC620F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F226633FD5312E9(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_2F226633FD5312E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A01029E3B5821EFA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBehaviorStateContentItem* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBehaviorStateContentItem*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_A01029E3B5821EFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_61A87885FD61D87F(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_61A87885FD61D87F_OFFSET))(this, a1);
	}

	::System::Void Method_1_526D3BFDA0C2BD50(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantAIService_DelayBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_526D3BFDA0C2BD50_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E510DCAFC00987CB(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24F7A6F4738D6634_METHOD_1_E510DCAFC00987CB_OFFSET))(this, a1, a2, a3);
	}
};
