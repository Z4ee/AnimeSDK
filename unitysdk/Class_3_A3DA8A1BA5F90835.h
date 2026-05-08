#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Enum_3_1F1130A3BA9E01B4.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_0D520D2CDCF46134;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A3DA8A1BA5F90835_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x131765A0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_0B6DAE69954C6A7E_OFFSET UNITYSDK_OFFSET(0x13179220)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x1317A0E0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_1CCC050F05175C69_OFFSET UNITYSDK_OFFSET(0x1317B480)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_285D7D868D433323_OFFSET UNITYSDK_OFFSET(0x131777A0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_33BB2F4D88A9C396_OFFSET UNITYSDK_OFFSET(0x13176B30)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_40C966A288ACFA99_OFFSET UNITYSDK_OFFSET(0x13178410)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_47B1A87FE2B9EF19_OFFSET UNITYSDK_OFFSET(0x13177CB0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_5781ED6FD80E2F5A_OFFSET UNITYSDK_OFFSET(0x13177DF0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_6DE8987F85BF765C_OFFSET UNITYSDK_OFFSET(0x1317B2A0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_7BE97715FCD065F9_OFFSET UNITYSDK_OFFSET(0x1317C180)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_AA24D9E2103841FC_OFFSET UNITYSDK_OFFSET(0x1317A200)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_ADACFF8DB3059A37_OFFSET UNITYSDK_OFFSET(0x131784F0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_B438C221B0E860DF_1_OFFSET UNITYSDK_OFFSET(0x1317A590)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_B438C221B0E860DF_OFFSET UNITYSDK_OFFSET(0x13177740)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_B514CD6D816C8905_OFFSET UNITYSDK_OFFSET(0x131776B0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_BAAA6B5FF9431849_OFFSET UNITYSDK_OFFSET(0x13176E30)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13177D60)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1317A170)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_D137AB1884377852_OFFSET UNITYSDK_OFFSET(0x1317A5F0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_D8009C12B24E1A0A_OFFSET UNITYSDK_OFFSET(0x1317AE50)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_D85141E7DFA32120_OFFSET UNITYSDK_OFFSET(0x131779F0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_D8D391511BBE5663_OFFSET UNITYSDK_OFFSET(0x1317BCE0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_DFE8217DFAECE9D2_OFFSET UNITYSDK_OFFSET(0x13179300)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_E04A31CD570A2AF7_OFFSET UNITYSDK_OFFSET(0x1317C480)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_F0129EFB9F6DA376_OFFSET UNITYSDK_OFFSET(0x13177BC0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_F3D4BEB4DA3A5CB8_OFFSET UNITYSDK_OFFSET(0x131790C0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_FB587DDA4DA1AE1A_OFFSET UNITYSDK_OFFSET(0x13179660)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_FCDCD77BB69E4551_OFFSET UNITYSDK_OFFSET(0x13177FF0)
#define CLASS_3_A3DA8A1BA5F90835_METHOD_3_FF03B43CB29E20D8_OFFSET UNITYSDK_OFFSET(0x1317C1D0)
#define CLASS_3_A3DA8A1BA5F90835_UPDATE_OFFSET UNITYSDK_OFFSET(0x13176980)
#define CLASS_3_A3DA8A1BA5F90835__CTOR_OFFSET UNITYSDK_OFFSET(0x13176AE0)

inline static constexpr unsigned int Class_3_A3DA8A1BA5F90835_TypeDefinitionIndex = 77607;

