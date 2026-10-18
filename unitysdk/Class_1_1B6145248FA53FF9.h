#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class BlindBoxOrderFilter; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B6145248FA53FF9_GET_ALLPICKEDORDERS_OFFSET UNITYSDK_OFFSET(0xB8EACC0)
#define CLASS_1_1B6145248FA53FF9_GET_FILTER_OFFSET UNITYSDK_OFFSET(0xB8EAC90)
#define CLASS_1_1B6145248FA53FF9_GET_IGNORERETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xB8EACE0)
#define CLASS_1_1B6145248FA53FF9_GET_MAXTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB8EACD0)
#define CLASS_1_1B6145248FA53FF9_GET_PICKEDIDS_OFFSET UNITYSDK_OFFSET(0xB8EACA0)
#define CLASS_1_1B6145248FA53FF9_GET_RETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xB8EACB0)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB8EACF0)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_3B092B0C6411E875_OFFSET UNITYSDK_OFFSET(0xB8EAD50)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_4FC3E0908FC6797A_OFFSET UNITYSDK_OFFSET(0xB8EB540)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_55B6FEF8BB35F231_OFFSET UNITYSDK_OFFSET(0xB8EAF00)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_67DD9A1349A33CAE_OFFSET UNITYSDK_OFFSET(0xB8EAF60)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_7047A5850F8317BD_OFFSET UNITYSDK_OFFSET(0xB8EB290)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_8D925310D47DCD21_OFFSET UNITYSDK_OFFSET(0xB8EAE60)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_C10CDFA767EF75F9_OFFSET UNITYSDK_OFFSET(0xB8EC240)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_C39A1AD728BEC230_OFFSET UNITYSDK_OFFSET(0xB8EB5F0)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_DAC72F59B4AC9112_OFFSET UNITYSDK_OFFSET(0xB8EBBB0)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_DB47BDC069A50B52_OFFSET UNITYSDK_OFFSET(0xB8EB420)
#define CLASS_1_1B6145248FA53FF9_METHOD_1_EA6763B8416BA0C7_OFFSET UNITYSDK_OFFSET(0xB8EB190)
#define CLASS_1_1B6145248FA53FF9__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8EAC80)
#define CLASS_1_1B6145248FA53FF9__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EAC50)

inline static constexpr unsigned int Class_1_1B6145248FA53FF9_TypeDefinitionIndex = 74862;

class Class_1_1B6145248FA53FF9 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt64>* _PickedIds_k__BackingField; // 0x10
	::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* _Filter_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* _AllPickedOrders_k__BackingField; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt64>* _ReturnedOrderIds_k__BackingField; // 0x28
	::System::Boolean _IgnoreReturnedOrderIds_k__BackingField; // 0x30
	::System::Int32 _MaxTotalCount_k__BackingField; // 0x34

	::System::Void _ctor(::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a3, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9__CTOR_1_OFFSET))(this);
	}

	::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* get_Filter()
	{
		return ((::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_FILTER_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* get_PickedIds()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_PICKEDIDS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* get_ReturnedOrderIds()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_RETURNEDORDERIDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* get_AllPickedOrders()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_ALLPICKEDORDERS_OFFSET))(this);
	}

	::System::Int32 get_MaxTotalCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_MAXTOTALCOUNT_OFFSET))(this);
	}

	::System::Boolean get_IgnoreReturnedOrderIds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_GET_IGNORERETURNEDORDERIDS_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_3B092B0C6411E875(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_3B092B0C6411E875_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8D925310D47DCD21(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_8D925310D47DCD21_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_55B6FEF8BB35F231(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_55B6FEF8BB35F231_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_67DD9A1349A33CAE(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_67DD9A1349A33CAE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EA6763B8416BA0C7(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_EA6763B8416BA0C7_OFFSET))(this, a1);
	}

	::RPG::Client::Pet::BlindBox::BlindBoxPetType Method_1_7047A5850F8317BD(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
	{
		return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_7047A5850F8317BD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DB47BDC069A50B52(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_DB47BDC069A50B52_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4FC3E0908FC6797A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_4FC3E0908FC6797A_OFFSET))(this);
	}

	::System::Void Method_1_C39A1AD728BEC230(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_C39A1AD728BEC230_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DAC72F59B4AC9112(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_DAC72F59B4AC9112_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C10CDFA767EF75F9(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B6145248FA53FF9_METHOD_1_C10CDFA767EF75F9_OFFSET))(this, a1, a2, a3);
	}
};
