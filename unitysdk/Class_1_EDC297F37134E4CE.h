#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_3504E309EE87A23B;
class Class_1_51C144CA4DE074AC;
class Class_1_B87B48EBDCE76E87;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_EDC297F37134E4CE_GET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x16A5B900)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_1A54E3DF1B02B1B9_1_OFFSET UNITYSDK_OFFSET(0x16A58B60)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x16A58AA0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16A5AA80)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16A58A00)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x16A5A5E0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_410A6664D306058A_OFFSET UNITYSDK_OFFSET(0x16A58C20)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16A5A8A0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16A5A8F0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x16A5B810)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_5E1C660AC0722061_OFFSET UNITYSDK_OFFSET(0x16A594E0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_6744FBB15DA96C55_OFFSET UNITYSDK_OFFSET(0x16A5A640)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_6CC8CCA8AE02CCED_OFFSET UNITYSDK_OFFSET(0x16A5B140)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_7C5396B0F138860D_OFFSET UNITYSDK_OFFSET(0x16A5AAD0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_7E64705CB9FB1B5D_OFFSET UNITYSDK_OFFSET(0x16A59A60)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_86B37AAD94685FB9_OFFSET UNITYSDK_OFFSET(0x16A5B940)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_8B1D6514BFAE88DD_1_OFFSET UNITYSDK_OFFSET(0x16A5AD30)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0x16A5AC30)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16A58A30)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x16A5B7B0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0x16A5AFB0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_ABF5D6E55AF7A39A_OFFSET UNITYSDK_OFFSET(0x16A5BDE0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_AF4433C5CD40A9C5_OFFSET UNITYSDK_OFFSET(0x16A5AE30)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16A59440)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x16A5BB10)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_C03A1E09069749C9_OFFSET UNITYSDK_OFFSET(0x16A5B860)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_D571F33748045C95_OFFSET UNITYSDK_OFFSET(0x16A5B920)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0x16A5A2E0)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_D89DADA3F634C687_OFFSET UNITYSDK_OFFSET(0x16A5A970)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_E99C4967A0D3080D_OFFSET UNITYSDK_OFFSET(0x16A5B490)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x16A5BA30)
#define CLASS_1_EDC297F37134E4CE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16A5B930)
#define CLASS_1_EDC297F37134E4CE_SET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x16A5B910)
#define CLASS_1_EDC297F37134E4CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5C090)
#define CLASS_1_EDC297F37134E4CE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5BEF0)

inline static constexpr unsigned int Class_1_EDC297F37134E4CE_TypeDefinitionIndex = 66197;

class Class_1_EDC297F37134E4CE : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDC297F37134E4CE_TypeDefinitionIndex)->GetStaticField(0xED30);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDC297F37134E4CE_TypeDefinitionIndex)->GetStaticField(0xED34);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EDC297F37134E4CE_TypeDefinitionIndex)->GetStaticField(0xED38);
	}
	::UnityEngine::AI::AsyncNavMeshSimulator* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_4; // 0x18
	::Il2CppArray<::Class_1_B87B48EBDCE76E87*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_51C144CA4DE074AC*>* Field_1_6; // 0x28
	::RPG::Client::MapDef* Field_1_7; // 0x30
	::RPG::Client::RPGProfilerMarker* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::Class_1_3504E309EE87A23B*>* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_1_B87B48EBDCE76E87*, ::System::Int32>* Field_1_10; // 0x48
	::System::Int32 Field_1_11; // 0x50
	::System::Boolean Field_1_12; // 0x54
	::System::Boolean _AllowAutoRespawn_k__BackingField; // 0x55
	::System::UInt32 Field_1_14; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9_1(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_1A54E3DF1B02B1B9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_410A6664D306058A(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_410A6664D306058A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_6744FBB15DA96C55(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_6744FBB15DA96C55_OFFSET))(this, a1);
	}

	::System::Void Method_1_D89DADA3F634C687(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_D89DADA3F634C687_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C5396B0F138860D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_7C5396B0F138860D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_8B1D6514BFAE88DD_1_OFFSET))(this);
	}

	::System::Void Method_1_7E64705CB9FB1B5D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_7E64705CB9FB1B5D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AF4433C5CD40A9C5(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_AF4433C5CD40A9C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A56EAB6E8DBE44E9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_A56EAB6E8DBE44E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CC8CCA8AE02CCED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_6CC8CCA8AE02CCED_OFFSET))(this, a1);
	}

	::System::Void Method_1_E99C4967A0D3080D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_E99C4967A0D3080D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_5E1C660AC0722061(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_5E1C660AC0722061_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C03A1E09069749C9(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_C03A1E09069749C9_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowAutoRespawn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_GET_ALLOWAUTORESPAWN_OFFSET))(this);
	}

	::System::Void set_AllowAutoRespawn(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_SET_ALLOWAUTORESPAWN_OFFSET))(this, a1);
	}

	::UnityEngine::AI::AsyncNavMeshSimulator* Method_1_D571F33748045C95()
	{
		return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_D571F33748045C95_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::CustomRP::Quality Method_1_86B37AAD94685FB9()
	{
		return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_86B37AAD94685FB9_OFFSET))(this);
	}

	::System::Boolean Method_1_EC28FD7AA4FC3328(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABF5D6E55AF7A39A(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_1_EDC297F37134E4CE_METHOD_1_ABF5D6E55AF7A39A_OFFSET))(this, a1);
	}
};
