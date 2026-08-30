#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280B56AF77019A2F;
class Class_1_D17272E82AE804C2_608;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9917656EF7E54194_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1846EF50)
#define CLASS_1_9917656EF7E54194_METHOD_1_016C8341F6A3521E_OFFSET UNITYSDK_OFFSET(0x1846F5B0)
#define CLASS_1_9917656EF7E54194_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1846F3B0)
#define CLASS_1_9917656EF7E54194_METHOD_1_684F14C3B7AFA31D_OFFSET UNITYSDK_OFFSET(0x1846EFE0)
#define CLASS_1_9917656EF7E54194_METHOD_1_B52A7B253D42E098_OFFSET UNITYSDK_OFFSET(0x1846F700)
#define CLASS_1_9917656EF7E54194_METHOD_1_EF16A0C31A265E6D_OFFSET UNITYSDK_OFFSET(0x1846F450)
#define CLASS_1_9917656EF7E54194__CTOR_OFFSET UNITYSDK_OFFSET(0x1846FB10)

inline static constexpr unsigned int Class_1_9917656EF7E54194_TypeDefinitionIndex = 79014;

class Class_1_9917656EF7E54194 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_280B56AF77019A2F*>* JODNHMLAEKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_684F14C3B7AFA31D(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_608*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_608*>*))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_METHOD_1_684F14C3B7AFA31D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_D17272E82AE804C2_608* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_608*))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::Class_1_280B56AF77019A2F* Method_1_EF16A0C31A265E6D(::System::UInt32 a1)
	{
		return ((::Class_1_280B56AF77019A2F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_METHOD_1_EF16A0C31A265E6D_OFFSET))(this, a1);
	}

	::Class_1_280B56AF77019A2F* Method_1_016C8341F6A3521E(::System::UInt32 a1)
	{
		return ((::Class_1_280B56AF77019A2F*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_METHOD_1_016C8341F6A3521E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* Method_1_B52A7B253D42E098()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9917656EF7E54194_METHOD_1_B52A7B253D42E098_OFFSET))(this);
	}
};
