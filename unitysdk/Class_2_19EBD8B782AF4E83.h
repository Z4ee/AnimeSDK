#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_1.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_2.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

class Class_3_2B9A2A547F68AE05;
class Class_3_3B42BC0680587011;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F2DAD7F45F518868;
class Class_3_F33F9DC5F4112336;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { template <typename T> class ManagedListJobWrapper_1; }
namespace UnrealTypes { template <typename T> class ManagedStructListJobWrapper_1; }

#define CLASS_2_19EBD8B782AF4E83_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD85F100)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_059C8EBBED1C5988_OFFSET UNITYSDK_OFFSET(0xD85F6F0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_0DC83DAD98592ADE_OFFSET UNITYSDK_OFFSET(0xD861D60)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_2F80C3B4EA60248D_OFFSET UNITYSDK_OFFSET(0xD861640)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_38E45A079CC50DD0_OFFSET UNITYSDK_OFFSET(0xD861EE0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_3949F1AD598530E1_OFFSET UNITYSDK_OFFSET(0xD85F860)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_39764272A7CF6D73_OFFSET UNITYSDK_OFFSET(0xD860A50)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_3BC92352E9BBDEC6_OFFSET UNITYSDK_OFFSET(0xD8617B0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_433C14B5D738673A_OFFSET UNITYSDK_OFFSET(0xD8626B0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_55157FBA4997D865_1_OFFSET UNITYSDK_OFFSET(0xD860480)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0xD860340)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_5FD0571BC01DE104_OFFSET UNITYSDK_OFFSET(0xD862970)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_628533EB821D350E_OFFSET UNITYSDK_OFFSET(0xD85FA00)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_746AAA5C6D5B202D_OFFSET UNITYSDK_OFFSET(0xD861940)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_750954CECB64E472_OFFSET UNITYSDK_OFFSET(0xD85EDA0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_763767D3135CEADD_OFFSET UNITYSDK_OFFSET(0xD861400)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_76766A4F373B37CE_OFFSET UNITYSDK_OFFSET(0xD861BF0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_77576461188475ED_OFFSET UNITYSDK_OFFSET(0xD860E40)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_7D55B45CF18D6A43_OFFSET UNITYSDK_OFFSET(0xD860BA0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_7E93B85BA6D04B20_OFFSET UNITYSDK_OFFSET(0xD85FD10)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_8729A3CE066528E0_OFFSET UNITYSDK_OFFSET(0xD861120)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_88911F2AAD9434D7_OFFSET UNITYSDK_OFFSET(0xD8614D0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_88DF5DD0B1A87BDC_OFFSET UNITYSDK_OFFSET(0xD8608E0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_9F39642F18FA6964_OFFSET UNITYSDK_OFFSET(0xD85FEA0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_A1737781AED417C7_OFFSET UNITYSDK_OFFSET(0xD861A50)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xD8601C0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_B191DEE39F9D3F2F_OFFSET UNITYSDK_OFFSET(0xD862120)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_B550001360FE5691_OFFSET UNITYSDK_OFFSET(0xD85FB90)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_C1A49BB1C46BAEF1_OFFSET UNITYSDK_OFFSET(0xD860030)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD85F0C0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD85F080)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_CF70EB4039EBD402_OFFSET UNITYSDK_OFFSET(0xD860750)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_DF765799DD6530B2_OFFSET UNITYSDK_OFFSET(0xD861290)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_EACB60412A4F639B_OFFSET UNITYSDK_OFFSET(0xD860CD0)
#define CLASS_2_19EBD8B782AF4E83_METHOD_2_FA4E7D02BF03CAEA_OFFSET UNITYSDK_OFFSET(0xD8605C0)
#define CLASS_2_19EBD8B782AF4E83_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD85EC10)
#define CLASS_2_19EBD8B782AF4E83__CCTOR_OFFSET UNITYSDK_OFFSET(0xD85F5E0)
#define CLASS_2_19EBD8B782AF4E83__CTOR_OFFSET UNITYSDK_OFFSET(0xD85F3D0)

inline static constexpr unsigned int Class_2_19EBD8B782AF4E83_TypeDefinitionIndex = 65257;

