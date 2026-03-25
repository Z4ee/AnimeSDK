#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53B5B6BCE730F64E;
class Class_1_E8533E8BF8712E1D;
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B9482F5E23305E8_GET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0x11491EC0)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_2790B07A3B563E2C_OFFSET UNITYSDK_OFFSET(0x114919C0)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11491B60)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_5B060EB3AF041458_OFFSET UNITYSDK_OFFSET(0x11491D00)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_616C85701D2EE3C9_OFFSET UNITYSDK_OFFSET(0x11491BA0)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_80083B4842EABDE2_OFFSET UNITYSDK_OFFSET(0x11491870)
#define CLASS_1_9B9482F5E23305E8_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x11491690)
#define CLASS_1_9B9482F5E23305E8_SET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0x11491ED0)
#define CLASS_1_9B9482F5E23305E8__CTOR_OFFSET UNITYSDK_OFFSET(0x11491EE0)

inline static constexpr unsigned int Class_1_9B9482F5E23305E8_TypeDefinitionIndex = 62143;

class Class_1_9B9482F5E23305E8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53B5B6BCE730F64E*>* __MergingSoliders_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}

	::System::Void Method_1_80083B4842EABDE2(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_80083B4842EABDE2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2790B07A3B563E2C(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_2790B07A3B563E2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>* Method_1_616C85701D2EE3C9(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_616C85701D2EE3C9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>* Method_1_5B060EB3AF041458()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E8533E8BF8712E1D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_METHOD_1_5B060EB3AF041458_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53B5B6BCE730F64E*>* get__MergingSoliders()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53B5B6BCE730F64E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_GET__MERGINGSOLIDERS_OFFSET))(this);
	}

	::System::Void set__MergingSoliders(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53B5B6BCE730F64E*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_53B5B6BCE730F64E*>*))((::PBYTE)hIl2Cpp + CLASS_1_9B9482F5E23305E8_SET__MERGINGSOLIDERS_OFFSET))(this, value);
	}
};
