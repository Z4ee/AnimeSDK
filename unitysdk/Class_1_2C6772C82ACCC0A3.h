#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/Struct_2_5C4F194DEECB2289.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_066AB55B5826B0C9;
class Class_1_3D8DD98F0436E6C5;
class Class_1_6698EBFD99A3F560;
class Class_1_7C297F0B808B5FA9;
class Class_1_7E55E00A0254799D;
class Class_1_867B6CE75953535A;
class Class_1_E71C5FFECE694C17;
class Class_2_536CC4186B095618;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C6772C82ACCC0A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1675D160)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_00A454A4D5714920_OFFSET UNITYSDK_OFFSET(0x1675F180)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x16761F40)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_0F3B50C3D1B05BB5_OFFSET UNITYSDK_OFFSET(0x1675FB60)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_214C04EEA791FCB5_OFFSET UNITYSDK_OFFSET(0x167614A0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1675F100)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_287C184DCE9CC54F_OFFSET UNITYSDK_OFFSET(0x16760320)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x167613D0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x16760900)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_3DEAA876881764E8_OFFSET UNITYSDK_OFFSET(0x1675F340)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_40A9AF7B6AE5F77E_OFFSET UNITYSDK_OFFSET(0x16761750)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_410AFB0271155FD6_OFFSET UNITYSDK_OFFSET(0x1675EDB0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_453B88EA0D03EE65_OFFSET UNITYSDK_OFFSET(0x1675F8E0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_49D44F568C742CC9_OFFSET UNITYSDK_OFFSET(0x16761440)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_4B4D3CC697868CA9_OFFSET UNITYSDK_OFFSET(0x16760210)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_51073F93B4DC0EAE_OFFSET UNITYSDK_OFFSET(0x16761670)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0x167610A0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_5D9794CEF432D881_OFFSET UNITYSDK_OFFSET(0x1675F6B0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_683F35A5670243E8_OFFSET UNITYSDK_OFFSET(0x1675FFE0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_781CF50FA47EC4BE_OFFSET UNITYSDK_OFFSET(0x1675D520)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x16762350)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x167622C0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_9E7DEA01847BED05_OFFSET UNITYSDK_OFFSET(0x1675FD10)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_9EB9F2083A266861_OFFSET UNITYSDK_OFFSET(0x16761950)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x16760560)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_C54410EC0B98D111_OFFSET UNITYSDK_OFFSET(0x1675F4F0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_CE889B4C90308205_OFFSET UNITYSDK_OFFSET(0x1675FE10)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x1675DC20)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x16761330)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_E3F0876823C41AE9_OFFSET UNITYSDK_OFFSET(0x16760730)
#define CLASS_1_2C6772C82ACCC0A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1675CFF0)

inline static constexpr unsigned int Class_1_2C6772C82ACCC0A3_TypeDefinitionIndex = 32768;

class Class_1_2C6772C82ACCC0A3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_9 = 0x50; // 0x0
	::System::Collections::Generic::List_1<::Class_1_3D8DD98F0436E6C5*>* Field_1_3; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* Field_1_4; // 0x20
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x31
	::System::Boolean Field_1_5; // 0x32
	::System::Boolean Field_1_2; // 0x33
	::System::Int32 Field_1_8; // 0x34

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_EXECUTE_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_00A454A4D5714920(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::Match3::ViewMomentType a4, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::UInt32 a7, ::RPG::GameCore::Match3::BombType a8, ::RPG::GameCore::Match3::PieceTag a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::ViewMomentType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_00A454A4D5714920_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::UInt32 Method_1_3DEAA876881764E8(::System::UInt32 a1, ::System::UInt32 a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3, ::RPG::Client::LittleGame::Match3::GridLocalPoint a4, ::System::UInt32 a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::LittleGame::Match3::GridLocalPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_3DEAA876881764E8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_C54410EC0B98D111(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::RPG::GameCore::Match3::PieceTag a5, ::System::Single a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_C54410EC0B98D111_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_1_5D9794CEF432D881(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::Boolean a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_5D9794CEF432D881_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_1_453B88EA0D03EE65(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_453B88EA0D03EE65_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_0F3B50C3D1B05BB5(::Struct_2_5C4F194DEECB2289 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_5C4F194DEECB2289, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_0F3B50C3D1B05BB5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_CE889B4C90308205(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_CE889B4C90308205_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_683F35A5670243E8(::Class_1_E71C5FFECE694C17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71C5FFECE694C17*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_683F35A5670243E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_410AFB0271155FD6(::Class_1_E71C5FFECE694C17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71C5FFECE694C17*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_410AFB0271155FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_781CF50FA47EC4BE(::Class_1_E71C5FFECE694C17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71C5FFECE694C17*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_781CF50FA47EC4BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E3F0876823C41AE9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_E3F0876823C41AE9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_287C184DCE9CC54F(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_287C184DCE9CC54F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53BD888AED7AAE33(::Class_1_7C297F0B808B5FA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C297F0B808B5FA9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_39C75ED00C6629F7(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_40A9AF7B6AE5F77E(::Class_1_066AB55B5826B0C9* a1, ::RPG::GameCore::Match3::PieceTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_40A9AF7B6AE5F77E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51073F93B4DC0EAE(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_51073F93B4DC0EAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EB9F2083A266861(::Class_1_066AB55B5826B0C9* a1, ::RPG::GameCore::Match3::PieceTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_9EB9F2083A266861_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::Class_1_066AB55B5826B0C9* Method_1_9E7DEA01847BED05(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::Class_1_066AB55B5826B0C9*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_9E7DEA01847BED05_OFFSET))(this, a1);
	}

	::Class_1_6698EBFD99A3F560* Method_1_4B4D3CC697868CA9(::Class_1_E71C5FFECE694C17* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::Class_1_6698EBFD99A3F560*(*)(::PVOID, ::Class_1_E71C5FFECE694C17*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_4B4D3CC697868CA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_214C04EEA791FCB5(::Class_2_536CC4186B095618* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_536CC4186B095618*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_214C04EEA791FCB5_OFFSET))(this, a1);
	}

	::Class_2_536CC4186B095618* Method_1_49D44F568C742CC9()
	{
		return ((::Class_2_536CC4186B095618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_49D44F568C742CC9_OFFSET))(this);
	}

	::Class_1_7E55E00A0254799D* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_7E55E00A0254799D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_995B4AEB9D9468D5_OFFSET))(this);
	}
};
