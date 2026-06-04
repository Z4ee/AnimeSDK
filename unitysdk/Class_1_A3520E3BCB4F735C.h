#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_1;
class Class_1_5513808F8D65DEE5;
class Class_1_A1197913075FB798;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3520E3BCB4F735C_GET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x13826430)
#define CLASS_1_A3520E3BCB4F735C_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13826380)
#define CLASS_1_A3520E3BCB4F735C_GET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x13826320)
#define CLASS_1_A3520E3BCB4F735C_GET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x13826340)
#define CLASS_1_A3520E3BCB4F735C_GET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x13826360)
#define CLASS_1_A3520E3BCB4F735C_GET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x13826410)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x13825D40)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13825A60)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13825C80)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13826090)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_38BC6E9A0D70D521_OFFSET UNITYSDK_OFFSET(0x138261A0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x13825AC0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x138263A0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x13825E60)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13825EB0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x138263C0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x13825CF0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_AEF415AC09BE64FC_OFFSET UNITYSDK_OFFSET(0x13825710)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x13826120)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x13825980)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x13825FD0)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x13825F50)
#define CLASS_1_A3520E3BCB4F735C_METHOD_1_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x138263B0)
#define CLASS_1_A3520E3BCB4F735C_SET_CURRENTGAMEDAYINDEX_OFFSET UNITYSDK_OFFSET(0x13826440)
#define CLASS_1_A3520E3BCB4F735C_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13826390)
#define CLASS_1_A3520E3BCB4F735C_SET_ISFINISHEDFROMSERVER_OFFSET UNITYSDK_OFFSET(0x13826330)
#define CLASS_1_A3520E3BCB4F735C_SET_SERVERSCORE_OFFSET UNITYSDK_OFFSET(0x13826350)
#define CLASS_1_A3520E3BCB4F735C_SET_SERVERSTARNUM_OFFSET UNITYSDK_OFFSET(0x13826370)
#define CLASS_1_A3520E3BCB4F735C_SET_STARAWARDS_OFFSET UNITYSDK_OFFSET(0x13826420)
#define CLASS_1_A3520E3BCB4F735C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13826450)
#define CLASS_1_A3520E3BCB4F735C__CTOR_OFFSET UNITYSDK_OFFSET(0x13825690)

inline static constexpr unsigned int Class_1_A3520E3BCB4F735C_TypeDefinitionIndex = 72263;

class Class_1_A3520E3BCB4F735C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3520E3BCB4F735C_TypeDefinitionIndex)->GetStaticField(0x12330);
	}
	::RPG::Client::ChenLingFesGameInstance* _GameInstance_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A1197913075FB798*>* _StarAwards_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5513808F8D65DEE5*>* Field_1_4; // 0x28
	::System::UInt32 _ServerScore_k__BackingField; // 0x30
	::System::Int32 _CurrentGameDayIndex_k__BackingField; // 0x34
	::System::UInt32 _ServerStarNum_k__BackingField; // 0x38
	::System::UInt32 Field_1_8; // 0x3C
	::System::Boolean _IsFinishedFromServer_k__BackingField; // 0x40

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

	::System::Void Method_1_097468641FDED14E(::Class_1_333B902B2174BECA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_1*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
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

	::Class_1_A1197913075FB798* Method_1_38BC6E9A0D70D521()
	{
		return ((::Class_1_A1197913075FB798*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_METHOD_1_38BC6E9A0D70D521_OFFSET))(this);
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

	::System::Collections::Generic::List_1<::Class_1_A1197913075FB798*>* get_StarAwards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A1197913075FB798*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_GET_STARAWARDS_OFFSET))(this);
	}

	::System::Void set_StarAwards(::System::Collections::Generic::List_1<::Class_1_A1197913075FB798*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A1197913075FB798*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3520E3BCB4F735C_SET_STARAWARDS_OFFSET))(this, a1);
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
