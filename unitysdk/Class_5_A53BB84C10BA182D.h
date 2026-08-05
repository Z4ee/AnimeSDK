#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_60CF26E439F92C32.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/Enum_3_FFEDDBC868120052.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"

class Class_1_370F46F5B758DE19;
class Class_1_4C3E2542F8C9B910_Class_3_8A15F387AB2587C6;
class Class_1_6D6D57236F24B8FC_1;
class Class_2_340D378A11BF8497;
class Class_2_AB4261DB06E3A6BD;
class Class_2_C03EC65F99EF4B16;
class Class_2_F5737224A0253470;
class Class_2_FFB447330BDBA334;
class Class_4_B1EAD8476216C1D8;
class Class_4_B99AA5AE371451AA;
class Class_5_A53BB84C10BA182D_Class_1_E029E060C37758DE;
class Class_5_DCFF91E03A93C03C;
class Class_5_F60EFCE4D76BF533;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_1_OFFSET UNITYSDK_OFFSET(0x11FAE450)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_OFFSET UNITYSDK_OFFSET(0x11FADD60)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x11FADDB0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_154F50C0B01C1605_OFFSET UNITYSDK_OFFSET(0x11FAD080)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11FAE4F0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_2D9AE5A5555A322A_OFFSET UNITYSDK_OFFSET(0x11FAEB10)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x11FAE3A0)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_5CCA76F0013862B2_OFFSET UNITYSDK_OFFSET(0x11FACF90)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_6755F46E8DF0FBD2_OFFSET UNITYSDK_OFFSET(0x11FB1300)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_7260B6AD27A4046C_OFFSET UNITYSDK_OFFSET(0x11FAE500)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x11FAE440)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_A00BBF86AFD8329F_OFFSET UNITYSDK_OFFSET(0x11FAE920)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_EED30E97B7EB7A38_OFFSET UNITYSDK_OFFSET(0x11FAE980)
#define CLASS_5_A53BB84C10BA182D_METHOD_5_FAD66108D9E5F015_OFFSET UNITYSDK_OFFSET(0x11FAE890)
#define CLASS_5_A53BB84C10BA182D__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FAE310)
#define CLASS_5_A53BB84C10BA182D__CTOR_OFFSET UNITYSDK_OFFSET(0x11FADF10)

inline static constexpr unsigned int Class_5_A53BB84C10BA182D_TypeDefinitionIndex = 57152;

class Class_5_A53BB84C10BA182D : public ::Class_4_60CF26E439F92C32
{
public:
	static ::Class_1_4C3E2542F8C9B910_Class_3_8A15F387AB2587C6** StaticGet_Field_5_7()
	{
		return (::Class_1_4C3E2542F8C9B910_Class_3_8A15F387AB2587C6**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A53BB84C10BA182D_TypeDefinitionIndex)->GetStaticField(0x41480);
	}
	::System::Collections::Generic::List_1<::Enum_3_FFEDDBC868120052>* Field_5_3; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_5_2; // 0x38
	::System::Collections::Generic::Queue_1<::Class_5_A53BB84C10BA182D_Class_1_E029E060C37758DE*>* Field_5_1; // 0x40
	::Class_2_F5737224A0253470* Field_5_11; // 0x48
	::Class_2_340D378A11BF8497* Field_5_9; // 0x50
	::Class_2_C03EC65F99EF4B16* Field_5_10; // 0x58
	::MoleMole::Config::ConfigHollowChessboard* Field_5_4; // 0x60
	::Class_2_AB4261DB06E3A6BD* Field_5_6; // 0x68
	::Class_1_370F46F5B758DE19* Field_5_0; // 0x70
	::System::Boolean Field_5_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_5_5CCA76F0013862B2(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_5CCA76F0013862B2_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_042161E3ACC3627B(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_5_8C8625211DA811AE(::Class_1_370F46F5B758DE19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_370F46F5B758DE19*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_042161E3ACC3627B_1(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_042161E3ACC3627B_1_OFFSET))(this, a1);
	}

	::Class_1_370F46F5B758DE19* Method_5_24748FC20F375725()
	{
		return ((::Class_1_370F46F5B758DE19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_24748FC20F375725_OFFSET))(this);
	}

	static ::ProtoScript::HollowEntityType Method_5_7260B6AD27A4046C(::System::UInt32 a1)
	{
		return ((::ProtoScript::HollowEntityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_7260B6AD27A4046C_OFFSET))(a1);
	}

	::System::Boolean Method_5_FAD66108D9E5F015(::Class_2_FFB447330BDBA334* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FFB447330BDBA334*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_FAD66108D9E5F015_OFFSET))(this, a1);
	}

	::System::Void Method_5_154F50C0B01C1605(::Class_4_B1EAD8476216C1D8* a1, ::Class_1_6D6D57236F24B8FC_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::Class_1_6D6D57236F24B8FC_1*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_154F50C0B01C1605_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_5_EED30E97B7EB7A38(::Class_1_6D6D57236F24B8FC_1* a1, ::System::Action_1<::Class_1_6D6D57236F24B8FC_1*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D6D57236F24B8FC_1*, ::System::Action_1<::Class_1_6D6D57236F24B8FC_1*>*))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_EED30E97B7EB7A38_OFFSET))(this, a1, a2);
	}

	::Class_5_DCFF91E03A93C03C* Method_5_A00BBF86AFD8329F()
	{
		return ((::Class_5_DCFF91E03A93C03C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_A00BBF86AFD8329F_OFFSET))(this);
	}

	::System::Void Method_5_2D9AE5A5555A322A(::Class_4_B1EAD8476216C1D8* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Enum_3_AE1972D98541A9AF a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_AE1972D98541A9AF, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_2D9AE5A5555A322A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_6755F46E8DF0FBD2(::Class_4_B1EAD8476216C1D8* a1, ::Class_4_B99AA5AE371451AA* a2, ::Class_5_F60EFCE4D76BF533* a3, ::MoleMole::PlayerOnViewState a4, ::Enum_3_AE1972D98541A9AF a5, ::System::Boolean a6, ::MoleMole::HollowChessboard::HollowCell a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B1EAD8476216C1D8*, ::Class_4_B99AA5AE371451AA*, ::Class_5_F60EFCE4D76BF533*, ::MoleMole::PlayerOnViewState, ::Enum_3_AE1972D98541A9AF, ::System::Boolean, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D_METHOD_5_6755F46E8DF0FBD2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
