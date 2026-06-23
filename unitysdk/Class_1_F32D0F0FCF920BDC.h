#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_209;
class Class_1_05CB482B8638F6BA;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F32D0F0FCF920BDC_METHOD_1_3C9DE682726B69CE_OFFSET UNITYSDK_OFFSET(0x129AB610)
#define CLASS_1_F32D0F0FCF920BDC_METHOD_1_CBA5FC86AC4F4AD0_OFFSET UNITYSDK_OFFSET(0x129AB710)
#define CLASS_1_F32D0F0FCF920BDC_METHOD_1_E53CA7258B2BF183_OFFSET UNITYSDK_OFFSET(0x129AB830)
#define CLASS_1_F32D0F0FCF920BDC_METHOD_1_FEA909EFF45FDE0B_OFFSET UNITYSDK_OFFSET(0x129AB920)

inline static constexpr unsigned int Class_1_F32D0F0FCF920BDC_TypeDefinitionIndex = 71945;

class Class_1_F32D0F0FCF920BDC : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_3C9DE682726B69CE(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Il2CppArray<::Class_0_16E4307DCC419505_209*>* a3, ::Class_1_70BD21BFA8AB64FC* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::Class_0_16E4307DCC419505_209*>*, ::Class_1_70BD21BFA8AB64FC*))((::PBYTE)hIl2Cpp + CLASS_1_F32D0F0FCF920BDC_METHOD_1_3C9DE682726B69CE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CBA5FC86AC4F4AD0(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_F32D0F0FCF920BDC_METHOD_1_CBA5FC86AC4F4AD0_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_E53CA7258B2BF183(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>*))((::PBYTE)hIl2Cpp + CLASS_1_F32D0F0FCF920BDC_METHOD_1_E53CA7258B2BF183_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FEA909EFF45FDE0B(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_F32D0F0FCF920BDC_METHOD_1_FEA909EFF45FDE0B_OFFSET))(a1, a2);
	}
};
