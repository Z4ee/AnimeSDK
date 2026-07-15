#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EVideoPlayMode.h"
#include "unitysdk/System/Object.h"

class Class_1_0A58DDD24CA46B3B;
class Class_2_01B0F6BEFDB261A2;
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

#define CLASS_1_DB8D2359E085AA87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1732BB30)
#define CLASS_1_DB8D2359E085AA87_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x1732E750)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_102AF9E4BB61DA4D_OFFSET UNITYSDK_OFFSET(0x1732DCA0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1732C290)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_187B835A9D811184_OFFSET UNITYSDK_OFFSET(0x1732BC00)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_25C1D63D5CD4CAF9_OFFSET UNITYSDK_OFFSET(0x1732D3C0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_2BFC239DC1CC6011_OFFSET UNITYSDK_OFFSET(0x1732DFE0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_2D1E645E1D19FB69_OFFSET UNITYSDK_OFFSET(0x1732CA00)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1732C1C0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_3103666BB5017625_OFFSET UNITYSDK_OFFSET(0x1732E6D0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x1732C480)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_3CADA8B8868A94B7_OFFSET UNITYSDK_OFFSET(0x1732D000)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_40ED258E7B928165_OFFSET UNITYSDK_OFFSET(0x1732C780)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_41257D8583D30E48_OFFSET UNITYSDK_OFFSET(0x1732E3B0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1732C3D0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1732C870)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x1732DB80)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_57F17F1D6A27CB64_OFFSET UNITYSDK_OFFSET(0x1732E5E0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_6250E00298E4B8BC_OFFSET UNITYSDK_OFFSET(0x1732CC90)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x1732D5D0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_73C75C834F119161_OFFSET UNITYSDK_OFFSET(0x1732D8B0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_7C35D2BC7FBDA31C_OFFSET UNITYSDK_OFFSET(0x1732D450)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_9407BADC2B8047B6_OFFSET UNITYSDK_OFFSET(0x1732CD80)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1732DB10)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_99CAAAB23A959235_OFFSET UNITYSDK_OFFSET(0x1732D920)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_9F2F0B0E740BB579_OFFSET UNITYSDK_OFFSET(0x1732D4C0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x1732DA60)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1732D820)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_B2040612BB29E8BB_OFFSET UNITYSDK_OFFSET(0x1732DF90)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1732C4D0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1732C440)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_DFC263D3AB138D01_OFFSET UNITYSDK_OFFSET(0x1732CE40)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1732C240)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_F87916206B4C2FC7_OFFSET UNITYSDK_OFFSET(0x1732DDF0)
#define CLASS_1_DB8D2359E085AA87_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x1732D1A0)
#define CLASS_1_DB8D2359E085AA87_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x1732E760)
#define CLASS_1_DB8D2359E085AA87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1732E970)
#define CLASS_1_DB8D2359E085AA87__CTOR_OFFSET UNITYSDK_OFFSET(0x1732E770)
#define CLASS_1_DB8D2359E085AA87__SPAWNUICONTROLLER_B__24_0_OFFSET UNITYSDK_OFFSET(0x1732E9A0)
#define CLASS_1_DB8D2359E085AA87___CREATEVIDEOTEXTURE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1732E990)

inline static constexpr unsigned int Class_1_DB8D2359E085AA87_TypeDefinitionIndex = 69862;