class Class_2_19EBD8B782AF4E83 : public ::Foundation::SingletonDisposable_1<::Class_2_19EBD8B782AF4E83*>
{
public:
	static ::System::Action_6<::Class_3_2B9A2A547F68AE05*, ::Class_3_707412604A129938*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_883E597458B91E77*, ::Class_3_F33F9DC5F4112336*, ::Class_3_3B42BC0680587011*>** StaticGet_Field_2_13()
	{
		return (::System::Action_6<::Class_3_2B9A2A547F68AE05*, ::Class_3_707412604A129938*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_883E597458B91E77*, ::Class_3_F33F9DC5F4112336*, ::Class_3_3B42BC0680587011*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EBD8B782AF4E83_TypeDefinitionIndex)->GetStaticField(0x51B30);
	}
	static ::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*>** StaticGet_Field_2_14()
	{
		return (::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EBD8B782AF4E83_TypeDefinitionIndex)->GetStaticField(0x51B38);
	}
	static ::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet_Field_2_15()
	{
		return (::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EBD8B782AF4E83_TypeDefinitionIndex)->GetStaticField(0x51B40);
	}
	static ::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*>** StaticGet_Field_2_8()
	{
		return (::System::Action_2<::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EBD8B782AF4E83_TypeDefinitionIndex)->GetStaticField(0x51B48);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19EBD8B782AF4E83_TypeDefinitionIndex)->GetStaticField(0x12EA0);
	}
	// static const ::System::Int32 Field_2_6 = 0x80; // 0x0
	::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>* Field_2_11; // 0x10
	::Nap::NapECS::EcsFilter* Field_2_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Struct_2_B136CFD8FB6B8F37_1>* Field_2_7; // 0x20
	::UnrealTypes::ManagedStructListJobWrapper_1<::StateTreeCore::StateTreeInstanceData>* Field_2_5; // 0x28
	::UnrealTypes::ManagedListJobWrapper_1<::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree>>* Field_2_4; // 0x30
	::UnrealTypes::ManagedStructListJobWrapper_1<::StateTreeCore::StateTree>* Field_2_0; // 0x38
	::Nap::NapECS::EcsFilter* Field_2_9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_059C8EBBED1C5988(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::Foundation::Unreal::FName a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_059C8EBBED1C5988_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3949F1AD598530E1(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_3949F1AD598530E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_628533EB821D350E(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::Foundation::Unreal::FName& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_628533EB821D350E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_B550001360FE5691(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::UnrealTypes::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_B550001360FE5691_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_7E93B85BA6D04B20(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_7E93B85BA6D04B20_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_9F39642F18FA6964(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_9F39642F18FA6964_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_C1A49BB1C46BAEF1(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Byte& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_C1A49BB1C46BAEF1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FA4E7D02BF03CAEA(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::UInt64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_FA4E7D02BF03CAEA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_CF70EB4039EBD402(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_CF70EB4039EBD402_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_88DF5DD0B1A87BDC(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_88DF5DD0B1A87BDC_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_39764272A7CF6D73(::Class_3_2B9A2A547F68AE05* a1, ::Class_3_F2DAD7F45F518868* a2)
	{
		return ((::System::Void(*)(::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_39764272A7CF6D73_OFFSET))(a1, a2);
	}

	::System::Void Method_2_7D55B45CF18D6A43(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_7D55B45CF18D6A43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Boolean Method_2_EACB60412A4F639B(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Double a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_EACB60412A4F639B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_77576461188475ED(::Class_3_2B9A2A547F68AE05* a1, ::Class_3_707412604A129938* a2, ::Class_3_C93CC3D2C2AC4067* a3, ::Class_3_883E597458B91E77* a4, ::Class_3_F33F9DC5F4112336* a5, ::Class_3_3B42BC0680587011* a6)
	{
		return ((::System::Void(*)(::Class_3_2B9A2A547F68AE05*, ::Class_3_707412604A129938*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_883E597458B91E77*, ::Class_3_F33F9DC5F4112336*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_77576461188475ED_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_8729A3CE066528E0(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Int64 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_8729A3CE066528E0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_DF765799DD6530B2(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_DF765799DD6530B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_750954CECB64E472(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_750954CECB64E472_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_763767D3135CEADD(::Class_3_2B9A2A547F68AE05* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_2B9A2A547F68AE05*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_763767D3135CEADD_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_88911F2AAD9434D7(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Byte a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_88911F2AAD9434D7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2F80C3B4EA60248D(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_2F80C3B4EA60248D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3BC92352E9BBDEC6(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_3BC92352E9BBDEC6_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_746AAA5C6D5B202D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_746AAA5C6D5B202D_OFFSET))(a1);
	}

	::System::Boolean Method_2_A1737781AED417C7(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Double& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_A1737781AED417C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_76766A4F373B37CE(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_76766A4F373B37CE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0DC83DAD98592ADE(::Struct_2_B136CFD8FB6B8F37_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_0DC83DAD98592ADE_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_38E45A079CC50DD0(::Class_3_2B9A2A547F68AE05* a1, ::Class_3_F2DAD7F45F518868* a2)
	{
		return ((::System::Void(*)(::Class_3_2B9A2A547F68AE05*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_38E45A079CC50DD0_OFFSET))(a1, a2);
	}

	::Struct_2_B136CFD8FB6B8F37_1 Method_2_B191DEE39F9D3F2F(::Foundation::AssetPath a1)
	{
		return ((::Struct_2_B136CFD8FB6B8F37_1(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_B191DEE39F9D3F2F_OFFSET))(this, a1);
	}

	::Struct_2_B136CFD8FB6B8F37_2 Method_2_433C14B5D738673A(::Foundation::AssetPath a1, ::UnrealTypes::Object* a2, ::System::Int32 a3)
	{
		return ((::Struct_2_B136CFD8FB6B8F37_2(*)(::PVOID, ::Foundation::AssetPath, ::UnrealTypes::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_433C14B5D738673A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_5FD0571BC01DE104(::Struct_2_B136CFD8FB6B8F37_2 a1, ::Foundation::Unreal::FName a2, ::System::UInt64 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37_2, ::Foundation::Unreal::FName, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_5FD0571BC01DE104_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_55157FBA4997D865_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19EBD8B782AF4E83_METHOD_2_55157FBA4997D865_1_OFFSET))(this);
	}
};
