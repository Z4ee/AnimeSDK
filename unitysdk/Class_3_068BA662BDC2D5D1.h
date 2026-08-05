#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_9FD26085F85DA330.h"
#include "unitysdk/Struct_2_BCEA3C06DDE2274F.h"
#include "unitysdk/Struct_2_D235A7D760E7915C.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class Tween; }
namespace MoleMole::Config { class ConfigHollowChessboardScreenUI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class Class_3_068BA662BDC2D5D1_Class_3_4E18D6856950D32F;

#define CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_1_OFFSET UNITYSDK_OFFSET(0x148F3630)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_2_OFFSET UNITYSDK_OFFSET(0x148F4050)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_OFFSET UNITYSDK_OFFSET(0x148F3050)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_0370722A97182315_1_OFFSET UNITYSDK_OFFSET(0x148F2600)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_0370722A97182315_OFFSET UNITYSDK_OFFSET(0x148F2470)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_05347DDA1DB672E2_OFFSET UNITYSDK_OFFSET(0x148F11D0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_2C46ACA39853516A_OFFSET UNITYSDK_OFFSET(0x148F1FC0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_1_OFFSET UNITYSDK_OFFSET(0x148F38F0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_2_OFFSET UNITYSDK_OFFSET(0x148F3BE0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_OFFSET UNITYSDK_OFFSET(0x148F2880)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_6BDE8CC48AF5F456_OFFSET UNITYSDK_OFFSET(0x148F1310)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_7642E9CE17CC35E4_1_OFFSET UNITYSDK_OFFSET(0x148F41D0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_7642E9CE17CC35E4_OFFSET UNITYSDK_OFFSET(0x148F3ED0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x148F1130)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_8B9C0698CE1A77F9_OFFSET UNITYSDK_OFFSET(0x148F4350)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_99535C086763A991_OFFSET UNITYSDK_OFFSET(0x148F2B70)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_9BB60DB047D1EF98_OFFSET UNITYSDK_OFFSET(0x148F1240)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_AE4A43A63594C83F_OFFSET UNITYSDK_OFFSET(0x148F2790)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_B4BF8AC648B1D13C_OFFSET UNITYSDK_OFFSET(0x148F37B0)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x148F4630)
#define CLASS_3_068BA662BDC2D5D1_METHOD_3_E1268E76672F9634_OFFSET UNITYSDK_OFFSET(0x148F31D0)
#define CLASS_3_068BA662BDC2D5D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x148F1D60)
#define CLASS_3_068BA662BDC2D5D1__CTOR_OFFSET UNITYSDK_OFFSET(0x148F10B0)

inline static constexpr unsigned int Class_3_068BA662BDC2D5D1_TypeDefinitionIndex = 76314;

class Class_3_068BA662BDC2D5D1 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	static ::System::Collections::Generic::List_1<::Class_3_068BA662BDC2D5D1_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::Class_3_068BA662BDC2D5D1_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_068BA662BDC2D5D1_TypeDefinitionIndex)->GetStaticField(0x4F020);
	}
	::DG::Tweening::Tween* Field_3_14; // 0x28
	::System::String* Field_3_11; // 0x30
	::Struct_2_D235A7D760E7915C Field_3_4; // 0x38
	::Il2CppArray<::System::Char>* Field_3_15; // 0x58
	::System::Int32 Field_3_7; // 0x60
	::System::Single Field_3_13; // 0x64
	::System::Int32 Field_3_0; // 0x68
	::System::Single Field_3_8; // 0x6C
	::System::Single Field_3_9; // 0x70
	::System::Int32 Field_3_6; // 0x74
	::System::Int32 Field_3_10; // 0x78
	::System::Boolean Field_3_5; // 0x7C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1__CCTOR_OFFSET))();
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_9BB60DB047D1EF98(::Struct_2_BCEA3C06DDE2274F& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BCEA3C06DDE2274F&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_9BB60DB047D1EF98_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_2C46ACA39853516A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_2C46ACA39853516A_OFFSET))(this);
	}

	static ::System::String* Method_3_0370722A97182315()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_0370722A97182315_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_4B90E6DAAD4A82A5()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_OFFSET))(this);
	}

	::System::String* Method_3_99535C086763A991(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_99535C086763A991_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_00D93B1F0BF92DCB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_OFFSET))();
	}

	::System::Void Method_3_E1268E76672F9634(::Struct_2_D235A7D760E7915C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D235A7D760E7915C))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_E1268E76672F9634_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_00D93B1F0BF92DCB_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_1_OFFSET))();
	}

	::System::Void Method_3_6BDE8CC48AF5F456(::Struct_2_BCEA3C06DDE2274F& a1, ::Struct_2_9FD26085F85DA330& a2, ::System::Single a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BCEA3C06DDE2274F&, ::Struct_2_9FD26085F85DA330&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_6BDE8CC48AF5F456_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_7642E9CE17CC35E4()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_7642E9CE17CC35E4_OFFSET))();
	}

	::System::Void Method_3_05347DDA1DB672E2(::DG::Tweening::Tween* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_05347DDA1DB672E2_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_0370722A97182315_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_0370722A97182315_1_OFFSET))();
	}

	::System::Void Method_3_B4BF8AC648B1D13C(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_B4BF8AC648B1D13C_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::Config::ConfigHollowChessboardScreenUI* Method_3_AE4A43A63594C83F()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardScreenUI*(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_AE4A43A63594C83F_OFFSET))();
	}

	::System::Single Method_3_8B9C0698CE1A77F9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_8B9C0698CE1A77F9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_4B90E6DAAD4A82A5_1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_1_OFFSET))(this);
	}

	static ::System::Single Method_3_00D93B1F0BF92DCB_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_00D93B1F0BF92DCB_2_OFFSET))();
	}

	static ::System::Int32 Method_3_7642E9CE17CC35E4_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_7642E9CE17CC35E4_1_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_4B90E6DAAD4A82A5_2()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_4B90E6DAAD4A82A5_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_068BA662BDC2D5D1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