class Class_1_DB8D2359E085AA87 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB8D2359E085AA87_TypeDefinitionIndex)->GetStaticField(0xCA40);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB8D2359E085AA87_TypeDefinitionIndex)->GetStaticField(0xCA44);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB8D2359E085AA87_TypeDefinitionIndex)->GetStaticField(0xCA48);
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
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_12; // 0x10
	::UnityEngine::GameObject* Field_1_13; // 0x18
	::CriWare::CriWareInitializer* Field_1_14; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CriWare::CriManaMovieMaterial*>* Field_1_15; // 0x28
	::CriWare::CriManaVP9Initializer* Field_1_16; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0A58DDD24CA46B3B*>* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0A58DDD24CA46B3B*>* Field_1_18; // 0x40
	::CriWare::CriWareErrorHandler* Field_1_19; // 0x48
	::UnityEngine::Shader* Field_1_20; // 0x50
	::System::Collections::Generic::List_1<::CriWare::CriManaMovieController*>* Field_1_21; // 0x58
	::System::Collections::Generic::HashSet_1<::Class_2_01B0F6BEFDB261A2*>* Field_1_22; // 0x60
	::UnityEngine::Shader* Field_1_23; // 0x68
	::System::Boolean Field_1_24; // 0x70
	::System::Boolean Field_1_25; // 0x71
	::System::Single Field_1_26; // 0x74
	::System::Int32 Field_1_27; // 0x78
	::System::Int32 Field_1_28; // 0x7C
	::System::Int32 Field_1_29; // 0x80
	::RPG::Client::EVideoPlayMode _PlayMode_k__BackingField; // 0x84
	::System::Int32 Field_1_31; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_40ED258E7B928165(::UnityEngine::GameObject* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_40ED258E7B928165_OFFSET))(this, a1, a2);
	}

	::CriWare::CriManaMovieController* Method_1_6250E00298E4B8BC(::System::String* a1, ::System::Int32& a2)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_6250E00298E4B8BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFC263D3AB138D01(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_DFC263D3AB138D01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_25C1D63D5CD4CAF9(::Class_2_01B0F6BEFDB261A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_01B0F6BEFDB261A2*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_25C1D63D5CD4CAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C35D2BC7FBDA31C(::Class_2_01B0F6BEFDB261A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_01B0F6BEFDB261A2*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_7C35D2BC7FBDA31C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F2F0B0E740BB579(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_9F2F0B0E740BB579_OFFSET))(this, a1);
	}

	::System::Void Method_1_73C75C834F119161(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_73C75C834F119161_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_187B835A9D811184(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_187B835A9D811184_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_AA169839CB93802A_1_OFFSET))(this);
	}

	::CriWare::CriManaMovieController* Method_1_9407BADC2B8047B6(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_9407BADC2B8047B6_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_F87916206B4C2FC7(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_F87916206B4C2FC7_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieController* Method_1_102AF9E4BB61DA4D(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_102AF9E4BB61DA4D_OFFSET))(this, a1);
	}

	::CriWare::CriManaMovieControllerForUI* Method_1_2D1E645E1D19FB69(::System::String* a1)
	{
		return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_2D1E645E1D19FB69_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2040612BB29E8BB(::CriWare::CriManaMovieMaterial* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_B2040612BB29E8BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BFC239DC1CC6011(::RPG::GameCore::PlayVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_2BFC239DC1CC6011_OFFSET))(this, a1);
	}

	::System::Void Method_1_41257D8583D30E48(::RPG::GameCore::RemoveVideoSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveVideoSequence*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_41257D8583D30E48_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CADA8B8868A94B7(::System::Int32 a1, ::CriWare::CriManaMovieController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriManaMovieController*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_3CADA8B8868A94B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void Method_1_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::String* Method_1_57F17F1D6A27CB64(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_57F17F1D6A27CB64_OFFSET))(this, a1);
	}

	::System::String* Method_1_3103666BB5017625(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_3103666BB5017625_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_99CAAAB23A959235(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_METHOD_1_99CAAAB23A959235_OFFSET))(this, a1);
	}

	::RPG::Client::EVideoPlayMode get_PlayMode()
	{
		return ((::RPG::Client::EVideoPlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_GET_PLAYMODE_OFFSET))(this);
	}

	::System::Void set_PlayMode(::RPG::Client::EVideoPlayMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EVideoPlayMode))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87_SET_PLAYMODE_OFFSET))(this, a1);
	}

	::UnityEngine::Shader* __CreateVideoTexture_b__22_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87___CREATEVIDEOTEXTURE_B__22_0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Shader* _SpawnUIController_b__24_0(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB8D2359E085AA87__SPAWNUICONTROLLER_B__24_0_OFFSET))(this, a1, a2);
	}
};
