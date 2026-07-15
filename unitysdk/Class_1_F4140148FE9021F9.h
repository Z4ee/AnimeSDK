#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4140148FE9021F9_Struct_2_0F9DFD5F42A7ADFF.h"
#include "unitysdk/Class_1_F4140148FE9021F9_Struct_2_693E351E7013BC52.h"
#include "unitysdk/System/Object.h"

class Class_1_B71FC14BA77C9F77;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4140148FE9021F9_GET_DISCARDPILE_OFFSET UNITYSDK_OFFSET(0x157FC700)
#define CLASS_1_F4140148FE9021F9_GET_DRAWPILE_OFFSET UNITYSDK_OFFSET(0x157FC6F0)
#define CLASS_1_F4140148FE9021F9_GET_EXILEPILE_OFFSET UNITYSDK_OFFSET(0x157FC710)
#define CLASS_1_F4140148FE9021F9_GET_HANDSLOTLIMIT_OFFSET UNITYSDK_OFFSET(0x157FC720)
#define CLASS_1_F4140148FE9021F9_GET_HAND_OFFSET UNITYSDK_OFFSET(0x157FC6E0)
#define CLASS_1_F4140148FE9021F9_GET_MANA_OFFSET UNITYSDK_OFFSET(0x157FC740)
#define CLASS_1_F4140148FE9021F9_METHOD_1_53F577C5D26668F1_OFFSET UNITYSDK_OFFSET(0x157FCAC0)
#define CLASS_1_F4140148FE9021F9_METHOD_1_5A19002CDE085B26_OFFSET UNITYSDK_OFFSET(0x157FCA00)
#define CLASS_1_F4140148FE9021F9_METHOD_1_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x157FD360)
#define CLASS_1_F4140148FE9021F9_METHOD_1_7C5A22D91581DCE1_OFFSET UNITYSDK_OFFSET(0x157FC760)
#define CLASS_1_F4140148FE9021F9_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x157FD2F0)
#define CLASS_1_F4140148FE9021F9_METHOD_1_B79A90EC2ABFCD55_OFFSET UNITYSDK_OFFSET(0x157FCD60)
#define CLASS_1_F4140148FE9021F9_METHOD_1_D009E20DE4C175F4_OFFSET UNITYSDK_OFFSET(0x157FC800)
#define CLASS_1_F4140148FE9021F9_METHOD_1_F489B065FD2866BB_OFFSET UNITYSDK_OFFSET(0x157FCCE0)
#define CLASS_1_F4140148FE9021F9_SET_HANDSLOTLIMIT_OFFSET UNITYSDK_OFFSET(0x157FC730)
#define CLASS_1_F4140148FE9021F9_SET_MANA_OFFSET UNITYSDK_OFFSET(0x157FC750)
#define CLASS_1_F4140148FE9021F9__CTOR_OFFSET UNITYSDK_OFFSET(0x157FD530)

inline static constexpr unsigned int Class_1_F4140148FE9021F9_TypeDefinitionIndex = 76142;

class Class_1_F4140148FE9021F9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _ExilePile_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _Hand_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _DiscardPile_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _DrawPile_k__BackingField; // 0x28
	::System::Int32 _Mana_k__BackingField; // 0x30
	::System::UInt32 _HandSlotLimit_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* get_Hand()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_HAND_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* get_DrawPile()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_DRAWPILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* get_DiscardPile()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_DISCARDPILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* get_ExilePile()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_EXILEPILE_OFFSET))(this);
	}

	::System::UInt32 get_HandSlotLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_HANDSLOTLIMIT_OFFSET))(this);
	}

	::System::Void set_HandSlotLimit(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_SET_HANDSLOTLIMIT_OFFSET))(this, a1);
	}

	::System::Int32 get_Mana()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_GET_MANA_OFFSET))(this);
	}

	::System::Void set_Mana(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_SET_MANA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_B71FC14BA77C9F77*>* Method_1_7C5A22D91581DCE1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_7C5A22D91581DCE1_OFFSET))(this);
	}

	::Class_1_B71FC14BA77C9F77* Method_1_D009E20DE4C175F4(::System::UInt32 a1)
	{
		return ((::Class_1_B71FC14BA77C9F77*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_D009E20DE4C175F4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5A19002CDE085B26(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_5A19002CDE085B26_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_53F577C5D26668F1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_53F577C5D26668F1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_F4140148FE9021F9_Struct_2_0F9DFD5F42A7ADFF>* Method_1_B79A90EC2ABFCD55()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F4140148FE9021F9_Struct_2_0F9DFD5F42A7ADFF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_B79A90EC2ABFCD55_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_B71FC14BA77C9F77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_68FB99B33E7C7AEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_68FB99B33E7C7AEB_OFFSET))(this);
	}

	::Class_1_F4140148FE9021F9_Struct_2_693E351E7013BC52 Method_1_F489B065FD2866BB(::Class_1_B71FC14BA77C9F77* a1)
	{
		return ((::Class_1_F4140148FE9021F9_Struct_2_693E351E7013BC52(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*))((::PBYTE)hIl2Cpp + CLASS_1_F4140148FE9021F9_METHOD_1_F489B065FD2866BB_OFFSET))(this, a1);
	}
};
