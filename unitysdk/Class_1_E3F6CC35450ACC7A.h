#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_291;
class Class_0_16E4307DCC419505_292;
class Class_0_16E4307DCC419505_294;
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E3F6CC35450ACC7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F004270)
#define CLASS_1_E3F6CC35450ACC7A_GET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1F005490)
#define CLASS_1_E3F6CC35450ACC7A_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1F005450)
#define CLASS_1_E3F6CC35450ACC7A_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F005470)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1F005330)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_041BEE07E27CE75D_OFFSET UNITYSDK_OFFSET(0x1F004750)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1F0051B0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x1F0054B0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x1F005340)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1F0052F0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_48D8F34D05852E3B_OFFSET UNITYSDK_OFFSET(0x1F004590)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x1F004640)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x1F004CD0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_1_OFFSET UNITYSDK_OFFSET(0x1F0050A0)
#define CLASS_1_E3F6CC35450ACC7A_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1F004650)
#define CLASS_1_E3F6CC35450ACC7A_SET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1F0054A0)
#define CLASS_1_E3F6CC35450ACC7A_SET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1F005460)
#define CLASS_1_E3F6CC35450ACC7A_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1F005480)
#define CLASS_1_E3F6CC35450ACC7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0055C0)
#define CLASS_1_E3F6CC35450ACC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F004100)

inline static constexpr unsigned int Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex = 42184;

class Class_1_E3F6CC35450ACC7A : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_EOPGCINLMOA()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x11A0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_DHENEGNOJBE()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x11A8);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_EMEIBBGHHOD()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x11B0);
	}
	static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_ACGJKBIKNMN()
	{
		return (::RPG::Client::RPGProfilerMarkerWithStringData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x11B8);
	}
	static ::System::UInt32* StaticGet_BJIBGMPLMOJ()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3F6CC35450ACC7A_TypeDefinitionIndex)->GetStaticField(0x810);
	}
	::Class_0_16E4307DCC419505_294* LEIKCAGPAII; // 0x10
	::Class_0_16E4307DCC419505_291* _OwnerGraph_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>* IBFONKFNIDI; // 0x20
	::Unity::Jobs::JobHandle _CurJobHandle_k__BackingField; // 0x28
	::System::UInt32 BMFNBCCMFFH; // 0x38
	::RPG::Client::Multithread::NodeState _State_k__BackingField; // 0x3C
	::System::UInt64 NNFCNMNKOFB; // 0x40

	::System::Void _ctor(::Class_0_16E4307DCC419505_294* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_294*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_48D8F34D05852E3B(::Class_0_16E4307DCC419505_292* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_292*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_48D8F34D05852E3B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_METHOD_1_969D9516A75501DE_OFFSET))(this);
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

	::Class_0_16E4307DCC419505_291* get_OwnerGraph()
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_GET_OWNERGRAPH_OFFSET))(this);
	}

	::System::Void set_OwnerGraph(::Class_0_16E4307DCC419505_291* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_291*))((::PBYTE)hIl2Cpp + CLASS_1_E3F6CC35450ACC7A_SET_OWNERGRAPH_OFFSET))(this, a1);
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
