#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_5E94C8D55DBFF524_1.h"

class Class_1_0653B4DCF7808BED;
class Class_1_366DF9E8C3FBFE98;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B47F5E867AD0B042_METHOD_4_49D8380F325876D3_OFFSET UNITYSDK_OFFSET(0x18832AD0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_5E2F01B0702DACBE_OFFSET UNITYSDK_OFFSET(0x18832CF0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_6B845815925845A2_OFFSET UNITYSDK_OFFSET(0x18833300)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_704C379A8A3C8471_OFFSET UNITYSDK_OFFSET(0x188337A0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_7B4A205C38FE24BC_OFFSET UNITYSDK_OFFSET(0x18832BA0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_8EFD72B0EED2E0BF_OFFSET UNITYSDK_OFFSET(0x188331C0)
#define CLASS_4_B47F5E867AD0B042__CTOR_OFFSET UNITYSDK_OFFSET(0x18832B50)

inline static constexpr unsigned int Class_4_B47F5E867AD0B042_TypeDefinitionIndex = 75540;

class Class_4_B47F5E867AD0B042 : public ::Class_3_B3B7AD2B34783116
{
public:
	::Struct_2_5E94C8D55DBFF524_1 Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_49D8380F325876D3()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_49D8380F325876D3_OFFSET))(this);
	}

	::System::Void Method_4_7B4A205C38FE24BC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_7B4A205C38FE24BC_OFFSET))(this, a1);
	}

	::System::Void Method_4_5E2F01B0702DACBE(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_5E2F01B0702DACBE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_8EFD72B0EED2E0BF(::System::Int32 a1, ::Class_1_0653B4DCF7808BED* a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::Class_1_0653B4DCF7808BED*))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_8EFD72B0EED2E0BF_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_6B845815925845A2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_6B845815925845A2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_704C379A8A3C8471(::Class_1_366DF9E8C3FBFE98* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_366DF9E8C3FBFE98*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_704C379A8A3C8471_OFFSET))(this, a1, a2);
	}
};
