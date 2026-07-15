#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_284;
class Class_0_16E4307DCC419505_285;
class Class_0_16E4307DCC419505_287;
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E3F6CC35450ACC7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2F7110)
#define CLASS_1_E3F6CC35450ACC7A_GET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1D2F8330)
#define CLASS_1_E3F6CC35450ACC7A_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1D2F82F0)
#define CLASS_1_E3F6CC35450ACC7A_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D2F8310)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D2F81D0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_041BEE07E27CE75D_OFFSET UNITYSDK_OFFSET(0x1D2F75F0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1D2F8050)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x1D2F8350)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1D2F81E0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1D2F8190)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_48D8F34D05852E3B_OFFSET UNITYSDK_OFFSET(0x1D2F7430)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x1D2F74E0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x1D2F7B70)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x1D2F7F40)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1D2F74F0)
#define CLASS_1_E3F6CC35450ACC7A_SET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1D2F8340)
#define CLASS_1_E3F6CC35450ACC7A_SET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1D2F8300)
#define CLASS_1_E3F6CC35450ACC7A_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1D2F8320)
#define CLASS_1_E3F6CC35450ACC7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F8460)
#define CLASS_1_E3F6CC35450ACC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6FA0)

inline static constexpr unsigned int Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex = 41224;

class Class_1_E3F6CC35450ACC7A : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0xFF0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0xFF8);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x1000);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x1008);
	}
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x900);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_284* _OwnerGraph_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_287* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::RPG::Client::Multithread::NodeState _State_k__BackingField; // 0x2C
	::Unity::Jobs::JobHandle _CurJobHandle_k__BackingField; // 0x30
	::System::UInt64 Field_1_11; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_287*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_48D8F34D05852E3B(::Class_0_16E4307DCC419505_285* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_285*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_48D8F34D05852E3B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_041BEE07E27CE75D(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_041BEE07E27CE75D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_284* get_OwnerGraph()
	{
		return ((::Class_0_16E4307DCC419505_284*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_GET_OWNERGRAPH_OFFSET))(this);
	}

	::System::Void set_OwnerGraph(::Class_0_16E4307DCC419505_284* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_284*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_SET_OWNERGRAPH_OFFSET))(this, a1);
	}

	::RPG::Client::Multithread::NodeState get_State()
	{
		return ((::RPG::Client::Multithread::NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::Multithread::NodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::NodeState))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_SET_STATE_OFFSET))(this, a1);
	}

	::Unity::Jobs::JobHandle get_CurJobHandle()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_GET_CURJOBHANDLE_OFFSET))(this);
	}

	::System::Void set_CurJobHandle(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_SET_CURJOBHANDLE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_1_OFFSET))(this);
	}
};
