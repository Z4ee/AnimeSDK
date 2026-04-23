#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginNodeType.h"

class Class_1_F3CB95511A9E4674;
class Class_2_782BEED4B457999A;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_06BD520BB50B7472_GET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x11AB3340)
#define CLASS_2_06BD520BB50B7472_GET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x11AB3380)
#define CLASS_2_06BD520BB50B7472_GET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11AB3360)
#define CLASS_2_06BD520BB50B7472_GET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x11AB3320)
#define CLASS_2_06BD520BB50B7472_GET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11AB33A0)
#define CLASS_2_06BD520BB50B7472_GET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11AB33C0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_0DED83E9C3ABD1C7_OFFSET UNITYSDK_OFFSET(0x11AB3260)
#define CLASS_2_06BD520BB50B7472_METHOD_2_13D8FA6F999D635C_OFFSET UNITYSDK_OFFSET(0x11AB11C0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11AB30D0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_1EFC5A8A94CA6BE7_OFFSET UNITYSDK_OFFSET(0x11AB17F0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x11AB0C70)
#define CLASS_2_06BD520BB50B7472_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11AB3140)
#define CLASS_2_06BD520BB50B7472_METHOD_2_5306CC4D00627AE1_OFFSET UNITYSDK_OFFSET(0x11AAFB80)
#define CLASS_2_06BD520BB50B7472_METHOD_2_5A496C6719242B0D_OFFSET UNITYSDK_OFFSET(0x11AAFA60)
#define CLASS_2_06BD520BB50B7472_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x11AB2700)
#define CLASS_2_06BD520BB50B7472_METHOD_2_62B69DE067745FA3_OFFSET UNITYSDK_OFFSET(0x11AB0560)
#define CLASS_2_06BD520BB50B7472_METHOD_2_703DCAE1CCD99159_OFFSET UNITYSDK_OFFSET(0x11AB2890)
#define CLASS_2_06BD520BB50B7472_METHOD_2_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0x11AB09F0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_7DE18FB9EB58FCA1_OFFSET UNITYSDK_OFFSET(0x11AB0FD0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_80966834D48EC03D_OFFSET UNITYSDK_OFFSET(0x11AB2B70)
#define CLASS_2_06BD520BB50B7472_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x11AB1460)
#define CLASS_2_06BD520BB50B7472_METHOD_2_94F453C017810069_OFFSET UNITYSDK_OFFSET(0x11AB0DA0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11AB0BD0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11AB2220)
#define CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x11AB23C0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11AB0830)
#define CLASS_2_06BD520BB50B7472_METHOD_2_BA4994657338A2BB_OFFSET UNITYSDK_OFFSET(0x11AB3180)
#define CLASS_2_06BD520BB50B7472_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x11AB1DB0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x11AB2530)
#define CLASS_2_06BD520BB50B7472_METHOD_2_D00CA09B6254F1ED_1_OFFSET UNITYSDK_OFFSET(0x11AB13B0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_D00CA09B6254F1ED_OFFSET UNITYSDK_OFFSET(0x11AB0F20)
#define CLASS_2_06BD520BB50B7472_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x11AB3010)
#define CLASS_2_06BD520BB50B7472_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x11AB2E90)
#define CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_1_OFFSET UNITYSDK_OFFSET(0x11AB12D0)
#define CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_2_OFFSET UNITYSDK_OFFSET(0x11AB1710)
#define CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_3_OFFSET UNITYSDK_OFFSET(0x11AB2140)
#define CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_4_OFFSET UNITYSDK_OFFSET(0x11AB2430)
#define CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_OFFSET UNITYSDK_OFFSET(0x11AB0E40)
#define CLASS_2_06BD520BB50B7472_METHOD_2_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0x11AB0760)
#define CLASS_2_06BD520BB50B7472_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x11AB0700)
#define CLASS_2_06BD520BB50B7472_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11AB2F50)
#define CLASS_2_06BD520BB50B7472_ONINIT_OFFSET UNITYSDK_OFFSET(0x11AAFCA0)
#define CLASS_2_06BD520BB50B7472_SET_ISAUTOLOGIN_OFFSET UNITYSDK_OFFSET(0x11AB3350)
#define CLASS_2_06BD520BB50B7472_SET_ISFINISHSUBPACKAGEMISSION_OFFSET UNITYSDK_OFFSET(0x11AB3390)
#define CLASS_2_06BD520BB50B7472_SET_LOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11AB3370)
#define CLASS_2_06BD520BB50B7472_SET_NEEDREINITSDK_OFFSET UNITYSDK_OFFSET(0x11AB3330)
#define CLASS_2_06BD520BB50B7472_SET_TESTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x11AB33B0)
#define CLASS_2_06BD520BB50B7472_SET_TOTALLOGINFAILEDCOUNT_OFFSET UNITYSDK_OFFSET(0x11AB33D0)
#define CLASS_2_06BD520BB50B7472__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAF8B0)
#define CLASS_2_06BD520BB50B7472___IFIXBASEPROXY_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11AB3440)
#define CLASS_2_06BD520BB50B7472___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x11AB33E0)

