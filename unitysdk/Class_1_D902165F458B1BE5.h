#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightShopBuyEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D902165F458B1BE5_METHOD_1_828791371FF7B03E_OFFSET UNITYSDK_OFFSET(0xE0243F0)
#define CLASS_1_D902165F458B1BE5_METHOD_1_8E12B99DA7E62881_OFFSET UNITYSDK_OFFSET(0xE0245F0)
#define CLASS_1_D902165F458B1BE5_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xE024730)
#define CLASS_1_D902165F458B1BE5_METHOD_1_B1E90FC0727A2BBC_OFFSET UNITYSDK_OFFSET(0xE0247B0)
#define CLASS_1_D902165F458B1BE5__CTOR_OFFSET UNITYSDK_OFFSET(0xE024A60)
#define CLASS_1_D902165F458B1BE5__GET_SHOPBUYEVENTS_B__6_0_OFFSET UNITYSDK_OFFSET(0xE024AB0)

inline static constexpr unsigned int Class_1_D902165F458B1BE5_TypeDefinitionIndex = 60004;

class Class_1_D902165F458B1BE5 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_828791371FF7B03E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5_METHOD_1_828791371FF7B03E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>* Method_1_8E12B99DA7E62881()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5_METHOD_1_8E12B99DA7E62881_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Int32 Method_1_B1E90FC0727A2BBC(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5_METHOD_1_B1E90FC0727A2BBC_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightShopBuyEvent* _get_ShopBuyEvents_b__6_0(::System::Int32 i)
	{
		return ((::RPG::Client::GridFightShopBuyEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D902165F458B1BE5__GET_SHOPBUYEVENTS_B__6_0_OFFSET))(this, i);
	}
};
