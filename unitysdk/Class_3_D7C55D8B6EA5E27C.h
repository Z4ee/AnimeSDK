#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_4_921BBA4FF7CA4B63;
class Class_4_FB899772C94F20E4_1;
class Class_5_F638703ACD0FA08E;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D7C55D8B6EA5E27C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12A86F70)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12A87750)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_50B777F1D5CF5EF8_OFFSET UNITYSDK_OFFSET(0x12A875F0)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET UNITYSDK_OFFSET(0x12A877F0)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_63EDAB3EFF913F92_OFFSET UNITYSDK_OFFSET(0x12A87200)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_682BB5FF95382E9B_OFFSET UNITYSDK_OFFSET(0x12A87800)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12A876B0)
#define CLASS_3_D7C55D8B6EA5E27C_METHOD_3_E7558A1DFF7208C8_OFFSET UNITYSDK_OFFSET(0x12A875E0)
#define CLASS_3_D7C55D8B6EA5E27C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A87470)

inline static constexpr unsigned int Class_3_D7C55D8B6EA5E27C_TypeDefinitionIndex = 78910;

class Class_3_D7C55D8B6EA5E27C : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Action_2<::Class_4_FB899772C94F20E4_1*, ::Class_5_F638703ACD0FA08E*>* Field_3_3; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_3_1; // 0x58
	::System::Action_1<::Class_4_921BBA4FF7CA4B63*>* Field_3_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_63EDAB3EFF913F92(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_63EDAB3EFF913F92_OFFSET))(this, a1);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_E7558A1DFF7208C8_OFFSET))(this);
	}

	::System::Void Method_3_50B777F1D5CF5EF8(::Class_4_FB899772C94F20E4_1* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_FB899772C94F20E4_1*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_50B777F1D5CF5EF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET))(this, a1);
	}

	::System::Void Method_3_682BB5FF95382E9B(::Class_4_921BBA4FF7CA4B63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_921BBA4FF7CA4B63*))((::PBYTE)hIl2Cpp + CLASS_3_D7C55D8B6EA5E27C_METHOD_3_682BB5FF95382E9B_OFFSET))(this, a1);
	}
};
