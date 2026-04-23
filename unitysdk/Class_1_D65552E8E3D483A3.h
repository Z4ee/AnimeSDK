#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_251;
class Class_0_16E4307DCC419505_252;
class Class_0_16E4307DCC419505_254;
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D65552E8E3D483A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180F1DC0)
#define CLASS_1_D65552E8E3D483A3_GET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x180F2190)
#define CLASS_1_D65552E8E3D483A3_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x180F2150)
#define CLASS_1_D65552E8E3D483A3_GET_STATE_OFFSET UNITYSDK_OFFSET(0x180F2170)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180F2140)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x180F2020)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x180F1640)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x180F0940)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x180F2100)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_6EF53A9D737B34D4_OFFSET UNITYSDK_OFFSET(0x180F0E90)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x180F1F60)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x180F13A0)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_EBC1C6E91542E706_OFFSET UNITYSDK_OFFSET(0x180F1F20)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x180F1F70)
#define CLASS_1_D65552E8E3D483A3_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x180F09F0)
#define CLASS_1_D65552E8E3D483A3_SET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x180F21A0)
#define CLASS_1_D65552E8E3D483A3_SET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x180F2160)
#define CLASS_1_D65552E8E3D483A3_SET_STATE_OFFSET UNITYSDK_OFFSET(0x180F2180)
#define CLASS_1_D65552E8E3D483A3__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F21B0)
#define CLASS_1_D65552E8E3D483A3__CTOR_OFFSET UNITYSDK_OFFSET(0x180F1CB0)

inline static constexpr unsigned int Class_1_D65552E8E3D483A3_TypeDefinitionIndex = 39586;

class Class_1_D65552E8E3D483A3 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_9()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D65552E8E3D483A3_TypeDefinitionIndex)->GetStaticField(0x13A0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_11()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D65552E8E3D483A3_TypeDefinitionIndex)->GetStaticField(0x13A8);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_8()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D65552E8E3D483A3_TypeDefinitionIndex)->GetStaticField(0x13B0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_10()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D65552E8E3D483A3_TypeDefinitionIndex)->GetStaticField(0x13B8);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D65552E8E3D483A3_TypeDefinitionIndex)->GetStaticField(0xFC0);
	}
	::Class_0_16E4307DCC419505_254* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>* Field_1_6; // 0x18
	::Class_0_16E4307DCC419505_251* _OwnerGraph_k__BackingField; // 0x20
	::System::UInt64 Field_1_7; // 0x28
	::Unity::Jobs::JobHandle _CurJobHandle_k__BackingField; // 0x30
	::System::UInt32 Field_1_3; // 0x40
	::RPG::Client::Multithread::NodeState _State_k__BackingField; // 0x44

	::System::Void _ctor(::Class_0_16E4307DCC419505_254* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EBC1C6E91542E706(::Class_0_16E4307DCC419505_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_EBC1C6E91542E706_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_6EF53A9D737B34D4(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_6EF53A9D737B34D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_251* get_OwnerGraph()
	{
		return ((::Class_0_16E4307DCC419505_251*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_GET_OWNERGRAPH_OFFSET))(this);
	}

	::System::Void set_OwnerGraph(::Class_0_16E4307DCC419505_251* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_251*))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_SET_OWNERGRAPH_OFFSET))(this, value);
	}

	::RPG::Client::Multithread::NodeState get_State()
	{
		return ((::RPG::Client::Multithread::NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::Multithread::NodeState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::NodeState))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_SET_STATE_OFFSET))(this, value);
	}

	::Unity::Jobs::JobHandle get_CurJobHandle()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_GET_CURJOBHANDLE_OFFSET))(this);
	}

	::System::Void set_CurJobHandle(::Unity::Jobs::JobHandle value)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_SET_CURJOBHANDLE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D65552E8E3D483A3_METHOD_1_42C5BADE1C9EFC80_1_OFFSET))(this);
	}
};
