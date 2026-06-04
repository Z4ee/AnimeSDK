#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EVideoPlayMode.h"
#include "unitysdk/System/Object.h"

class Class_1_0A58DDD24CA46B3B;
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

#define CLASS_1_59F68D258F7479FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1375FC70)
#define CLASS_1_59F68D258F7479FC_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x13762950)
#define CLASS_1_59F68D258F7479FC_METHOD_1_102AF9E4BB61DA4D_OFFSET UNITYSDK_OFFSET(0x13761E60)
#define CLASS_1_59F68D258F7479FC_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13761C40)
#define CLASS_1_59F68D258F7479FC_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x137603C0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_25C1D63D5CD4CAF9_OFFSET UNITYSDK_OFFSET(0x137615B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_2BFC239DC1CC6011_OFFSET UNITYSDK_OFFSET(0x137621A0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_2D1E645E1D19FB69_OFFSET UNITYSDK_OFFSET(0x13760B20)
#define CLASS_1_59F68D258F7479FC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x137602F0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_3103666BB5017625_OFFSET UNITYSDK_OFFSET(0x137628D0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_39552859D0AEFB0B_OFFSET UNITYSDK_OFFSET(0x13760DB0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x137605B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_3CADA8B8868A94B7_OFFSET UNITYSDK_OFFSET(0x13761130)
#define CLASS_1_59F68D258F7479FC_METHOD_1_40ED258E7B928165_OFFSET UNITYSDK_OFFSET(0x13760890)
#define CLASS_1_59F68D258F7479FC_METHOD_1_41257D8583D30E48_OFFSET UNITYSDK_OFFSET(0x13762570)
#define CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13761CF0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13760500)
#define CLASS_1_59F68D258F7479FC_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x13760990)
#define CLASS_1_59F68D258F7479FC_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x13761D40)
#define CLASS_1_59F68D258F7479FC_METHOD_1_57F17F1D6A27CB64_OFFSET UNITYSDK_OFFSET(0x137627A0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_73C75C834F119161_OFFSET UNITYSDK_OFFSET(0x13761AA0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_7C35D2BC7FBDA31C_OFFSET UNITYSDK_OFFSET(0x13761640)
#define CLASS_1_59F68D258F7479FC_METHOD_1_9407BADC2B8047B6_OFFSET UNITYSDK_OFFSET(0x13760EB0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_99CAAAB23A959235_OFFSET UNITYSDK_OFFSET(0x13761B00)
#define CLASS_1_59F68D258F7479FC_METHOD_1_9F2F0B0E740BB579_OFFSET UNITYSDK_OFFSET(0x137616B0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_A0E0FB8E164709DE_OFFSET UNITYSDK_OFFSET(0x137617D0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13761A10)
#define CLASS_1_59F68D258F7479FC_METHOD_1_B2040612BB29E8BB_OFFSET UNITYSDK_OFFSET(0x13762150)
#define CLASS_1_59F68D258F7479FC_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x137612D0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x13760600)
#define CLASS_1_59F68D258F7479FC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13760570)
#define CLASS_1_59F68D258F7479FC_METHOD_1_DFC263D3AB138D01_OFFSET UNITYSDK_OFFSET(0x13760F70)
#define CLASS_1_59F68D258F7479FC_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x13760370)
#define CLASS_1_59F68D258F7479FC_METHOD_1_F87916206B4C2FC7_OFFSET UNITYSDK_OFFSET(0x13761FB0)
#define CLASS_1_59F68D258F7479FC_METHOD_1_FB2B76D3FA17269F_OFFSET UNITYSDK_OFFSET(0x1375FD40)
#define CLASS_1_59F68D258F7479FC_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x13762960)
#define CLASS_1_59F68D258F7479FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13762B70)
#define CLASS_1_59F68D258F7479FC__CTOR_OFFSET UNITYSDK_OFFSET(0x13762970)
#define CLASS_1_59F68D258F7479FC__SPAWNUICONTROLLER_B__24_0_OFFSET UNITYSDK_OFFSET(0x13762BA0)
#define CLASS_1_59F68D258F7479FC___CREATEVIDEOTEXTURE_B__22_0_OFFSET UNITYSDK_OFFSET(0x13762B90)

