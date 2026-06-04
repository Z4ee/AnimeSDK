#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_OFFSET UNITYSDK_OFFSET(0x13B62CE0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_401D9792CCB3DD84_OFFSET UNITYSDK_OFFSET(0x13B62EA0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_6551305EDA271B8B_OFFSET UNITYSDK_OFFSET(0x13B62D90)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_905E235E1CB1A6B6_OFFSET UNITYSDK_OFFSET(0x13B62B60)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0x13B62F70)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_BC6F7375F6077DD4_OFFSET UNITYSDK_OFFSET(0x13B629D0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_D1080DEF6C5718CB_OFFSET UNITYSDK_OFFSET(0x13B62AC0)
#define CLASS_1_041CA627B6BC03C3__CTOR_OFFSET UNITYSDK_OFFSET(0x13B62960)

inline static constexpr unsigned int Class_1_041CA627B6BC03C3_TypeDefinitionIndex = 70101;

class Class_1_041CA627B6BC03C3 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::SpecialEquip* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC6F7375F6077DD4(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_BC6F7375F6077DD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1080DEF6C5718CB(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_D1080DEF6C5718CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_905E235E1CB1A6B6(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_905E235E1CB1A6B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_250DD1D84F42E8C9(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6551305EDA271B8B(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_6551305EDA271B8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_401D9792CCB3DD84(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_401D9792CCB3DD84_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}
};