class Class_3_A3DA8A1BA5F90835 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_33BB2F4D88A9C396(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_33BB2F4D88A9C396_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_BAAA6B5FF9431849(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_BAAA6B5FF9431849_OFFSET))(a1);
	}

	static ::System::Void Method_3_B438C221B0E860DF(::Class_3_0D520D2CDCF46134* a1, ::Enum_3_1F1130A3BA9E01B4 a2)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::Enum_3_1F1130A3BA9E01B4))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_B438C221B0E860DF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_285D7D868D433323(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_285D7D868D433323_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_47B1A87FE2B9EF19(::System::Double a1)
	{
		return ((::System::Void(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_47B1A87FE2B9EF19_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5781ED6FD80E2F5A(::MoleMole::Battle::Entity* a1, ::Struct_2_FA5F50563E60AFBA a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_5781ED6FD80E2F5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FCDCD77BB69E4551(::Class_3_0D520D2CDCF46134* a1, ::System::String* a2, ::System::Int64 a3)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_FCDCD77BB69E4551_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_40C966A288ACFA99(::MoleMole::Config::TeamProperty a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_40C966A288ACFA99_OFFSET))(a1);
	}

	static ::System::Double Method_3_ADACFF8DB3059A37(::Class_3_0D520D2CDCF46134* a1, ::MoleMole::Config::TeamProperty a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Double a4)
	{
		return ((::System::Double(*)(::Class_3_0D520D2CDCF46134*, ::MoleMole::Config::TeamProperty, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_ADACFF8DB3059A37_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F0129EFB9F6DA376(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_F0129EFB9F6DA376_OFFSET))(a1);
	}

	static ::System::Void Method_3_DFE8217DFAECE9D2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_DFE8217DFAECE9D2_OFFSET))(a1);
	}

	static ::System::Void Method_3_FB587DDA4DA1AE1A(::Class_3_0D520D2CDCF46134* a1)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_FB587DDA4DA1AE1A_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_AA24D9E2103841FC(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_AA24D9E2103841FC_OFFSET))(a1);
	}

	static ::System::Void Method_3_B438C221B0E860DF_1(::Class_3_0D520D2CDCF46134* a1, ::Enum_3_1F1130A3BA9E01B4 a2)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::Enum_3_1F1130A3BA9E01B4))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_B438C221B0E860DF_1_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_F3D4BEB4DA3A5CB8(::Class_3_0D520D2CDCF46134* a1, ::MoleMole::Config::TeamProperty a2)
	{
		return ((::System::Double(*)(::Class_3_0D520D2CDCF46134*, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_F3D4BEB4DA3A5CB8_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_B514CD6D816C8905(::MoleMole::Config::TeamProperty a1)
	{
		return ((::System::Double(*)(::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_B514CD6D816C8905_OFFSET))(a1);
	}

	static ::System::Void Method_3_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_3_D137AB1884377852(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_D137AB1884377852_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D8009C12B24E1A0A(::Class_3_0D520D2CDCF46134* a1, ::System::String* a2, ::System::Single a3, ::System::Int64 a4)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::System::String*, ::System::Single, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_D8009C12B24E1A0A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_0B6DAE69954C6A7E(::System::Double& a1, ::System::Double& a2, ::System::Double a3, ::MoleMole::Config::TeamProperty a4, ::MoleMole::Config::PropertyModifyFunction a5, ::System::Double a6)
	{
		return ((::System::Boolean(*)(::System::Double&, ::System::Double&, ::System::Double, ::MoleMole::Config::TeamProperty, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_0B6DAE69954C6A7E_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_6DE8987F85BF765C(::Class_3_0D520D2CDCF46134* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_6DE8987F85BF765C_OFFSET))(a1, a2);
	}

	static ::System::Double Method_3_1CCC050F05175C69(::Class_3_0D520D2CDCF46134* a1, ::MoleMole::Config::TeamProperty a2, ::System::Double a3, ::System::Double a4, ::MoleMole::Config::PropertyModifyFunction a5)
	{
		return ((::System::Double(*)(::Class_3_0D520D2CDCF46134*, ::MoleMole::Config::TeamProperty, ::System::Double, ::System::Double, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_1CCC050F05175C69_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_D8D391511BBE5663(::Class_3_F41D242A20F8FE06* a1, ::System::String* a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::Class_3_F41D242A20F8FE06*, ::System::String*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_D8D391511BBE5663_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Enum_3_1F1130A3BA9E01B4 Method_3_7BE97715FCD065F9(::Class_3_0D520D2CDCF46134* a1)
	{
		return ((::Enum_3_1F1130A3BA9E01B4(*)(::Class_3_0D520D2CDCF46134*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_7BE97715FCD065F9_OFFSET))(a1);
	}

	::System::Void Method_3_D85141E7DFA32120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_D85141E7DFA32120_OFFSET))(this);
	}

	::System::Void Method_3_FF03B43CB29E20D8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_FF03B43CB29E20D8_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_E04A31CD570A2AF7(::Class_3_0D520D2CDCF46134* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_0D520D2CDCF46134*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835_METHOD_3_E04A31CD570A2AF7_OFFSET))(a1, a2);
	}
};
