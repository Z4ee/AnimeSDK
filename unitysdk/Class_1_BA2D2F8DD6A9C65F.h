#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_5.h"
#include "unitysdk/System/Object.h"

class Class_1_855C52860E843240;
namespace Proto { class ItemCost; }
namespace RPG::Client { class AvatarGrowUpBeforeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_0167188FEC462F46_1_OFFSET UNITYSDK_OFFSET(0x9647AB0)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_0167188FEC462F46_OFFSET UNITYSDK_OFFSET(0x9647880)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_480659A846D89E03_OFFSET UNITYSDK_OFFSET(0x9647C70)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_498FD6606083B549_OFFSET UNITYSDK_OFFSET(0x9647670)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_1_OFFSET UNITYSDK_OFFSET(0x96479C0)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_2_OFFSET UNITYSDK_OFFSET(0x9647B90)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_OFFSET UNITYSDK_OFFSET(0x9647580)
#define CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_D0F8E39A2D119616_OFFSET UNITYSDK_OFFSET(0x9647960)
#define CLASS_1_BA2D2F8DD6A9C65F__CTOR_OFFSET UNITYSDK_OFFSET(0x9647470)

inline static constexpr unsigned int Class_1_BA2D2F8DD6A9C65F_TypeDefinitionIndex = 57847;

class Class_1_BA2D2F8DD6A9C65F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* Field_1_1; // 0x18
	::Class_1_855C52860E843240* Field_1_0; // 0x20

	::System::Void _ctor(::Class_1_855C52860E843240* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_855C52860E843240*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_960E55242D9CEEC5(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_1_0167188FEC462F46(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_0167188FEC462F46_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0F8E39A2D119616(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_D0F8E39A2D119616_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_960E55242D9CEEC5_1(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_1_0167188FEC462F46_1(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_0167188FEC462F46_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_960E55242D9CEEC5_2(::Struct_2_019938BC9C50B169_5& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_5&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_960E55242D9CEEC5_2_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_480659A846D89E03(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_480659A846D89E03_OFFSET))(this, a1, a2);
	}

	::RPG::Client::AvatarGrowUpBeforeData* Method_1_498FD6606083B549(::Struct_2_019938BC9C50B169_1& a1, ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>* a2)
	{
		return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&, ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::RPG::Client::AvatarGrowUpBeforeData*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA2D2F8DD6A9C65F_METHOD_1_498FD6606083B549_OFFSET))(this, a1, a2);
	}
};
