#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EVideoPlayMode.h"
#include "unitysdk/System/Object.h"

class Class_1_74ED0770F35826A6;
class Class_2_1611AD1A09A7A324;
namespace CriWare { class CriManaMovieController; }
namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace CriWare::CriMana { class MovieInfo; }
namespace RPG::GameCore { class PlayVideoSequence; }
namespace RPG::GameCore { class RemoveVideoSequence; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Shader; }

#define CLASS_1_59F68D258F7479FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127FDD30)
#define CLASS_1_59F68D258F7479FC_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x128008D0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_0C06B282CF03A384_OFFSET UNITYSDK_OFFSET(0x127FEF90)
#define CLASS_1_59F68D258F7479FC_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x127FE4B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0x127FDE00)
#define CLASS_1_59F68D258F7479FC_METHOD_1_1E69483851063E27_OFFSET UNITYSDK_OFFSET(0x127FFE60)
#define CLASS_1_59F68D258F7479FC_METHOD_1_25C1D63D5CD4CAF9_OFFSET UNITYSDK_OFFSET(0x127FF620)
#define CLASS_1_59F68D258F7479FC_METHOD_1_2D1E645E1D19FB69_OFFSET UNITYSDK_OFFSET(0x127FEC10)
#define CLASS_1_59F68D258F7479FC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x127FE3E0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_3103666BB5017625_OFFSET UNITYSDK_OFFSET(0x12800850)
#define CLASS_1_59F68D258F7479FC_METHOD_1_39552859D0AEFB0B_OFFSET UNITYSDK_OFFSET(0x127FEE90)
#define CLASS_1_59F68D258F7479FC_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x127FE6A0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_40ED258E7B928165_OFFSET UNITYSDK_OFFSET(0x127FE980)
#define CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x127FFCF0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x127FE5F0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x127FEA80)
#define CLASS_1_59F68D258F7479FC_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x127FF300)
#define CLASS_1_59F68D258F7479FC_METHOD_1_57F17F1D6A27CB64_OFFSET UNITYSDK_OFFSET(0x12800720)
#define CLASS_1_59F68D258F7479FC_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x127FF820)
#define CLASS_1_59F68D258F7479FC_METHOD_1_62C0A11808649CEF_OFFSET UNITYSDK_OFFSET(0x12800520)
#define CLASS_1_59F68D258F7479FC_METHOD_1_6E0960EE7D7130DA_OFFSET UNITYSDK_OFFSET(0x127FF050)
#define CLASS_1_59F68D258F7479FC_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x127FE460)
#define CLASS_1_59F68D258F7479FC_METHOD_1_73C75C834F119161_OFFSET UNITYSDK_OFFSET(0x127FFAA0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_7C35D2BC7FBDA31C_OFFSET UNITYSDK_OFFSET(0x127FF6B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_7E4A77EF678E415A_OFFSET UNITYSDK_OFFSET(0x127FF720)
#define CLASS_1_59F68D258F7479FC_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x127FFD40)
#define CLASS_1_59F68D258F7479FC_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x127FFC40)
#define CLASS_1_59F68D258F7479FC_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x127FFA10)
#define CLASS_1_59F68D258F7479FC_METHOD_1_B2040612BB29E8BB_OFFSET UNITYSDK_OFFSET(0x12800130)
#define CLASS_1_59F68D258F7479FC_METHOD_1_B7D7FFB372B90AEB_OFFSET UNITYSDK_OFFSET(0x12800180)
#define CLASS_1_59F68D258F7479FC_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x127FE6F0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127FE660)
#define CLASS_1_59F68D258F7479FC_METHOD_1_E1C90A4641E7FFDC_OFFSET UNITYSDK_OFFSET(0x127FFB00)
#define CLASS_1_59F68D258F7479FC_METHOD_1_E264DC43451ACB03_OFFSET UNITYSDK_OFFSET(0x127FF1B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_F87916206B4C2FC7_OFFSET UNITYSDK_OFFSET(0x127FFFA0)
#define CLASS_1_59F68D258F7479FC_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x128008E0)
#define CLASS_1_59F68D258F7479FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12800AF0)
#define CLASS_1_59F68D258F7479FC__CTOR_OFFSET UNITYSDK_OFFSET(0x128008F0)
#define CLASS_1_59F68D258F7479FC__SPAWNUICONTROLLER_B__24_0_OFFSET UNITYSDK_OFFSET(0x12800B20)
#define CLASS_1_59F68D258F7479FC___CREATEVIDEOTEXTURE_B__22_0_OFFSET UNITYSDK_OFFSET(0x12800B10)

