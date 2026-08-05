#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

class Class_1_A617B16EB30351B4;
class Class_1_D78EEB0971654883;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1473C3E3E800D9E0_METHOD_1_3C78F415A9C03C4D_OFFSET UNITYSDK_OFFSET(0x11230980)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x112309B0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x112309A0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x11230610)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_A9997AC370F7BEA8_OFFSET UNITYSDK_OFFSET(0x11230700)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_AAB958C808A9F6D2_OFFSET UNITYSDK_OFFSET(0x11230990)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_DD302BDF6C701D6E_OFFSET UNITYSDK_OFFSET(0x112309C0)
#define CLASS_1_1473C3E3E800D9E0_METHOD_1_E800F4BD1F795C9A_OFFSET UNITYSDK_OFFSET(0x11230830)
#define CLASS_1_1473C3E3E800D9E0__CTOR_OFFSET UNITYSDK_OFFSET(0x11230570)

inline static constexpr unsigned int Class_1_1473C3E3E800D9E0_TypeDefinitionIndex = 70067;

class Class_1_1473C3E3E800D9E0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_A617B16EB30351B4*>* Field_1_6; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_0; // 0x18
	::Struct_2_90E529DB4DCB014F Field_1_7; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A08DEEEE1A01931E(::Struct_2_90E529DB4DCB014F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::Class_1_A617B16EB30351B4* Method_1_A9997AC370F7BEA8(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_A617B16EB30351B4*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_A9997AC370F7BEA8_OFFSET))(this, a1);
	}

	::System::Void Method_1_E800F4BD1F795C9A(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_A617B16EB30351B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_A617B16EB30351B4*))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_E800F4BD1F795C9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C78F415A9C03C4D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_3C78F415A9C03C4D_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID Method_1_AAB958C808A9F6D2()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_AAB958C808A9F6D2_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_90E529DB4DCB014F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}

	::Struct_2_90E529DB4DCB014F Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_90E529DB4DCB014F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Class_1_D78EEB0971654883* Method_1_DD302BDF6C701D6E()
	{
		return ((::Class_1_D78EEB0971654883*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1473C3E3E800D9E0_METHOD_1_DD302BDF6C701D6E_OFFSET))(this);
	}
};
