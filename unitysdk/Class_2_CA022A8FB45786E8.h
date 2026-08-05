#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA022A8FB45786E8_METHOD_2_0B9B33C2008BAA06_OFFSET UNITYSDK_OFFSET(0x10981590)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x10981010)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0x10981160)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x10981580)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x109810A0)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x10981150)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10981140)
#define CLASS_2_CA022A8FB45786E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109810B0)
#define CLASS_2_CA022A8FB45786E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x10980F90)
#define CLASS_2_CA022A8FB45786E8__CTOR_OFFSET UNITYSDK_OFFSET(0x10981000)

inline static constexpr unsigned int Class_2_CA022A8FB45786E8_TypeDefinitionIndex = 76066;

class Class_2_CA022A8FB45786E8 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x13E; // 0x0
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B9B33C2008BAA06(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CA022A8FB45786E8_METHOD_2_0B9B33C2008BAA06_OFFSET))(this, a1);
	}
};
