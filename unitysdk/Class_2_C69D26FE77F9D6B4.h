#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C69D26FE77F9D6B4_Struct_2_25A926960008E2A5.h"
#include "unitysdk/Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89.h"
#include "unitysdk/Class_2_C69D26FE77F9D6B4_Struct_2_BBD456EBC9087BC2_5.h"
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

#define CLASS_2_C69D26FE77F9D6B4_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1186A520)
#define CLASS_2_C69D26FE77F9D6B4_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1186A3F0)
#define CLASS_2_C69D26FE77F9D6B4_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1186A510)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1186CA00)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_167E40783011A91C_OFFSET UNITYSDK_OFFSET(0x1186C4D0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1186A4A0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_1F85DC15AEF5FB48_OFFSET UNITYSDK_OFFSET(0x1186A6D0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_2D97D66B45048CF1_OFFSET UNITYSDK_OFFSET(0x1186B250)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1186B7F0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_4C1D2A1C77C6B62F_OFFSET UNITYSDK_OFFSET(0x1186DAC0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_4EA8229CB596B3D2_OFFSET UNITYSDK_OFFSET(0x1186E0A0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_532E79473A88D04E_OFFSET UNITYSDK_OFFSET(0x1186E300)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_53515DED96891DBC_OFFSET UNITYSDK_OFFSET(0x1186E390)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_547129A2049405D7_OFFSET UNITYSDK_OFFSET(0x1186E270)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x1186D9C0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1186E410)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x1186B3C0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1186E420)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0x1186D750)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1186CA90)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_8AC9091F5886860B_OFFSET UNITYSDK_OFFSET(0x1186C3A0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_8D43F0958A959AA1_OFFSET UNITYSDK_OFFSET(0x1186BD00)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_9303998139B8BB5C_OFFSET UNITYSDK_OFFSET(0x1186C8E0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1186B320)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_9DE511C768741E6E_OFFSET UNITYSDK_OFFSET(0x1186B550)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_A1BE3C228C396631_OFFSET UNITYSDK_OFFSET(0x1186B6C0)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_A2AD7128AE5EFF65_OFFSET UNITYSDK_OFFSET(0x1186A790)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1186D690)
#define CLASS_2_C69D26FE77F9D6B4_METHOD_2_E8CC33401B1EA38B_OFFSET UNITYSDK_OFFSET(0x1186E180)
#define CLASS_2_C69D26FE77F9D6B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1186DF90)
#define CLASS_2_C69D26FE77F9D6B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1186A1A0)
#define CLASS_2_C69D26FE77F9D6B4___IFIXBASEPROXY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1186E090)
#define CLASS_2_C69D26FE77F9D6B4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1186E010)

inline static constexpr unsigned int Class_2_C69D26FE77F9D6B4_TypeDefinitionIndex = 52790;

class Class_2_C69D26FE77F9D6B4 : public ::RPG::GameCore::FreeStyleController
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C69D26FE77F9D6B4_TypeDefinitionIndex)->GetStaticField(0x18350);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* Field_2_1; // 0x28
	::System::String* Field_2_0; // 0x30
	::Il2CppArray<::Class_2_C69D26FE77F9D6B4_Struct_2_BBD456EBC9087BC2_5>* Field_2_14; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_3; // 0x48
	::System::Collections::Generic::SortedSet_1<::Class_2_C69D26FE77F9D6B4_Struct_2_48F62D3842081F89>* Field_2_13; // 0x50
	::RPG::GameCore::FreeStyleMotionInfoConfig* Field_2_11; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x60
	::System::Collections::Generic::List_1<::Class_2_C69D26FE77F9D6B4_Struct_2_25A926960008E2A5>* Field_2_2; // 0x68
	::System::Boolean Field_2_6; // 0x70
	::System::Boolean Field_2_7; // 0x71
	::System::Nullable_1<::System::Single> Field_2_8; // 0x74
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_12; // 0x7C
	::System::Nullable_1<::Struct_2_648594091F1A68D6> Field_2_9; // 0xA0
	::System::Int32 Field_2_10; // 0xC4

	::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4__CCTOR_OFFSET))();
	}

	::System::Boolean get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_GET_ISPLAYING_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::EFreeStyleControlMode get_Mode()
	{
		return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_GET_MODE_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_1F85DC15AEF5FB48(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_1F85DC15AEF5FB48_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2D97D66B45048CF1(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_2D97D66B45048CF1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A2AD7128AE5EFF65(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4, ::System::Nullable_1<::System::Single> a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_A2AD7128AE5EFF65_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_8D43F0958A959AA1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_8D43F0958A959AA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_167E40783011A91C(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_167E40783011A91C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9303998139B8BB5C(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_9303998139B8BB5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_7A8604A90B40E6A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_7A8604A90B40E6A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::UInt32 Method_2_9DE511C768741E6E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_9DE511C768741E6E_OFFSET))(this);
	}

	::System::Boolean Method_2_622F78E871526932(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_622F78E871526932_OFFSET))(this, a1);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Boolean Method_2_A1BE3C228C396631(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_A1BE3C228C396631_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8AC9091F5886860B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_8AC9091F5886860B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4C1D2A1C77C6B62F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_4C1D2A1C77C6B62F_OFFSET))(this, a1, a2);
	}

	::System::Boolean __iFixBaseProxy_get_IsPlaying()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4___IFIXBASEPROXY_GET_ISPLAYING_OFFSET))(this);
	}

	::Class_1_C3183153408A386B* __iFixBaseProxy_get_Info()
	{
		return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4___IFIXBASEPROXY_GET_INFO_OFFSET))(this);
	}

	::System::Void Method_2_4EA8229CB596B3D2(::System::UInt32 P0, ::RPG::GameCore::FreeStyleMotionInfoConfig* P1, ::System::Nullable_1<::Struct_2_648594091F1A68D6> P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_4EA8229CB596B3D2_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_E8CC33401B1EA38B(::System::UInt32 P0, ::RPG::GameCore::FreeStyleMotionInfoConfig* P1, ::System::Nullable_1<::Struct_2_648594091F1A68D6> P2, ::System::Boolean P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_E8CC33401B1EA38B_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_2_547129A2049405D7(::System::Int32 P0, ::System::Single P1, ::System::Single P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_547129A2049405D7_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_532E79473A88D04E(::System::Int32 P0, ::System::Single P1, ::System::Single P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_532E79473A88D04E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_53515DED96891DBC(::System::Boolean P0, ::Struct_2_D3B84DD3734B83D6 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_53515DED96891DBC_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C69D26FE77F9D6B4_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
