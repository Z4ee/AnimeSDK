#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_E4E2AE39E24CB0F9;
class Class_3_626F93E2306641CC;
namespace RPG::Client::CakeRace { class CakeRaceTriggerEventDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_34BC8282ADEBDD26_OFFSET UNITYSDK_OFFSET(0x117FFE40)
#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x11800040)
#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_AFB750A8C52EF41D_OFFSET UNITYSDK_OFFSET(0x117FFF10)
#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_C9A8A12262E17DAB_OFFSET UNITYSDK_OFFSET(0x118005A0)
#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_CEA7C5E1B46DA618_OFFSET UNITYSDK_OFFSET(0x118001E0)
#define CLASS_1_979F16DD4FAB7B8E_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x117FFEF0)
#define CLASS_1_979F16DD4FAB7B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x117FFFE0)

inline static constexpr unsigned int Class_1_979F16DD4FAB7B8E_TypeDefinitionIndex = 71604;

class Class_1_979F16DD4FAB7B8E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E4E2AE39E24CB0F9*>* Field_1_1; // 0x10
	::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_34BC8282ADEBDD26()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_34BC8282ADEBDD26_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	static ::Class_1_979F16DD4FAB7B8E* Method_1_AFB750A8C52EF41D(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
	{
		return ((::Class_1_979F16DD4FAB7B8E*(*)(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_AFB750A8C52EF41D_OFFSET))(a1);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_1_CEA7C5E1B46DA618(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_CEA7C5E1B46DA618_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C9A8A12262E17DAB(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_979F16DD4FAB7B8E_METHOD_1_C9A8A12262E17DAB_OFFSET))(this, a1, a2);
	}
};
