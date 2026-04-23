#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

class Class_1_FE61D40DC1548892_Class_1_22407E83B47119C2;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_FE61D40DC1548892_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E9BEB0)
#define CLASS_1_FE61D40DC1548892_METHOD_1_21B676813BC92CC4_OFFSET UNITYSDK_OFFSET(0x17E9C690)
#define CLASS_1_FE61D40DC1548892_METHOD_1_40CA0153415CA16D_1_OFFSET UNITYSDK_OFFSET(0x17E9C990)
#define CLASS_1_FE61D40DC1548892_METHOD_1_40CA0153415CA16D_OFFSET UNITYSDK_OFFSET(0x17E9C920)
#define CLASS_1_FE61D40DC1548892_METHOD_1_559231FA990671B3_OFFSET UNITYSDK_OFFSET(0x17E9C7F0)
#define CLASS_1_FE61D40DC1548892_METHOD_1_7A11F61562A5699F_OFFSET UNITYSDK_OFFSET(0x17E9C570)
#define CLASS_1_FE61D40DC1548892_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x17E9C4C0)
#define CLASS_1_FE61D40DC1548892_METHOD_1_C1BADB8133B639C5_OFFSET UNITYSDK_OFFSET(0x17E9C150)
#define CLASS_1_FE61D40DC1548892_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E9BF90)
#define CLASS_1_FE61D40DC1548892_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17E9C110)
#define CLASS_1_FE61D40DC1548892__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9C9F0)

inline static constexpr unsigned int Class_1_FE61D40DC1548892_TypeDefinitionIndex = 39121;

class Class_1_FE61D40DC1548892 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason>* Field_1_3; // 0x10
	::RPG::PoolList_1<::Class_1_FE61D40DC1548892_Class_1_22407E83B47119C2*>* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_C1BADB8133B639C5(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_C1BADB8133B639C5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::Boolean Method_1_7A11F61562A5699F(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_7A11F61562A5699F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_559231FA990671B3(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_559231FA990671B3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_40CA0153415CA16D(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_40CA0153415CA16D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40CA0153415CA16D_1(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_40CA0153415CA16D_1_OFFSET))(this, a1);
	}

	::Class_1_FE61D40DC1548892_Class_1_22407E83B47119C2* Method_1_21B676813BC92CC4(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::Class_1_FE61D40DC1548892_Class_1_22407E83B47119C2*(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_FE61D40DC1548892_METHOD_1_21B676813BC92CC4_OFFSET))(this, a1);
	}
};
