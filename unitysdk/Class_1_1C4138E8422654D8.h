#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirBag; }
namespace RPG::Client::PixAir { class PixAirEquipBar; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1C4138E8422654D8_GET_BAG_OFFSET UNITYSDK_OFFSET(0x17A7A720)
#define CLASS_1_1C4138E8422654D8_GET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0x17A7A700)
#define CLASS_1_1C4138E8422654D8_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17A7A6C0)
#define CLASS_1_1C4138E8422654D8_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x17A7A6E0)
#define CLASS_1_1C4138E8422654D8_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x17A7A680)
#define CLASS_1_1C4138E8422654D8_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x17A7A6A0)
#define CLASS_1_1C4138E8422654D8_METHOD_1_06D406E37E8F6352_OFFSET UNITYSDK_OFFSET(0x17A7AB80)
#define CLASS_1_1C4138E8422654D8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17A7A740)
#define CLASS_1_1C4138E8422654D8_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x17A7A880)
#define CLASS_1_1C4138E8422654D8_METHOD_1_2B0BB8EAD0789CB0_OFFSET UNITYSDK_OFFSET(0x17A7B150)
#define CLASS_1_1C4138E8422654D8_METHOD_1_31D4ADC07CF85E06_OFFSET UNITYSDK_OFFSET(0x17A7A7B0)
#define CLASS_1_1C4138E8422654D8_METHOD_1_3E51EEFB06718274_OFFSET UNITYSDK_OFFSET(0x17A7A9B0)
#define CLASS_1_1C4138E8422654D8_METHOD_1_967FA23FE82925ED_OFFSET UNITYSDK_OFFSET(0x17A7AAA0)
#define CLASS_1_1C4138E8422654D8_METHOD_1_A0DC4CE7D91421A4_OFFSET UNITYSDK_OFFSET(0x17A7AD90)
#define CLASS_1_1C4138E8422654D8_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17A7A960)
#define CLASS_1_1C4138E8422654D8_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x17A7AA10)
#define CLASS_1_1C4138E8422654D8_METHOD_1_C5B66911EAB6E734_OFFSET UNITYSDK_OFFSET(0x17A7B0F0)
#define CLASS_1_1C4138E8422654D8_SET_BAG_OFFSET UNITYSDK_OFFSET(0x17A7A730)
#define CLASS_1_1C4138E8422654D8_SET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0x17A7A710)
#define CLASS_1_1C4138E8422654D8_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x17A7A6D0)
#define CLASS_1_1C4138E8422654D8_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x17A7A6F0)
#define CLASS_1_1C4138E8422654D8_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x17A7A690)
#define CLASS_1_1C4138E8422654D8_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x17A7A6B0)
#define CLASS_1_1C4138E8422654D8__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7AB70)

inline static constexpr unsigned int Class_1_1C4138E8422654D8_TypeDefinitionIndex = 78856;

class Class_1_1C4138E8422654D8 : public ::System::Object
{
public:
	// static const ::System::Int32 MFMNLEOGPOK = 0xB; // 0x0
	// static const ::System::Int32 NAHBDEAIAHE = 0x1; // 0x0
	::RPG::Client::PixAir::PixAirEquipBar* _EquipBar_k__BackingField; // 0x10
	::RPG::Client::PixAir::PixAirBag* _Bag_k__BackingField; // 0x18
	::RPG::Client::PixAir::PixAirSlot* _Source_k__BackingField; // 0x20
	::RPG::Client::PixAir::PixAirSlot* _Left_k__BackingField; // 0x28
	::RPG::Client::PixAir::PixAirSlot* _Target_k__BackingField; // 0x30
	::RPG::Client::PixAir::PixAirSlot* _Right_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8__CTOR_OFFSET))(this);
	}

	::RPG::Client::PixAir::PixAirSlot* get_Source()
	{
		return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::RPG::Client::PixAir::PixAirSlot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_SOURCE_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirSlot* get_Target()
	{
		return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::RPG::Client::PixAir::PixAirSlot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_TARGET_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirSlot* get_Left()
	{
		return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_LEFT_OFFSET))(this);
	}

	::System::Void set_Left(::RPG::Client::PixAir::PixAirSlot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_LEFT_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirSlot* get_Right()
	{
		return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_RIGHT_OFFSET))(this);
	}

	::System::Void set_Right(::RPG::Client::PixAir::PixAirSlot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_RIGHT_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirEquipBar* get_EquipBar()
	{
		return ((::RPG::Client::PixAir::PixAirEquipBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_EQUIPBAR_OFFSET))(this);
	}

	::System::Void set_EquipBar(::RPG::Client::PixAir::PixAirEquipBar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_EQUIPBAR_OFFSET))(this, a1);
	}

	::RPG::Client::PixAir::PixAirBag* get_Bag()
	{
		return ((::RPG::Client::PixAir::PixAirBag*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_GET_BAG_OFFSET))(this);
	}

	::System::Void set_Bag(::RPG::Client::PixAir::PixAirBag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBag*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_SET_BAG_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_31D4ADC07CF85E06()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_31D4ADC07CF85E06_OFFSET))(this);
	}

	::System::Int32 Method_1_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_1DC66375F15E73A5_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_1_3E51EEFB06718274()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_3E51EEFB06718274_OFFSET))(this);
	}

	::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	static ::Class_1_1C4138E8422654D8* Method_1_967FA23FE82925ED(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2, ::RPG::Client::PixAir::PixAirEquipBar* a3, ::RPG::Client::PixAir::PixAirBag* a4)
	{
		return ((::Class_1_1C4138E8422654D8*(*)(::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirBag*))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_967FA23FE82925ED_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* Method_1_06D406E37E8F6352(::RPG::Client::PixAir::PixAirContainerType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_06D406E37E8F6352_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* Method_1_A0DC4CE7D91421A4(::RPG::Client::PixAir::PixAirContainerType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_A0DC4CE7D91421A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C5B66911EAB6E734(::System::Int32 a1, ::RPG::Client::PixAir::PixAirContainerType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_C5B66911EAB6E734_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2B0BB8EAD0789CB0(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::PixAir::PixAirContainerType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + CLASS_1_1C4138E8422654D8_METHOD_1_2B0BB8EAD0789CB0_OFFSET))(this, a1, a2, a3);
	}
};
