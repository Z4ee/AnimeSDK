#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

class Class_1_95735B6D5ACB12CB;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_DE5041E302ADB1E0;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_BBBB808191126E3B_GET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x10ACB970)
#define CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_1_OFFSET UNITYSDK_OFFSET(0x10AC8FF0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10AC8F90)
#define CLASS_1_BBBB808191126E3B_METHOD_1_1355E0FFDACE8C93_OFFSET UNITYSDK_OFFSET(0x10ACAAB0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_1441C65D1B81B844_OFFSET UNITYSDK_OFFSET(0x10ACB5D0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x10ACA3E0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x10ACAB70)
#define CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10AC8EF0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10ACA9E0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10ACAA30)
#define CLASS_1_BBBB808191126E3B_METHOD_1_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0x10ACBB80)
#define CLASS_1_BBBB808191126E3B_METHOD_1_495B51F3EF57F06C_OFFSET UNITYSDK_OFFSET(0x10AC9720)
#define CLASS_1_BBBB808191126E3B_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10ACB880)
#define CLASS_1_BBBB808191126E3B_METHOD_1_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0x10ACB2E0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0x10ACAEE0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x10ACADC0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x10ACA6D0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_7B7F0EB7229C08F9_OFFSET UNITYSDK_OFFSET(0x10ACBE50)
#define CLASS_1_BBBB808191126E3B_METHOD_1_940FD68EFA4D5A3C_OFFSET UNITYSDK_OFFSET(0x10AC9050)
#define CLASS_1_BBBB808191126E3B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10AC8F20)
#define CLASS_1_BBBB808191126E3B_METHOD_1_9D35F3937044FA88_OFFSET UNITYSDK_OFFSET(0x10AC9A90)
#define CLASS_1_BBBB808191126E3B_METHOD_1_9F60C2A31E3F634D_OFFSET UNITYSDK_OFFSET(0x10ACABC0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x10ACB820)
#define CLASS_1_BBBB808191126E3B_METHOD_1_AF4433C5CD40A9C5_OFFSET UNITYSDK_OFFSET(0x10ACB000)
#define CLASS_1_BBBB808191126E3B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10AC9680)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C03A1E09069749C9_OFFSET UNITYSDK_OFFSET(0x10ACB8D0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10ACB180)
#define CLASS_1_BBBB808191126E3B_METHOD_1_C63C6A5A3A58FC58_OFFSET UNITYSDK_OFFSET(0x10ACA730)
#define CLASS_1_BBBB808191126E3B_METHOD_1_D571F33748045C95_OFFSET UNITYSDK_OFFSET(0x10ACB990)
#define CLASS_1_BBBB808191126E3B_METHOD_1_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x10ACBA90)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10ACB9A0)
#define CLASS_1_BBBB808191126E3B_METHOD_1_F8728F22A9AA3720_OFFSET UNITYSDK_OFFSET(0x10ACB9B0)
#define CLASS_1_BBBB808191126E3B_SET_ALLOWAUTORESPAWN_OFFSET UNITYSDK_OFFSET(0x10ACB980)
#define CLASS_1_BBBB808191126E3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x10ACC120)
#define CLASS_1_BBBB808191126E3B__CTOR_OFFSET UNITYSDK_OFFSET(0x10ACBF80)

inline static constexpr unsigned int Class_1_BBBB808191126E3B_TypeDefinitionIndex = 56631;

class Class_1_BBBB808191126E3B : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x125C0);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x125C4);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBBB808191126E3B_TypeDefinitionIndex)->GetStaticField(0x125C8);
	}
	::System::Collections::Generic::List_1<::Class_1_DE5041E302ADB1E0*>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_1_13; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_95735B6D5ACB12CB*>* Field_1_11; // 0x28
	::Il2CppArray<::Class_1_9AAC3BB4FD7CE6FE*>* Field_1_14; // 0x30
	::RPG::Client::RPGProfilerMarker* Field_1_12; // 0x38
	::UnityEngine::AI::AsyncNavMeshSimulator* Field_1_8; // 0x40
	::RPG::Client::MapDef* Field_1_5; // 0x48
	::System::Boolean _AllowAutoRespawn_k__BackingField; // 0x50
	::System::Boolean Field_1_4; // 0x51
	::System::Int32 Field_1_7; // 0x54
	::System::UInt32 Field_1_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7_1(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_0AB718BEE9EA06D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_940FD68EFA4D5A3C(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_940FD68EFA4D5A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_C63C6A5A3A58FC58(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C63C6A5A3A58FC58_OFFSET))(this, a1);
	}

	::System::Void Method_1_1355E0FFDACE8C93(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_1355E0FFDACE8C93_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F60C2A31E3F634D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_9F60C2A31E3F634D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Void Method_1_9D35F3937044FA88(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_9D35F3937044FA88_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AF4433C5CD40A9C5(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_AF4433C5CD40A9C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AF8CC03883E6064(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_6AF8CC03883E6064_OFFSET))(this, a1);
	}

	::System::Void Method_1_1441C65D1B81B844(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_1441C65D1B81B844_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_495B51F3EF57F06C(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_495B51F3EF57F06C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C03A1E09069749C9(::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_C03A1E09069749C9_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowAutoRespawn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_GET_ALLOWAUTORESPAWN_OFFSET))(this);
	}

	::System::Void set_AllowAutoRespawn(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_SET_ALLOWAUTORESPAWN_OFFSET))(this, value);
	}

	::UnityEngine::AI::AsyncNavMeshSimulator* Method_1_D571F33748045C95()
	{
		return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_D571F33748045C95_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::CustomRP::Quality Method_1_F8728F22A9AA3720()
	{
		return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_F8728F22A9AA3720_OFFSET))(this);
	}

	::System::Boolean Method_1_EC28FD7AA4FC3328(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_1_47A94975B0610A2C(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_47A94975B0610A2C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B7F0EB7229C08F9(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_BBBB808191126E3B_METHOD_1_7B7F0EB7229C08F9_OFFSET))(this, a1);
	}
};
