#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
class Class_0_16E4307DCC419505_649;
class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_651;
class Class_1_486ECEF0FA4B91F8;
class Class_1_AE0CA897D782D638;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D4B477AFF56634F_METHOD_1_14DED4FF64F29636_OFFSET UNITYSDK_OFFSET(0xA4604B0)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_4B31212A5E4408E8_OFFSET UNITYSDK_OFFSET(0xA460D10)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0xA460C20)
#define CLASS_1_4D4B477AFF56634F_METHOD_1_B6F7FA59728BAC2D_OFFSET UNITYSDK_OFFSET(0xA460790)
#define CLASS_1_4D4B477AFF56634F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4602B0)

inline static constexpr unsigned int Class_1_4D4B477AFF56634F_TypeDefinitionIndex = 53239;

class Class_1_4D4B477AFF56634F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Class_1_486ECEF0FA4B91F8* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_651*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>* Method_1_14DED4FF64F29636(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_14DED4FF64F29636_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_649*>* Method_1_B6F7FA59728BAC2D(::RPG::Client::IAvatarInfoProvider* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_649*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_B6F7FA59728BAC2D_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_649* Method_1_4B31212A5E4408E8(::RPG::Client::IAvatarInfoProvider* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::Class_0_16E4307DCC419505_649*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_4B31212A5E4408E8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D4B477AFF56634F_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
