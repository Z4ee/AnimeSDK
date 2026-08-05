#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_144.h"

class Class_1_E398E2F4402CE967;
class Class_2_208CC9941471731A_1243;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_21058D1A28AD0F67_OFFSET UNITYSDK_OFFSET(0x1D0C2BD0)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1D0C28D0)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1D0C2E70)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_4721D078C82DB787_OFFSET UNITYSDK_OFFSET(0x1D0C38C0)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_1_OFFSET UNITYSDK_OFFSET(0x1D0C2AA0)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_2_OFFSET UNITYSDK_OFFSET(0x1D0C2D40)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_OFFSET UNITYSDK_OFFSET(0x1D0C27A0)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_B92029A5680AA2D5_OFFSET UNITYSDK_OFFSET(0x1D0C2F90)
#define CLASS_2_D49EAB3C9AE088C0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D0C25E0)
#define CLASS_2_D49EAB3C9AE088C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2620)

inline static constexpr unsigned int Class_2_D49EAB3C9AE088C0_TypeDefinitionIndex = 92419;

class Class_2_D49EAB3C9AE088C0 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1243*>*>* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E398E2F4402CE967*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1243*>* Field_2_1; // 0x28
	::Struct_2_1862835F8661A21F_144 Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_7C89D69E492BC946(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_1243* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1243*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_7C89D69E492BC946_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_21058D1A28AD0F67(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_21058D1A28AD0F67_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7C89D69E492BC946_2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_7C89D69E492BC946_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_B92029A5680AA2D5(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_B92029A5680AA2D5_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1243* Method_2_4721D078C82DB787(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_1243*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D49EAB3C9AE088C0_METHOD_2_4721D078C82DB787_OFFSET))(this, a1, a2);
	}
};