inline static constexpr unsigned int Class_2_06BD520BB50B7472_TypeDefinitionIndex = 56358;

class Class_2_06BD520BB50B7472 : public ::RPG::Client::BasePhaseContext
{
public:
	static ::System::Boolean* StaticGet__IsFinishSubPackageMission_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_06BD520BB50B7472_TypeDefinitionIndex)->GetStaticField(0x3970);
	}
	static ::System::Int32* StaticGet__TotalLoginFailedCount_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_06BD520BB50B7472_TypeDefinitionIndex)->GetStaticField(0x3974);
	}
	::System::Collections::Generic::List_1<::RPG::Client::GamePhaseType>* Field_2_10; // 0x40
	::Class_2_782BEED4B457999A* Field_2_5; // 0x48
	::Class_1_F3CB95511A9E4674* Field_2_4; // 0x50
	::RPG::Client::LuaUIController* Field_2_3; // 0x58
	::RPG::Client::LuaUIController* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Action*>*>* Field_2_9; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LoginNodeType, ::System::Boolean>* Field_2_14; // 0x70
	::System::Boolean Field_2_1; // 0x78
	::System::Boolean _IsAutoLogin_k__BackingField; // 0x79
	::System::Boolean Field_2_7; // 0x7A
	::System::Boolean _NeedReinitSDK_k__BackingField; // 0x7B
	::RPG::Client::GamePhaseType Field_2_8; // 0x7C
	::System::Int32 _LoginFailedCount_k__BackingField; // 0x80
	::System::Boolean Field_2_0; // 0x84
	::System::Boolean _TestAttribute_k__BackingField; // 0x85
	::System::Boolean Field_2_6; // 0x86

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472__CTOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_2_5A496C6719242B0D(::RPG::Client::Promises::Promise* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_5A496C6719242B0D_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_2_5306CC4D00627AE1(::RPG::Client::Promises::Promise* a1)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_5306CC4D00627AE1_OFFSET))(this, a1);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_ONINIT_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_32FE792EB1B0F498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_32FE792EB1B0F498_OFFSET))(this, a1);
	}

	::System::Void Method_2_94F453C017810069(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_94F453C017810069_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_OFFSET))(this, a1);
	}

	::System::Void Method_2_D00CA09B6254F1ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_D00CA09B6254F1ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DE18FB9EB58FCA1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_7DE18FB9EB58FCA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_13D8FA6F999D635C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_13D8FA6F999D635C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D00CA09B6254F1ED_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_D00CA09B6254F1ED_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EFC5A8A94CA6BE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_1EFC5A8A94CA6BE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5C1B5AB4C636E25_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_E5C1B5AB4C636E25_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_703DCAE1CCD99159(::RPG::Client::GamePhaseType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_703DCAE1CCD99159_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80966834D48EC03D(::RPG::Client::GamePhaseType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_80966834D48EC03D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_BA4994657338A2BB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_BA4994657338A2BB_OFFSET))(this);
	}

	::System::Boolean Method_2_0DED83E9C3ABD1C7(::RPG::Client::LoginNodeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginNodeType))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_0DED83E9C3ABD1C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_62B69DE067745FA3(::RPG::Client::LoginNodeType a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginNodeType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_METHOD_2_62B69DE067745FA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_NeedReinitSDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_NEEDREINITSDK_OFFSET))(this);
	}

	::System::Void set_NeedReinitSDK(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_NEEDREINITSDK_OFFSET))(this, value);
	}

	::System::Boolean get_IsAutoLogin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_ISAUTOLOGIN_OFFSET))(this);
	}

	::System::Void set_IsAutoLogin(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_ISAUTOLOGIN_OFFSET))(this, value);
	}

	::System::Int32 get_LoginFailedCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_LOGINFAILEDCOUNT_OFFSET))(this);
	}

	::System::Void set_LoginFailedCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_LOGINFAILEDCOUNT_OFFSET))(this, value);
	}

	static ::System::Boolean get_IsFinishSubPackageMission()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_ISFINISHSUBPACKAGEMISSION_OFFSET))();
	}

	static ::System::Void set_IsFinishSubPackageMission(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_ISFINISHSUBPACKAGEMISSION_OFFSET))(value);
	}

	::System::Boolean get_TestAttribute()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_TESTATTRIBUTE_OFFSET))(this);
	}

	::System::Void set_TestAttribute(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_TESTATTRIBUTE_OFFSET))(this, value);
	}

	static ::System::Int32 get_TotalLoginFailedCount()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_GET_TOTALLOGINFAILEDCOUNT_OFFSET))();
	}

	static ::System::Void set_TotalLoginFailedCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472_SET_TOTALLOGINFAILEDCOUNT_OFFSET))(value);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___IFIXBASEPROXY_ONDISPOSE_OFFSET))(this);
	}
};
