#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_52F4A47C29C64CBB;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CE91B9CF6CB59927_METHOD_1_0475BF03848254F8_OFFSET UNITYSDK_OFFSET(0x18FEA820)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_1AD7BD80EF0FCE8B_OFFSET UNITYSDK_OFFSET(0x18FEA240)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x18FEA390)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_48BE40EDE06FB381_OFFSET UNITYSDK_OFFSET(0x18FEA8D0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_5574E6B244C57D1D_OFFSET UNITYSDK_OFFSET(0x18FE93F0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_5A30DCA22339BFF6_OFFSET UNITYSDK_OFFSET(0x18FE97A0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_5BD7248EB848DE2B_OFFSET UNITYSDK_OFFSET(0x18FE93A0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_7E4FEE322D0EA011_OFFSET UNITYSDK_OFFSET(0x18FE9BB0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x18FE9350)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_AF31536844A77D0C_OFFSET UNITYSDK_OFFSET(0x18FE9A40)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x18FE95A0)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x18FEA130)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_E3699D3CFBFD02B9_OFFSET UNITYSDK_OFFSET(0x18FE9D20)
#define CLASS_1_CE91B9CF6CB59927_METHOD_1_FFAD8F7B4A021715_OFFSET UNITYSDK_OFFSET(0x18FEA2D0)
#define CLASS_1_CE91B9CF6CB59927__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FEAA50)
#define CLASS_1_CE91B9CF6CB59927__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE9500)

inline static constexpr unsigned int Class_1_CE91B9CF6CB59927_TypeDefinitionIndex = 74296;

class Class_1_CE91B9CF6CB59927 : public ::System::Object
{
public:
	static ::RPG::Client::TextID* StaticGet_AEKPBJAFKKC()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE91B9CF6CB59927_TypeDefinitionIndex)->GetStaticField(0x15170);
	}
	static ::RPG::Client::TextID* StaticGet_BKJCLADBFLK()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE91B9CF6CB59927_TypeDefinitionIndex)->GetStaticField(0x15180);
	}
	static ::RPG::Client::TextID* StaticGet_HKAHOGLBKKA()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE91B9CF6CB59927_TypeDefinitionIndex)->GetStaticField(0x15190);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* MKALNEJIKCO; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* DNPOJOFIAHM; // 0x18

	::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927__CCTOR_OFFSET))();
	}

	::Class_1_52F4A47C29C64CBB* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_52F4A47C29C64CBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_1_5BD7248EB848DE2B()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_5BD7248EB848DE2B_OFFSET))(this);
	}

	static ::Class_1_CE91B9CF6CB59927* Method_1_5574E6B244C57D1D(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::Class_1_CE91B9CF6CB59927*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_5574E6B244C57D1D_OFFSET))(a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_5A30DCA22339BFF6()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_5A30DCA22339BFF6_OFFSET))(this);
	}

	::System::Boolean Method_1_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_D240830C442C70A4_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_FFAD8F7B4A021715()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_FFAD8F7B4A021715_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* Method_1_AF31536844A77D0C()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_AF31536844A77D0C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_7E4FEE322D0EA011(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_7E4FEE322D0EA011_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_E3699D3CFBFD02B9(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_E3699D3CFBFD02B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1AD7BD80EF0FCE8B(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_1AD7BD80EF0FCE8B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0475BF03848254F8(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_0475BF03848254F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_48BE40EDE06FB381(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_CE91B9CF6CB59927_METHOD_1_48BE40EDE06FB381_OFFSET))(this, a1, a2);
	}
};
