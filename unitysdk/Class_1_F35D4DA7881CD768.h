#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

class Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_F35D4DA7881CD768_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E709B0)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_08530507EF1577BC_OFFSET UNITYSDK_OFFSET(0x18E710F0)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_3F2D1D1452193B32_OFFSET UNITYSDK_OFFSET(0x18E71210)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_40CA0153415CA16D_1_OFFSET UNITYSDK_OFFSET(0x18E71580)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_40CA0153415CA16D_OFFSET UNITYSDK_OFFSET(0x18E71510)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_6E075943865BA367_OFFSET UNITYSDK_OFFSET(0x18E70C70)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x18E71030)
#define CLASS_1_F35D4DA7881CD768_METHOD_1_BCF99AF1A5616278_OFFSET UNITYSDK_OFFSET(0x18E713E0)
#define CLASS_1_F35D4DA7881CD768_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18E70AB0)
#define CLASS_1_F35D4DA7881CD768_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18E70C30)
#define CLASS_1_F35D4DA7881CD768__CTOR_OFFSET UNITYSDK_OFFSET(0x18E715E0)

inline static constexpr unsigned int Class_1_F35D4DA7881CD768_TypeDefinitionIndex = 39890;

class Class_1_F35D4DA7881CD768 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_ONRECYCLE_OFFSET))(this);
	}

	::System::Boolean Method_1_6E075943865BA367(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_6E075943865BA367_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Boolean Method_1_08530507EF1577BC(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_08530507EF1577BC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_BCF99AF1A5616278(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_BCF99AF1A5616278_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_40CA0153415CA16D(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_40CA0153415CA16D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40CA0153415CA16D_1(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_40CA0153415CA16D_1_OFFSET))(this, a1);
	}

	::Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2* Method_1_3F2D1D1452193B32(::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a1)
	{
		return ((::Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2*(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_METHOD_1_3F2D1D1452193B32_OFFSET))(this, a1);
	}
};
