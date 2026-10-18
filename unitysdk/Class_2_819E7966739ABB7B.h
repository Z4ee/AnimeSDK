#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginNodeType.h"

class Class_1_ADE886270C07BF41;
class Class_2_782BEED4B457999A;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_819E7966739ABB7B_GET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x154A20F0)
#define CLASS_2_819E7966739ABB7B_GET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x154A2130)
#define CLASS_2_819E7966739ABB7B_GET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154A2110)
#define CLASS_2_819E7966739ABB7B_GET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x154A20D0)
#define CLASS_2_819E7966739ABB7B_GET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x154A2150)
#define CLASS_2_819E7966739ABB7B_GET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154A2170)
#define CLASS_2_819E7966739ABB7B_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x154A03C0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_13D8FA6F999D635C_OFFSET UNITYSDK_OFFSET(0x154A0040)
#define CLASS_2_819E7966739ABB7B_METHOD_2_172FEBDA6D9DB814_OFFSET UNITYSDK_OFFSET(0x1549E740)
#define CLASS_2_819E7966739ABB7B_METHOD_2_1AF685FE4CA58272_OFFSET UNITYSDK_OFFSET(0x1549F3E0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x154A1E90)
#define CLASS_2_819E7966739ABB7B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x154A1F00)
#define CLASS_2_819E7966739ABB7B_METHOD_2_3E745E120D8B5AD4_OFFSET UNITYSDK_OFFSET(0x154A2020)
#define CLASS_2_819E7966739ABB7B_METHOD_2_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x1549FAF0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x154A1510)
#define CLASS_2_819E7966739ABB7B_METHOD_2_7DE18FB9EB58FCA1_OFFSET UNITYSDK_OFFSET(0x1549FE50)
#define CLASS_2_819E7966739ABB7B_METHOD_2_917FF9CF9C526A24_OFFSET UNITYSDK_OFFSET(0x154A16A0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_94F453C017810069_OFFSET UNITYSDK_OFFSET(0x1549FC20)
#define CLASS_2_819E7966739ABB7B_METHOD_2_99985F2011A636FC_OFFSET UNITYSDK_OFFSET(0x1549F5E0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_9AB42232F69BA20F_OFFSET UNITYSDK_OFFSET(0x154A1970)
#define CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1549FA50)
#define CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x154A1050)
#define CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x154A11E0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1549F6B0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_ADAF3D8E40C25A96_1_OFFSET UNITYSDK_OFFSET(0x154A0230)
#define CLASS_2_819E7966739ABB7B_METHOD_2_ADAF3D8E40C25A96_OFFSET UNITYSDK_OFFSET(0x1549FDA0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_B6AC959A88B07CE8_OFFSET UNITYSDK_OFFSET(0x1549E850)
#define CLASS_2_819E7966739ABB7B_METHOD_2_B86088681600C18F_OFFSET UNITYSDK_OFFSET(0x154A06E0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_BA4994657338A2BB_OFFSET UNITYSDK_OFFSET(0x154A1F40)
#define CLASS_2_819E7966739ABB7B_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x154A0BE0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x154A1340)
#define CLASS_2_819E7966739ABB7B_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x154A1DD0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x154A1C50)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_1_OFFSET UNITYSDK_OFFSET(0x154A0150)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_2_OFFSET UNITYSDK_OFFSET(0x154A02E0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_3_OFFSET UNITYSDK_OFFSET(0x154A0600)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_4_OFFSET UNITYSDK_OFFSET(0x154A0F70)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_5_OFFSET UNITYSDK_OFFSET(0x154A1240)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_OFFSET UNITYSDK_OFFSET(0x1549FCC0)
#define CLASS_2_819E7966739ABB7B_METHOD_2_E99C4967A0D3080D_OFFSET UNITYSDK_OFFSET(0x1549F870)
#define CLASS_2_819E7966739ABB7B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1549F580)
#define CLASS_2_819E7966739ABB7B_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x154A1D10)
#define CLASS_2_819E7966739ABB7B_ONINIT_OFFSET UNITYSDK_OFFSET(0x1549E960)
#define CLASS_2_819E7966739ABB7B_SET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x154A2100)
#define CLASS_2_819E7966739ABB7B_SET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x154A2140)
#define CLASS_2_819E7966739ABB7B_SET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154A2120)
#define CLASS_2_819E7966739ABB7B_SET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x154A20E0)
#define CLASS_2_819E7966739ABB7B_SET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x154A2160)
#define CLASS_2_819E7966739ABB7B_SET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x154A2180)
#define CLASS_2_819E7966739ABB7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1549E230)

inline static constexpr unsigned int Class_2_819E7966739ABB7B_TypeDefinitionIndex = 61110;

