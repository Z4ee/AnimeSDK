#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightShopBuyEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F8E102AD914E06E3_METHOD_1_8244849899397783_OFFSET UNITYSDK_OFFSET(0x13612080)
#define CLASS_1_F8E102AD914E06E3_METHOD_1_8E12B99DA7E62881_OFFSET UNITYSDK_OFFSET(0x13611E90)
#define CLASS_1_F8E102AD914E06E3_METHOD_1_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x13611C60)
#define CLASS_1_F8E102AD914E06E3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13611FE0)
#define CLASS_1_F8E102AD914E06E3__CTOR_OFFSET UNITYSDK_OFFSET(0x13612330)
#define CLASS_1_F8E102AD914E06E3__GET_SHOPBUYEVENTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x13612380)

inline static constexpr unsigned int Class_1_F8E102AD914E06E3_TypeDefinitionIndex = 60939;

class Class_1_F8E102AD914E06E3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Field_1_0; // 0x10
	::System::Collections::Generic::IList_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ACD91D865E237BC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3_METHOD_1_ACD91D865E237BC7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>* Method_1_8E12B99DA7E62881()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3_METHOD_1_8E12B99DA7E62881_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Int32 Method_1_8244849899397783(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3_METHOD_1_8244849899397783_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightShopBuyEvent* _get_ShopBuyEvents_b__6_0(::System::Int32 a1)
	{
		return ((::RPG::Client::GridFightShopBuyEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3__GET_SHOPBUYEVENTS_B__6_0_OFFSET))(this, a1);
	}
};
