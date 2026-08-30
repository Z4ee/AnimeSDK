#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_52F4A47C29C64CBB;
class Class_1_AF57533F17F060F7;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitComparePinOperator; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E48D8F7A746A218_METHOD_1_02273A74D32E9757_OFFSET UNITYSDK_OFFSET(0xC44B180)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_08EF966FDF3038FA_OFFSET UNITYSDK_OFFSET(0xC44B360)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xC44BC70)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_3FD8D0D438226890_OFFSET UNITYSDK_OFFSET(0xC44B650)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_5574E6B244C57D1D_OFFSET UNITYSDK_OFFSET(0xC44AFD0)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_5BD7248EB848DE2B_OFFSET UNITYSDK_OFFSET(0xC44AF30)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_697CEBDDAD44641A_OFFSET UNITYSDK_OFFSET(0xC44B800)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xC44AEE0)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xC44BB20)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_BD83D9A311EA4A81_OFFSET UNITYSDK_OFFSET(0xC44BBA0)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_C709DC97CE34C54D_OFFSET UNITYSDK_OFFSET(0xC44AF80)
#define CLASS_1_9E48D8F7A746A218_METHOD_1_D76177E8B5AA39FF_OFFSET UNITYSDK_OFFSET(0xC44B2F0)
#define CLASS_1_9E48D8F7A746A218__CTOR_OFFSET UNITYSDK_OFFSET(0xC44B0E0)

inline static constexpr unsigned int Class_1_9E48D8F7A746A218_TypeDefinitionIndex = 74295;

class Class_1_9E48D8F7A746A218 : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* DNPOJOFIAHM; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::Class_1_AF57533F17F060F7*>* BCNGFLBEDGK; // 0x18

	::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218__CTOR_OFFSET))(this, a1);
	}

	::Class_1_52F4A47C29C64CBB* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_52F4A47C29C64CBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_1_5BD7248EB848DE2B()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_5BD7248EB848DE2B_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* Method_1_C709DC97CE34C54D()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_C709DC97CE34C54D_OFFSET))(this);
	}

	static ::Class_1_9E48D8F7A746A218* Method_1_5574E6B244C57D1D(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::Class_1_9E48D8F7A746A218*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_5574E6B244C57D1D_OFFSET))(a1);
	}

	::System::Void Method_1_02273A74D32E9757()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_02273A74D32E9757_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_D76177E8B5AA39FF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_D76177E8B5AA39FF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_08EF966FDF3038FA(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_08EF966FDF3038FA_OFFSET))(this, a1);
	}

	::Class_1_AF57533F17F060F7* Method_1_3FD8D0D438226890(::RPG::GameCore::RelicType a1)
	{
		return ((::Class_1_AF57533F17F060F7*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_3FD8D0D438226890_OFFSET))(this, a1);
	}

	::System::Void Method_1_697CEBDDAD44641A(::Class_1_AF57533F17F060F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF57533F17F060F7*))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_697CEBDDAD44641A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_BD83D9A311EA4A81()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_BD83D9A311EA4A81_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E48D8F7A746A218_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}
};
