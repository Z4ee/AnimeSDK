#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_0_16E4307DCC419505_748;
class Class_0_16E4307DCC419505_749;
class Class_0_16E4307DCC419505_750;
class Class_1_486ECEF0FA4B91F8;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D4B477AFF56634F_METHOD_1_14DED4FF64F29636_OFFSET UNITYSDK_OFFSET(0x118B93D0)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_4B31212A5E4408E8_OFFSET UNITYSDK_OFFSET(0x118B9C30)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x118B9B40)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_B6F7FA59728BAC2D_OFFSET UNITYSDK_OFFSET(0x118B96B0)
#define CLASS_1_4D4B477AFF56634F__CTOR_OFFSET UNITYSDK_OFFSET(0x118B91D0)

inline static constexpr unsigned int Class_1_4D4B477AFF56634F_TypeDefinitionIndex = 60366;

class Class_1_4D4B477AFF56634F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_749*>* Field_1_0; // 0x10
	::Class_1_486ECEF0FA4B91F8* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_750*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* Method_1_14DED4FF64F29636(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_14DED4FF64F29636_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_748*>* Method_1_B6F7FA59728BAC2D(::RPG::Client::IAvatarInfoProvider* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_748*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_B6F7FA59728BAC2D_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_748* Method_1_4B31212A5E4408E8(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::Class_0_16E4307DCC419505_748*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_4B31212A5E4408E8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
