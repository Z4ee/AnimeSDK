#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D393582BD6283486;
class Class_1_E8533E8BF8712E1D;
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD5A155669366FA2_GET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0x169C18C0)
#define CLASS_1_DD5A155669366FA2_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x169C14D0)
#define CLASS_1_DD5A155669366FA2_METHOD_1_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x169C1000)
#define CLASS_1_DD5A155669366FA2_METHOD_1_7907F2C99EBA9BFD_OFFSET UNITYSDK_OFFSET(0x169C1510)
#define CLASS_1_DD5A155669366FA2_METHOD_1_AFB7D6FCA8CF7B26_OFFSET UNITYSDK_OFFSET(0x169C1640)
#define CLASS_1_DD5A155669366FA2_METHOD_1_C0EBA46BAFC82F84_OFFSET UNITYSDK_OFFSET(0x169C1370)
#define CLASS_1_DD5A155669366FA2_METHOD_1_E8ED130038695AE5_OFFSET UNITYSDK_OFFSET(0x169C1240)
#define CLASS_1_DD5A155669366FA2_SET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0x169C18D0)
#define CLASS_1_DD5A155669366FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x169C18E0)

inline static constexpr unsigned int Class_1_DD5A155669366FA2_TypeDefinitionIndex = 72467;

class Class_1_DD5A155669366FA2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D393582BD6283486*>* __MergingSoliders_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_1_E8ED130038695AE5(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_E8ED130038695AE5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0EBA46BAFC82F84(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_C0EBA46BAFC82F84_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>* Method_1_7907F2C99EBA9BFD(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_7907F2C99EBA9BFD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>* Method_1_AFB7D6FCA8CF7B26()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_METHOD_1_AFB7D6FCA8CF7B26_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D393582BD6283486*>* get__MergingSoliders()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D393582BD6283486*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_GET__MERGINGSOLIDERS_OFFSET))(this);
	}

	::System::Void set__MergingSoliders(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D393582BD6283486*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D393582BD6283486*>*))((::PBYTE)hIl2Cpp + CLASS_1_DD5A155669366FA2_SET__MERGINGSOLIDERS_OFFSET))(this, a1);
	}
};