class Class_2_819E7966739ABB7B : public ::RPG::Client::BasePhaseContext
{
public:
	static ::System::Int32* StaticGet__TotalLoginFailedCount_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_819E7966739ABB7B_TypeDefinitionIndex)->GetStaticField(0x3CC0);
	}
	static ::System::Boolean* StaticGet__IsFinishSubPackageMission_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_819E7966739ABB7B_TypeDefinitionIndex)->GetStaticField(0x3CC4);
	}
	::System::Collections::Generic::List_1<::RPG::Client::GamePhaseType>* LBPKGMDDLHF; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LoginNodeType, ::System::Boolean>* IJPEHMDODPP; // 0x48
	::Class_1_ADE886270C07BF41* HPDCIPKCIDL; // 0x50
	::Class_2_782BEED4B457999A* EFEFDMFKMMK; // 0x58
	::RPG::Client::LuaUIController* IPJJAECPMIL; // 0x60
	::RPG::Client::LuaUIController* BBFFPPPHKLF; // 0x68
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Action*>*>* FBOBOLNKNKK; // 0x70
	::System::Int32 _LoginFailedCount_k__BackingField; // 0x78
	::System::Boolean FCBAOGNEOKK; // 0x7C
	::System::Boolean _NeedReinitSDK_k__BackingField; // 0x7D
	::System::Boolean _TestAttribute_k__BackingField; // 0x7E
	::System::Boolean DJOCBPBHBJI; // 0x7F
	::RPG::Client::GamePhaseType CLLGFMJDEJO; // 0x80
	::System::Boolean _IsAutoLogin_k__BackingField; // 0x84
	::System::Boolean JAIEHIGMGDO; // 0x85
	::System::Boolean EIKJKPJAIPP; // 0x86

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B__CTOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_2_172FEBDA6D9DB814(::RPG::Client::Promises::Promise* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_172FEBDA6D9DB814_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_2_B6AC959A88B07CE8(::RPG::Client::Promises::Promise* a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_B6AC959A88B07CE8_OFFSET))(this, a1);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_ONINIT_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_99985F2011A636FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_99985F2011A636FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E99C4967A0D3080D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E99C4967A0D3080D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CC589A90C8895C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_5CC589A90C8895C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F453C017810069(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_94F453C017810069_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADAF3D8E40C25A96(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_ADAF3D8E40C25A96_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DE18FB9EB58FCA1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_7DE18FB9EB58FCA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_13D8FA6F999D635C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_13D8FA6F999D635C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADAF3D8E40C25A96_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_ADAF3D8E40C25A96_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B86088681600C18F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_B86088681600C18F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_E5C1B5AB4C636E25_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_917FF9CF9C526A24(::RPG::Client::GamePhaseType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_917FF9CF9C526A24_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9AB42232F69BA20F(::RPG::Client::GamePhaseType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_9AB42232F69BA20F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_BA4994657338A2BB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_BA4994657338A2BB_OFFSET))(this);
	}

	::System::Boolean Method_2_3E745E120D8B5AD4(::RPG::Client::LoginNodeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginNodeType))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_3E745E120D8B5AD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AF685FE4CA58272(::RPG::Client::LoginNodeType a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginNodeType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_METHOD_2_1AF685FE4CA58272_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_NeedReinitSDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_NEEDREINITSDK_OFFSET))(this);
	}

	::System::Void set_NeedReinitSDK(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_NEEDREINITSDK_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAutoLogin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_ISAUTOLOGIN_OFFSET))(this);
	}

	::System::Void set_IsAutoLogin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_ISAUTOLOGIN_OFFSET))(this, a1);
	}

	::System::Int32 get_LoginFailedCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_LOGINFAILEDCOUNT_OFFSET))(this);
	}

	::System::Void set_LoginFailedCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_LOGINFAILEDCOUNT_OFFSET))(this, a1);
	}

	static ::System::Boolean get_IsFinishSubPackageMission()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_ISFINISHSUBPACKAGEMISSION_OFFSET))();
	}

	static ::System::Void set_IsFinishSubPackageMission(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_ISFINISHSUBPACKAGEMISSION_OFFSET))(a1);
	}

	::System::Boolean get_TestAttribute()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_TESTATTRIBUTE_OFFSET))(this);
	}

	::System::Void set_TestAttribute(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_TESTATTRIBUTE_OFFSET))(this, a1);
	}

	static ::System::Int32 get_TotalLoginFailedCount()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_GET_TOTALLOGINFAILEDCOUNT_OFFSET))();
	}

	static ::System::Void set_TotalLoginFailedCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_819E7966739ABB7B_SET_TOTALLOGINFAILEDCOUNT_OFFSET))(a1);
	}
};
