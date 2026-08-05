#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_50968EFA8638B3BF_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x45C240)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x7BA870)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x3D1B20)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x7BAEA0)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x3C9DB0)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_925F894F486B745B_OFFSET UNITYSDK_OFFSET(0x453110)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x34AC00)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_A7E88F9B774F13B4_OFFSET UNITYSDK_OFFSET(0x59E650)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x59E640)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x32E550)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x352810)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define STRUCT_2_50968EFA8638B3BF_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x6B88C0)
#define STRUCT_2_50968EFA8638B3BF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7BAC50)
#define STRUCT_2_50968EFA8638B3BF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7BAC90)
#define STRUCT_2_50968EFA8638B3BF__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7BACF0)
#define STRUCT_2_50968EFA8638B3BF__CTOR_4_OFFSET UNITYSDK_OFFSET(0x7BAD40)
#define STRUCT_2_50968EFA8638B3BF__CTOR_5_OFFSET UNITYSDK_OFFSET(0x7BAD80)
#define STRUCT_2_50968EFA8638B3BF__CTOR_6_OFFSET UNITYSDK_OFFSET(0x7BADC0)
#define STRUCT_2_50968EFA8638B3BF__CTOR_7_OFFSET UNITYSDK_OFFSET(0x7BAE10)
#define STRUCT_2_50968EFA8638B3BF__CTOR_8_OFFSET UNITYSDK_OFFSET(0x7BAE50)
#define STRUCT_2_50968EFA8638B3BF__CTOR_OFFSET UNITYSDK_OFFSET(0x7BAC10)

inline static constexpr unsigned int Struct_2_50968EFA8638B3BF_TypeDefinitionIndex = 68359;

struct alignas(8) Struct_2_50968EFA8638B3BF
{
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x20
	::System::Int32 Field_2_6; // 0x28
	::System::UInt64 Field_2_5; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::MoleMole::HollowChessboard::RenderDataAliveType Field_2_11; // 0x3C
	::System::Collections::Generic::List_1<::System::String*>* Field_2_10; // 0x40
	::System::String* Field_2_9; // 0x48
	::System::Boolean Field_2_8; // 0x50

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5, ::System::Collections::Generic::List_1<::System::String*>* a6, ::System::String* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_2(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5, ::System::Collections::Generic::List_1<::System::String*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_3(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_4(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::MoleMole::HollowChessboard::RenderDataAliveType a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_5(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_6(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_7(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt64 a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_8(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF__CTOR_8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_A7E88F9B774F13B4(::MoleMole::HollowChessboard::RenderDataAliveType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_A7E88F9B774F13B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_AF081070273CE162_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::RenderDataAliveType Method_2_925F894F486B745B()
	{
		return ((::MoleMole::HollowChessboard::RenderDataAliveType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_925F894F486B745B_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_2_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_2_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_50968EFA8638B3BF_METHOD_2_3163C288F3AE2966_OFFSET))(this, a1);
	}
};
