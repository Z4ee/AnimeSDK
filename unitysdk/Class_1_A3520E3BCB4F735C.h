#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5513808F8D65DEE5;
class Class_1_7C1B6F38E8E579A2;
class Class_1_A3C3725415847C24;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3520E3BCB4F735C_GET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x19112AC0)
#define CLASS_1_A3520E3BCB4F735C_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19112A10)
#define CLASS_1_A3520E3BCB4F735C_GET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x191129B0)
#define CLASS_1_A3520E3BCB4F735C_GET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x191129D0)
#define CLASS_1_A3520E3BCB4F735C_GET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x191129F0)
#define CLASS_1_A3520E3BCB4F735C_GET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x19112AA0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x191123D0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x191120F0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19112310)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x19112720)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x19112150)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x19112A30)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x191124F0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x19112540)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x19112A50)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x19112380)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_AEF415AC09BE64FC_OFFSET UNITYSDK_OFFSET(0x19111DA0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x191127B0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x19112010)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x19112660)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_EEA255023473FB5E_OFFSET UNITYSDK_OFFSET(0x19112830)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x191125E0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x19112A40)
#define CLASS_1_A3520E3BCB4F735C_SET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x19112AD0)
#define CLASS_1_A3520E3BCB4F735C_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19112A20)
#define CLASS_1_A3520E3BCB4F735C_SET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x191129C0)
#define CLASS_1_A3520E3BCB4F735C_SET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x191129E0)
#define CLASS_1_A3520E3BCB4F735C_SET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x19112A00)
#define CLASS_1_A3520E3BCB4F735C_SET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x19112AB0)
#define CLASS_1_A3520E3BCB4F735C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19112AE0)
#define CLASS_1_A3520E3BCB4F735C__CTOR_OFFSET UNITYSDK_OFFSET(0x19111D20)

inline static constexpr unsigned int Class_1_A3520E3BCB4F735C_TypeDefinitionIndex = 77272;

class Class_1_A3520E3BCB4F735C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DBMGMFNPFPI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3520E3BCB4F735C_TypeDefinitionIndex)->GetStaticField(0x8750);
	}
	::System::Collections::Generic::List_1<::Class_1_A3C3725415847C24*>* _StarAwards_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* HNIBPGJIOKM; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5513808F8D65DEE5*>* FBPOPPENCOE; // 0x20
	::RPG::Client::ChenLingFesGameInstance* _GameInstance_k__BackingField; // 0x28
	::System::UInt32 _ServerScore_k__BackingField; // 0x30
	::System::UInt32 _ServerStarNum_k__BackingField; // 0x34
	::System::Int32 _CurrentGameDayIndex_k__BackingField; // 0x38
	::System::Boolean _IsFinishedFromServer_k__BackingField; // 0x3C
	::System::UInt32 BNEFKDMHPAO; // 0x40

	::System::Void _ctor(::RPG::Client::ChenLingFesGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_AEF415AC09BE64FC(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_AEF415AC09BE64FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_7C1B6F38E8E579A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C1B6F38E8E579A2*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_5513808F8D65DEE5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5513808F8D65DEE5*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_A3C3725415847C24* Method_1_EEA255023473FB5E()
	{
		return ((::Class_1_A3C3725415847C24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_EEA255023473FB5E_OFFSET))(this);
	}

	::System::Boolean get_IsFinishedFromServer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_ISFINISHEDFROMSERVER_OFFSET))(this);
	}

	::System::Void set_IsFinishedFromServer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_ISFINISHEDFROMSERVER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ServerScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_SERVERSCORE_OFFSET))(this);
	}

	::System::Void set_ServerScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_SERVERSCORE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ServerStarNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_SERVERSTARNUM_OFFSET))(this);
	}

	::System::Void set_ServerStarNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_SERVERSTARNUM_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFesGameInstance* get_GameInstance()
	{
		return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_GAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_GameInstance(::RPG::Client::ChenLingFesGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFesGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_GAMEINSTANCE_OFFSET))(this, a1);
	}

	::Class_1_5513808F8D65DEE5* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_5513808F8D65DEE5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5513808F8D65DEE5*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5513808F8D65DEE5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_F9B7966EAEC825B3_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A3C3725415847C24*>* get_StarAwards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A3C3725415847C24*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_STARAWARDS_OFFSET))(this);
	}

	::System::Void set_StarAwards(::System::Collections::Generic::List_1<::Class_1_A3C3725415847C24*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A3C3725415847C24*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_STARAWARDS_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentGameDayIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_CURRENTGAMEDAYINDEX_OFFSET))(this);
	}

	::System::Void set_CurrentGameDayIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_CURRENTGAMEDAYINDEX_OFFSET))(this, a1);
	}
};
