#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_1_OFFSET UNITYSDK_OFFSET(0x11DE1470)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_OFFSET UNITYSDK_OFFSET(0x11DE13C0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_3588E14461059324_OFFSET UNITYSDK_OFFSET(0x11DE1220)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_3A5882E7FD121FDD_OFFSET UNITYSDK_OFFSET(0x11DE1130)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_401D9792CCB3DD84_OFFSET UNITYSDK_OFFSET(0x11DE1520)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_472DB64F0A6BC7CE_OFFSET UNITYSDK_OFFSET(0x11DE12C0)
#define CLASS_1_041CA627B6BC03C3_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0x11DE15F0)
#define CLASS_1_041CA627B6BC03C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE10C0)

inline static constexpr unsigned int Class_1_041CA627B6BC03C3_TypeDefinitionIndex = 69289;

class Class_1_041CA627B6BC03C3 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* Field_1_1; // 0x18
	::RPG::Client::ActivityIdleLive::SpecialEquip* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3A5882E7FD121FDD(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_3A5882E7FD121FDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3588E14461059324(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_3588E14461059324_OFFSET))(this, a1);
	}

	::System::Void Method_1_472DB64F0A6BC7CE(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_472DB64F0A6BC7CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_250DD1D84F42E8C9(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_250DD1D84F42E8C9_1(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_041CA627B6BC03C3_METHOD_1_250DD1D84F42E8C9_1_OFFSET))(this, a1);
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
