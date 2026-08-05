#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_0F09057DF4F3DE6D_Struct_2_04EE0A3341480476_2.h"
#include "unitysdk/Class_3_0F09057DF4F3DE6D_Struct_2_F7C243F317D8E44A_3.h"

class Class_1_82297B6AFFE49354_1;
class Class_1_CA393D2401CE0314;
class Class_1_FD97D7F2D0A87B2D;
class Class_2_1D144748B0C0612C;
class Class_2_208CC9941471731A_1194;
class Class_2_3041491E87EDD6BE;
class Class_2_32520919786CA466;
class Class_3_D85E5E0CE519F26A;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0F09057DF4F3DE6D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x18132C70)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_049298ECCF65591C_OFFSET UNITYSDK_OFFSET(0x1A88D1C0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_2076A865AACE7F96_OFFSET UNITYSDK_OFFSET(0x1A88E4F0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_22CDD5C4C3890601_OFFSET UNITYSDK_OFFSET(0x1A88DC10)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_2432311F40A5A67D_OFFSET UNITYSDK_OFFSET(0x18134530)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_468C7E56F0523E04_OFFSET UNITYSDK_OFFSET(0x1A88DA60)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_83DB59FC1F24D655_OFFSET UNITYSDK_OFFSET(0x1A88DAB0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_99026A62B446F5CE_OFFSET UNITYSDK_OFFSET(0x18134B40)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_AF3C4CF207018C1B_OFFSET UNITYSDK_OFFSET(0x181347A0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_B139304E330B26B3_OFFSET UNITYSDK_OFFSET(0x1A88DD70)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_B1E5B1AA2106CC23_OFFSET UNITYSDK_OFFSET(0x181333A0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_B312512C8BD7542A_OFFSET UNITYSDK_OFFSET(0x1A88D6E0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_B9872C68271F11C5_OFFSET UNITYSDK_OFFSET(0x18134220)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x181344A0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_C7F2057DDA569B70_OFFSET UNITYSDK_OFFSET(0x18133070)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18133660)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_CAA2A441FA9D571E_OFFSET UNITYSDK_OFFSET(0x18134610)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_CDF81FCBB79FBE89_OFFSET UNITYSDK_OFFSET(0x1A88D390)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_D3B8DD9112484CAA_OFFSET UNITYSDK_OFFSET(0x1A88DA10)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_E888D2136A25678A_OFFSET UNITYSDK_OFFSET(0x1A88CCD0)
#define CLASS_3_0F09057DF4F3DE6D_METHOD_3_EF3E53C2DBA3496E_OFFSET UNITYSDK_OFFSET(0x181336F0)
#define CLASS_3_0F09057DF4F3DE6D_UPDATE_OFFSET UNITYSDK_OFFSET(0x18132E30)
#define CLASS_3_0F09057DF4F3DE6D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18132FE0)
#define CLASS_3_0F09057DF4F3DE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x18132F90)

inline static constexpr unsigned int Class_3_0F09057DF4F3DE6D_TypeDefinitionIndex = 66959;

class Class_3_0F09057DF4F3DE6D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_FD97D7F2D0A87B2D*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_FD97D7F2D0A87B2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0F09057DF4F3DE6D_TypeDefinitionIndex)->GetStaticField(0x49990);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_C7F2057DDA569B70(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_C7F2057DDA569B70_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Int32 Method_3_EF3E53C2DBA3496E(::Class_3_D85E5E0CE519F26A* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Int32(*)(::Class_3_D85E5E0CE519F26A*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_EF3E53C2DBA3496E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_B1E5B1AA2106CC23(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_B1E5B1AA2106CC23_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::Class_2_3041491E87EDD6BE* Method_3_B9872C68271F11C5(::Class_2_208CC9941471731A_1194* a1)
	{
		return ((::Class_2_3041491E87EDD6BE*(*)(::PVOID, ::Class_2_208CC9941471731A_1194*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_B9872C68271F11C5_OFFSET))(this, a1);
	}

	::Class_2_32520919786CA466* Method_3_2432311F40A5A67D(::Class_2_208CC9941471731A_1194* a1)
	{
		return ((::Class_2_32520919786CA466*(*)(::PVOID, ::Class_2_208CC9941471731A_1194*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_2432311F40A5A67D_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_3_CAA2A441FA9D571E(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_CAA2A441FA9D571E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AF3C4CF207018C1B(::Class_3_D85E5E0CE519F26A* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_AF3C4CF207018C1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_99026A62B446F5CE(::Class_3_D85E5E0CE519F26A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_99026A62B446F5CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E888D2136A25678A(::Class_3_D85E5E0CE519F26A* a1, ::Class_1_CA393D2401CE0314* a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::Class_1_CA393D2401CE0314*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_E888D2136A25678A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CDF81FCBB79FBE89(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_CDF81FCBB79FBE89_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B312512C8BD7542A(::Class_3_0F09057DF4F3DE6D_Struct_2_F7C243F317D8E44A_3& a1, ::Class_3_0F09057DF4F3DE6D_Struct_2_04EE0A3341480476_2& a2)
	{
		return ((::System::Void(*)(::Class_3_0F09057DF4F3DE6D_Struct_2_F7C243F317D8E44A_3&, ::Class_3_0F09057DF4F3DE6D_Struct_2_04EE0A3341480476_2&))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_B312512C8BD7542A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_D3B8DD9112484CAA(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_D3B8DD9112484CAA_OFFSET))(this, a1, a2);
	}

	::Class_2_1D144748B0C0612C* Method_3_468C7E56F0523E04(::Class_2_208CC9941471731A_1194* a1)
	{
		return ((::Class_2_1D144748B0C0612C*(*)(::PVOID, ::Class_2_208CC9941471731A_1194*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_468C7E56F0523E04_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_83DB59FC1F24D655(::Class_3_D85E5E0CE519F26A* a1)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_83DB59FC1F24D655_OFFSET))(a1);
	}

	static ::Class_2_3041491E87EDD6BE* Method_3_22CDD5C4C3890601(::System::Collections::Generic::List_1<::Class_2_3041491E87EDD6BE*>* a1)
	{
		return ((::Class_2_3041491E87EDD6BE*(*)(::System::Collections::Generic::List_1<::Class_2_3041491E87EDD6BE*>*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_22CDD5C4C3890601_OFFSET))(a1);
	}

	static ::System::Void Method_3_B139304E330B26B3(::Class_3_D85E5E0CE519F26A* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354_1*>* a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354_1*>*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_B139304E330B26B3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_049298ECCF65591C(::Class_3_D85E5E0CE519F26A* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Collections::Generic::List_1<::System::Int32>*& a5)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_049298ECCF65591C_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_2076A865AACE7F96(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D_METHOD_3_2076A865AACE7F96_OFFSET))(this, a1);
	}
};
