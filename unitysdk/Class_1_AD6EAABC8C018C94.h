#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF32442E7A80121;
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_AD6EAABC8C018C94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1385C530)
#define CLASS_1_AD6EAABC8C018C94_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1385C770)
#define CLASS_1_AD6EAABC8C018C94_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1385C780)
#define CLASS_1_AD6EAABC8C018C94_GET_ISWAITINGADVPHASE_OFFSET UNITYSDK_OFFSET(0x1385C7B0)
#define CLASS_1_AD6EAABC8C018C94_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x1385C790)
#define CLASS_1_AD6EAABC8C018C94_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1385C7A0)
#define CLASS_1_AD6EAABC8C018C94_GET__DATA_OFFSET UNITYSDK_OFFSET(0x1385C7E0)
#define CLASS_1_AD6EAABC8C018C94_GET__ISRECONNECT_OFFSET UNITYSDK_OFFSET(0x1385C7D0)
#define CLASS_1_AD6EAABC8C018C94_GET__PROTO_OFFSET UNITYSDK_OFFSET(0x1385C7F0)
#define CLASS_1_AD6EAABC8C018C94_METHOD_1_4845FF5BCDA6EB73_OFFSET UNITYSDK_OFFSET(0x1385C690)
#define CLASS_1_AD6EAABC8C018C94_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1385C420)
#define CLASS_1_AD6EAABC8C018C94_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1385C5B0)
#define CLASS_1_AD6EAABC8C018C94_SET_ISWAITINGADVPHASE_OFFSET UNITYSDK_OFFSET(0x1385C7C0)
#define CLASS_1_AD6EAABC8C018C94__CTOR_OFFSET UNITYSDK_OFFSET(0x1385C3A0)

inline static constexpr unsigned int Class_1_AD6EAABC8C018C94_TypeDefinitionIndex = 62598;

class Class_1_AD6EAABC8C018C94 : public ::System::Object
{
public:
	::RPG::Client::ChessRogueData* __Data_k__BackingField; // 0x10
	::Class_1_6CF32442E7A80121* __Proto_k__BackingField; // 0x18
	::System::UInt32 _LayerIndex_k__BackingField; // 0x20
	::System::UInt32 _Difficulty_k__BackingField; // 0x24
	::System::UInt32 _LayerID_k__BackingField; // 0x28
	::System::Boolean _IsWaitingAdvPhase_k__BackingField; // 0x2C
	::System::Boolean __IsReconnect_k__BackingField; // 0x2D
	::System::Boolean Field_1_7; // 0x2E
	::System::UInt32 _AreaID_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_6CF32442E7A80121* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::Promise*>* Method_1_4845FF5BCDA6EB73(::System::Boolean a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::Promise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_METHOD_1_4845FF5BCDA6EB73_OFFSET))(this, a1);
	}

	::System::UInt32 get_AreaID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET_AREAID_OFFSET))(this);
	}

	::System::UInt32 get_Difficulty()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::UInt32 get_LayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET_LAYERID_OFFSET))(this);
	}

	::System::UInt32 get_LayerIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET_LAYERINDEX_OFFSET))(this);
	}

	::System::Boolean get_IsWaitingAdvPhase()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET_ISWAITINGADVPHASE_OFFSET))(this);
	}

	::System::Void set_IsWaitingAdvPhase(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_SET_ISWAITINGADVPHASE_OFFSET))(this, a1);
	}

	::System::Boolean get__IsReconnect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET__ISRECONNECT_OFFSET))(this);
	}

	::RPG::Client::ChessRogueData* get__Data()
	{
		return ((::RPG::Client::ChessRogueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET__DATA_OFFSET))(this);
	}

	::Class_1_6CF32442E7A80121* get__Proto()
	{
		return ((::Class_1_6CF32442E7A80121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD6EAABC8C018C94_GET__PROTO_OFFSET))(this);
	}
};
