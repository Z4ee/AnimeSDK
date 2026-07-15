#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5.h"
#include "unitysdk/Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89.h"
#include "unitysdk/Class_2_15C1107F59D2E68D_Struct_2_BBD456EBC9087BC2_5.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C3183153408A386B;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_2_15C1107F59D2E68D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x16FAFB80)
#define CLASS_2_15C1107F59D2E68D_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x16FAFA70)
#define CLASS_2_15C1107F59D2E68D_GET_MODE_OFFSET UNITYSDK_OFFSET(0x16FAFB70)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x16FB1F10)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_128DF81C38EA72BC_OFFSET UNITYSDK_OFFSET(0x16FB18F0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_167E40783011A91C_OFFSET UNITYSDK_OFFSET(0x16FB1A10)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16FAFB10)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_1F85DC15AEF5FB48_OFFSET UNITYSDK_OFFSET(0x16FAFD50)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_21E18B6FAC2E919C_OFFSET UNITYSDK_OFFSET(0x16FAFE10)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_2D97D66B45048CF1_OFFSET UNITYSDK_OFFSET(0x16FB0830)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x16FB0DA0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16FB0900)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x16FB2FF0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x16FB0990)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x16FB1F90)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_8D43F0958A959AA1_OFFSET UNITYSDK_OFFSET(0x16FB12B0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_8E816772B3F6C832_OFFSET UNITYSDK_OFFSET(0x16FB2D60)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16FB2CB0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_9DE511C768741E6E_OFFSET UNITYSDK_OFFSET(0x16FB0B10)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_A8690C84E0B74937_OFFSET UNITYSDK_OFFSET(0x16FB30F0)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_AAE1F5499F37A0DA_OFFSET UNITYSDK_OFFSET(0x16FB0C80)
#define CLASS_2_15C1107F59D2E68D_METHOD_2_B7C2832F186B18D5_OFFSET UNITYSDK_OFFSET(0x16FB1E10)
#define CLASS_2_15C1107F59D2E68D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FB38B0)
#define CLASS_2_15C1107F59D2E68D__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAF7D0)

inline static constexpr unsigned int Class_2_15C1107F59D2E68D_TypeDefinitionIndex = 54712;

class Class_2_15C1107F59D2E68D : public ::RPG::GameCore::FreeStyleController
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_15C1107F59D2E68D_TypeDefinitionIndex)->GetStaticField(0x2D9B0);
	}
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_2_1; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::Collections::Generic::SortedSet_1<::Class_2_15C1107F59D2E68D_Struct_2_48F62D3842081F89>* Field_2_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_5; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* Field_2_7; // 0x58
	::Il2CppArray<::Class_2_15C1107F59D2E68D_Struct_2_BBD456EBC9087BC2_5>* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::Class_2_15C1107F59D2E68D_Struct_2_25A926960008E2A5>* Field_2_9; // 0x68
	::System::Int32 Field_2_10; // 0x70
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_11; // 0x74
	::System::Boolean Field_2_12; // 0x98
	::System::Boolean Field_2_13; // 0x99
	::System::Nullable_1<::System::Single> Field_2_14; // 0x9C
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_15; // 0xA4

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_GET_ISPLAYING_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_1F85DC15AEF5FB48(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_1F85DC15AEF5FB48_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2D97D66B45048CF1(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_2D97D66B45048CF1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_21E18B6FAC2E919C(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4, ::System::Nullable_1<::System::Single> a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_21E18B6FAC2E919C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_8D43F0958A959AA1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_8D43F0958A959AA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_167E40783011A91C(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_167E40783011A91C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B7C2832F186B18D5(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_B7C2832F186B18D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_8E816772B3F6C832(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_8E816772B3F6C832_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_2_9DE511C768741E6E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_9DE511C768741E6E_OFFSET))(this);
	}

	::System::Boolean Method_2_622F78E871526932(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_622F78E871526932_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Boolean Method_2_AAE1F5499F37A0DA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_AAE1F5499F37A0DA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_128DF81C38EA72BC(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_128DF81C38EA72BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A8690C84E0B74937(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15C1107F59D2E68D_METHOD_2_A8690C84E0B74937_OFFSET))(this, a1, a2);
	}
};
