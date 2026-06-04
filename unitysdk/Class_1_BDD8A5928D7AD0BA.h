#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_1E87BF7E480444D6;
class Class_1_3504E309EE87A23B;
class Class_1_9AAC3BB4FD7CE6FE;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_BDD8A5928D7AD0BA_GET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0xA7CC2E0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_0AB718BEE9EA06D7_1_OFFSET UNITYSDK_OFFSET(0xA7C99F0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0xA7C9990)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_1356E8DF5BB371A3_OFFSET UNITYSDK_OFFSET(0xA7CA130)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_2B034F1ABD04F018_OFFSET UNITYSDK_OFFSET(0xA7C9A50)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA7CB480)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA7C98F0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_3C0ED4B30F30818A_OFFSET UNITYSDK_OFFSET(0xA7CB3C0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA7CB2F0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xA7CB340)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xA7CC1F0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_6744FBB15DA96C55_OFFSET UNITYSDK_OFFSET(0xA7CB090)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0xA7CBED0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xA7CB030)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7E64705CB9FB1B5D_OFFSET UNITYSDK_OFFSET(0xA7CA4B0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_86B37AAD94685FB9_OFFSET UNITYSDK_OFFSET(0xA7CC320)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_8B1D6514BFAE88DD_1_OFFSET UNITYSDK_OFFSET(0xA7CB790)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_8B1D6514BFAE88DD_OFFSET UNITYSDK_OFFSET(0xA7CB690)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0xA7CC4F0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA7C9920)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_9F60C2A31E3F634D_OFFSET UNITYSDK_OFFSET(0xA7CB4D0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0xA7CC190)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_A56EAB6E8DBE44E9_OFFSET UNITYSDK_OFFSET(0xA7CBA10)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_ABF5D6E55AF7A39A_OFFSET UNITYSDK_OFFSET(0xA7CC790)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_AF4433C5CD40A9C5_OFFSET UNITYSDK_OFFSET(0xA7CB890)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA7CA090)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_C03A1E09069749C9_OFFSET UNITYSDK_OFFSET(0xA7CC240)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_D571F33748045C95_OFFSET UNITYSDK_OFFSET(0xA7CC300)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_D62B9256DD010494_OFFSET UNITYSDK_OFFSET(0xA7CAD30)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0xA7CBBA0)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0xA7CC410)
#define CLASS_1_BDD8A5928D7AD0BA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA7CC310)
#define CLASS_1_BDD8A5928D7AD0BA_SET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0xA7CC2F0)
#define CLASS_1_BDD8A5928D7AD0BA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7CCA40)
#define CLASS_1_BDD8A5928D7AD0BA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CC8A0)

inline static constexpr unsigned int Class_1_BDD8A5928D7AD0BA_TypeDefinitionIndex = 64796;

class Class_1_BDD8A5928D7AD0BA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDD8A5928D7AD0BA_TypeDefinitionIndex)->GetStaticField(0x133F0);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDD8A5928D7AD0BA_TypeDefinitionIndex)->GetStaticField(0x133F4);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BDD8A5928D7AD0BA_TypeDefinitionIndex)->GetStaticField(0x133F8);
	}
	::Il2CppArray<::Class_1_9AAC3BB4FD7CE6FE*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_3504E309EE87A23B*>* Field_1_4; // 0x18
	::UnityEngine::AI::AsyncNavMeshSimulator* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1E87BF7E480444D6*>* Field_1_6; // 0x28
	::RPG::Client::RPGProfilerMarker* Field_1_7; // 0x30
	::RPG::Client::MapDef* Field_1_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_10; // 0x48
	::System::Boolean _AllowAutoRespawn_k__BackingField; // 0x50
	::System::Boolean Field_1_12; // 0x51
	::System::UInt32 Field_1_13; // 0x54
	::System::Int32 Field_1_14; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7_1(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_0AB718BEE9EA06D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B034F1ABD04F018(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_2B034F1ABD04F018_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62B9256DD010494()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_D62B9256DD010494_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_6744FBB15DA96C55(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_6744FBB15DA96C55_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C0ED4B30F30818A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_3C0ED4B30F30818A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F60C2A31E3F634D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_9F60C2A31E3F634D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_8B1D6514BFAE88DD_OFFSET))(this);
	}

	::System::Void Method_1_8B1D6514BFAE88DD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_8B1D6514BFAE88DD_1_OFFSET))(this);
	}

	::System::Void Method_1_7E64705CB9FB1B5D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7E64705CB9FB1B5D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AF4433C5CD40A9C5(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_AF4433C5CD40A9C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A56EAB6E8DBE44E9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_A56EAB6E8DBE44E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void Method_1_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_1356E8DF5BB371A3(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_1356E8DF5BB371A3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C03A1E09069749C9(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_C03A1E09069749C9_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowAutoRespawn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_GET_ALLOWAUTORESPAWN_OFFSET))(this);
	}

	::System::Void set_AllowAutoRespawn(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_SET_ALLOWAUTORESPAWN_OFFSET))(this, a1);
	}

	::UnityEngine::AI::AsyncNavMeshSimulator* Method_1_D571F33748045C95()
	{
		return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_D571F33748045C95_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::CustomRP::Quality Method_1_86B37AAD94685FB9()
	{
		return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_86B37AAD94685FB9_OFFSET))(this);
	}

	::System::Boolean Method_1_EC28FD7AA4FC3328(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_1_9036CFAD14566A8D(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_9036CFAD14566A8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABF5D6E55AF7A39A(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BDD8A5928D7AD0BA_METHOD_1_ABF5D6E55AF7A39A_OFFSET))(this, a1);
	}
};
