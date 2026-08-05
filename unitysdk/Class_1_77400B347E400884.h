#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_388;
class Class_1_05CB482B8638F6BA;
class Class_1_70BD21BFA8AB64FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_77400B347E400884_METHOD_1_04817256349FDDEB_OFFSET UNITYSDK_OFFSET(0x14E849B0)
#define CLASS_1_77400B347E400884_METHOD_1_CBA5FC86AC4F4AD0_OFFSET UNITYSDK_OFFSET(0x14E84890)
#define CLASS_1_77400B347E400884_METHOD_1_E53CA7258B2BF183_OFFSET UNITYSDK_OFFSET(0x14E84250)
#define CLASS_1_77400B347E400884_METHOD_1_FEA909EFF45FDE0B_OFFSET UNITYSDK_OFFSET(0x14E84330)

inline static constexpr unsigned int Class_1_77400B347E400884_TypeDefinitionIndex = 67241;

class Class_1_77400B347E400884 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_E53CA7258B2BF183(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>*))((::PBYTE)hIl2Cpp + CLASS_1_77400B347E400884_METHOD_1_E53CA7258B2BF183_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FEA909EFF45FDE0B(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_77400B347E400884_METHOD_1_FEA909EFF45FDE0B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_04817256349FDDEB(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Il2CppArray<::Class_0_16E4307DCC419505_388*>* a3, ::Class_1_70BD21BFA8AB64FC* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::HollowCell, ::Il2CppArray<::Class_0_16E4307DCC419505_388*>*, ::Class_1_70BD21BFA8AB64FC*))((::PBYTE)hIl2Cpp + CLASS_1_77400B347E400884_METHOD_1_04817256349FDDEB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CBA5FC86AC4F4AD0(::Class_1_05CB482B8638F6BA* a1, ::MoleMole::HollowChessboard::RenderDataHandle a2)
	{
		return ((::System::Void(*)(::Class_1_05CB482B8638F6BA*, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_77400B347E400884_METHOD_1_CBA5FC86AC4F4AD0_OFFSET))(a1, a2);
	}
};
