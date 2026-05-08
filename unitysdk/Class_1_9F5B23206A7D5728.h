#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_277;
class Class_1_05CB482B8638F6BA;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F5B23206A7D5728_METHOD_1_CBA5FC86AC4F4AD0_OFFSET UNITYSDK_OFFSET(0xD209680)
#define CLASS_1_9F5B23206A7D5728_METHOD_1_E53CA7258B2BF183_OFFSET UNITYSDK_OFFSET(0xD2097A0)
#define CLASS_1_9F5B23206A7D5728_METHOD_1_EBA61E014725721E_OFFSET UNITYSDK_OFFSET(0xD209890)
#define CLASS_1_9F5B23206A7D5728_METHOD_1_FEA909EFF45FDE0B_OFFSET UNITYSDK_OFFSET(0xD209120)

inline static constexpr unsigned int Class_1_9F5B23206A7D5728_TypeDefinitionIndex = 53518;

class Class_1_9F5B23206A7D5728 : public ::System::Object
{
public:
	static ::System::Void Method_1_FEA909EFF45FDE0B(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_9F5B23206A7D5728_METHOD_1_FEA909EFF45FDE0B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBA5FC86AC4F4AD0(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_9F5B23206A7D5728_METHOD_1_CBA5FC86AC4F4AD0_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_E53CA7258B2BF183(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>*))((::PBYTE)hIl2Cpp + CLASS_1_9F5B23206A7D5728_METHOD_1_E53CA7258B2BF183_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_EBA61E014725721E(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Il2CppArray<::Class_0_16E4307DCC419505_277*>* a3, ::Class_1_70BD21BFA8AB64FC* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::Class_0_16E4307DCC419505_277*>*, ::Class_1_70BD21BFA8AB64FC*))((::PBYTE)hIl2Cpp + CLASS_1_9F5B23206A7D5728_METHOD_1_EBA61E014725721E_OFFSET))(a1, a2, a3, a4);
	}
};
