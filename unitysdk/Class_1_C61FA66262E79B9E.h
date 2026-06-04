#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_264;
class Class_0_16E4307DCC419505_265;
class Class_0_16E4307DCC419505_267;
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C61FA66262E79B9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E924D0)
#define CLASS_1_C61FA66262E79B9E_GET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x18E93230)
#define CLASS_1_C61FA66262E79B9E_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x18E931F0)
#define CLASS_1_C61FA66262E79B9E_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18E93210)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18E93130)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18E93010)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x18E93250)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x18E93140)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18E930F0)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_48D8F34D05852E3B_OFFSET UNITYSDK_OFFSET(0x18E927A0)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_6EF53A9D737B34D4_OFFSET UNITYSDK_OFFSET(0x18E92910)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x18E92850)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x18E92CC0)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x18E92F60)
#define CLASS_1_C61FA66262E79B9E_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x18E92860)
#define CLASS_1_C61FA66262E79B9E_SET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x18E93240)
#define CLASS_1_C61FA66262E79B9E_SET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x18E93200)
#define CLASS_1_C61FA66262E79B9E_SET_STATE_OFFSET UNITYSDK_OFFSET(0x18E93220)
#define CLASS_1_C61FA66262E79B9E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E93300)
#define CLASS_1_C61FA66262E79B9E__CTOR_OFFSET UNITYSDK_OFFSET(0x18E923B0)

inline static constexpr unsigned int Class_1_C61FA66262E79B9E_TypeDefinitionIndex = 40409;

class Class_1_C61FA66262E79B9E : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C61FA66262E79B9E_TypeDefinitionIndex)->GetStaticField(0x1290);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C61FA66262E79B9E_TypeDefinitionIndex)->GetStaticField(0x1298);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C61FA66262E79B9E_TypeDefinitionIndex)->GetStaticField(0x12A0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C61FA66262E79B9E_TypeDefinitionIndex)->GetStaticField(0x12A8);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C61FA66262E79B9E_TypeDefinitionIndex)->GetStaticField(0x920);
	}
	::Class_0_16E4307DCC419505_264* _OwnerGraph_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_267* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>* Field_1_7; // 0x20
	::Unity::Jobs::JobHandle _CurJobHandle_k__BackingField; // 0x28
	::System::UInt64 Field_1_9; // 0x38
	::System::UInt32 Field_1_10; // 0x40
	::RPG::Client::Multithread::NodeState _State_k__BackingField; // 0x44

	::System::Void _ctor(::Class_0_16E4307DCC419505_267* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_267*))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_48D8F34D05852E3B(::Class_0_16E4307DCC419505_265* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_48D8F34D05852E3B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_6EF53A9D737B34D4(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_6EF53A9D737B34D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_264* get_OwnerGraph()
	{
		return ((::Class_0_16E4307DCC419505_264*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_GET_OWNERGRAPH_OFFSET))(this);
	}

	::System::Void set_OwnerGraph(::Class_0_16E4307DCC419505_264* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_264*))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_SET_OWNERGRAPH_OFFSET))(this, a1);
	}

	::RPG::Client::Multithread::NodeState get_State()
	{
		return ((::RPG::Client::Multithread::NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::Multithread::NodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::NodeState))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_SET_STATE_OFFSET))(this, a1);
	}

	::Unity::Jobs::JobHandle get_CurJobHandle()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_GET_CURJOBHANDLE_OFFSET))(this);
	}

	::System::Void set_CurJobHandle(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_SET_CURJOBHANDLE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C61FA66262E79B9E_METHOD_1_42C5BADE1C9EFC80_1_OFFSET))(this);
	}
};