inline static constexpr unsigned int Class_1_59F68D258F7479FC_TypeDefinitionIndex = 67418;

class Class_1_59F68D258F7479FC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x6590);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x6594);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x6598);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_2_1611AD1A09A7A324*>* Field_1_31; // 0x10
	::UnityEngine::Shader* Field_1_15; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74ED0770F35826A6*>* Field_1_2; // 0x20
	::CriWare::CriManaVP9Initializer* Field_1_23; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CriWare::CriManaMovieMaterial*>* Field_1_24; // 0x30
	::System::Collections::Generic::List_1<::Class_1_74ED0770F35826A6*>* Field_1_3; // 0x38
	::CriWare::CriWareErrorHandler* Field_1_22; // 0x40
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_29; // 0x48
	::UnityEngine::GameObject* Field_1_20; // 0x50
	::CriWare::CriWareInitializer* Field_1_21; // 0x58
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_30; // 0x60
	::UnityEngine::Shader* Field_1_14; // 0x68
	::System::Int32 Field_1_26; // 0x70
	::RPG::Client::EVideoPlayMode _PlayMode_k__BackingField; // 0x74
	::System::Boolean Field_1_32; // 0x78
	::System::Boolean Field_1_19; // 0x79
	::System::Single Field_1_1; // 0x7C
	::System::Int32 Field_1_27; // 0x80
	::System::Int32 Field_1_28; // 0x84
	::System::Int32 Field_1_25; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_40ED258E7B928165(::UnityEngine::GameObject* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_40ED258E7B928165_OFFSET))(this, a1, a2);
	}

	::CriWare::CriManaMovieController* Method_1_39552859D0AEFB0B(::System::String* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_39552859D0AEFB0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E0960EE7D7130DA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_6E0960EE7D7130DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_25C1D63D5CD4CAF9(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_25C1D63D5CD4CAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C35D2BC7FBDA31C(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_7C35D2BC7FBDA31C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E4A77EF678E415A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_7E4A77EF678E415A_OFFSET))(this, a1);
	}

	::System::Void Method_1_73C75C834F119161(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_73C75C834F119161_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_1835459715B5D9D1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_1835459715B5D9D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::CriWare::CriManaMovieController* Method_1_0C06B282CF03A384(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_0C06B282CF03A384_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_F87916206B4C2FC7(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_F87916206B4C2FC7_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_1E69483851063E27(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_1E69483851063E27_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_2D1E645E1D19FB69(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_2D1E645E1D19FB69_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2040612BB29E8BB(::CriWare::CriManaMovieMaterial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_B2040612BB29E8BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7D7FFB372B90AEB(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_B7D7FFB372B90AEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_62C0A11808649CEF(::RPG::GameCore::RemoveVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_62C0A11808649CEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E264DC43451ACB03(::System::Int32 a1, ::CriWare::CriManaMovieController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriManaMovieController*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_E264DC43451ACB03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::String* Method_1_57F17F1D6A27CB64(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_57F17F1D6A27CB64_OFFSET))(this, a1);
	}

	::System::String* Method_1_3103666BB5017625(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_3103666BB5017625_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_E1C90A4641E7FFDC(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_E1C90A4641E7FFDC_OFFSET))(this, a1);
	}

	::RPG::Client::EVideoPlayMode get_PlayMode()
	{
		return ((::RPG::Client::EVideoPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_GET_PLAYMODE_OFFSET))(this);
	}

	::System::Void set_PlayMode(::RPG::Client::EVideoPlayMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_SET_PLAYMODE_OFFSET))(this, value);
	}

	::UnityEngine::Shader* __CreateVideoTexture_b__22_0(::CriWare::CriMana::MovieInfo* x, ::System::Boolean y)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC___CREATEVIDEOTEXTURE_B__22_0_OFFSET))(this, x, y);
	}

	::UnityEngine::Shader* _SpawnUIController_b__24_0(::CriWare::CriMana::MovieInfo* x, ::System::Boolean y)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC__SPAWNUICONTROLLER_B__24_0_OFFSET))(this, x, y);
	}
};