inline static constexpr unsigned int Class_1_59F68D258F7479FC_TypeDefinitionIndex = 68370;

class Class_1_59F68D258F7479FC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x10CF0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x10CF4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_59F68D258F7479FC_TypeDefinitionIndex)->GetStaticField(0x10CF8);
	}
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	::CriWare::CriManaVP9Initializer* Field_1_13; // 0x10
	::UnityEngine::Shader* Field_1_14; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0A58DDD24CA46B3B*>* Field_1_15; // 0x20
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_16; // 0x28
	::UnityEngine::Shader* Field_1_17; // 0x30
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_18; // 0x38
	::CriWare::CriWareInitializer* Field_1_19; // 0x40
	::CriWare::CriWareErrorHandler* Field_1_20; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CriWare::CriManaMovieMaterial*>* Field_1_21; // 0x50
	::System::Collections::Generic::HashSet_1<::Class_2_1611AD1A09A7A324*>* Field_1_22; // 0x58
	::UnityEngine::GameObject* Field_1_23; // 0x60
	::System::Collections::Generic::List_1<::Class_1_0A58DDD24CA46B3B*>* Field_1_24; // 0x68
	::System::Boolean Field_1_25; // 0x70
	::System::Boolean Field_1_26; // 0x71
	::RPG::Client::EVideoPlayMode _PlayMode_k__BackingField; // 0x74
	::System::Int32 Field_1_28; // 0x78
	::System::Int32 Field_1_29; // 0x7C
	::System::Single Field_1_30; // 0x80
	::System::Int32 Field_1_31; // 0x84
	::System::Int32 Field_1_32; // 0x88

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

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
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

	::System::Void Method_1_DFC263D3AB138D01(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_DFC263D3AB138D01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_25C1D63D5CD4CAF9(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_25C1D63D5CD4CAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C35D2BC7FBDA31C(::Class_2_1611AD1A09A7A324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1611AD1A09A7A324*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_7C35D2BC7FBDA31C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F2F0B0E740BB579(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_9F2F0B0E740BB579_OFFSET))(this, a1);
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

	::System::Void Method_1_FB2B76D3FA17269F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_FB2B76D3FA17269F_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::CriWare::CriManaMovieController* Method_1_9407BADC2B8047B6(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_9407BADC2B8047B6_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_F87916206B4C2FC7(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_F87916206B4C2FC7_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_102AF9E4BB61DA4D(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_102AF9E4BB61DA4D_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_2D1E645E1D19FB69(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_2D1E645E1D19FB69_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2040612BB29E8BB(::CriWare::CriManaMovieMaterial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_B2040612BB29E8BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BFC239DC1CC6011(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_2BFC239DC1CC6011_OFFSET))(this, a1);
	}

	::System::Void Method_1_41257D8583D30E48(::RPG::GameCore::RemoveVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_41257D8583D30E48_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CADA8B8868A94B7(::System::Int32 a1, ::CriWare::CriManaMovieController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriManaMovieController*))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_3CADA8B8868A94B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void Method_1_A0E0FB8E164709DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_A0E0FB8E164709DE_OFFSET))(this);
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

	::System::Void Method_1_99CAAAB23A959235(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_METHOD_1_99CAAAB23A959235_OFFSET))(this, a1);
	}

	::RPG::Client::EVideoPlayMode get_PlayMode()
	{
		return ((::RPG::Client::EVideoPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_GET_PLAYMODE_OFFSET))(this);
	}

	::System::Void set_PlayMode(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC_SET_PLAYMODE_OFFSET))(this, a1);
	}

	::UnityEngine::Shader* __CreateVideoTexture_b__22_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC___CREATEVIDEOTEXTURE_B__22_0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Shader* _SpawnUIController_b__24_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F68D258F7479FC__SPAWNUICONTROLLER_B__24_0_OFFSET))(this, a1, a2);
	}
};
