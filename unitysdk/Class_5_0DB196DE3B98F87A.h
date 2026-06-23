#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F9CDBB957BDA8983.h"
#include "unitysdk/Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_1_EDF7E2913A3DD535;
class Class_3_4CEBE66D8E0DD3A7;
class Class_3_55A056439CE8821C;
class Class_4_6242AA13BDAC7241;
class Class_4_7B5A65E248106C68;
class Class_4_DA19DD65175B97CF;
class Class_5_0DB196DE3B98F87A_Class_1_347E4C14F09A5A45;
class Class_5_8A5B236F53009830;
class Class_5_A6F8D19602712D95;
class Class_5_FCAF801AC482D3B5;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_0DB196DE3B98F87A_METHOD_5_0112CBB6E0E463D3_OFFSET UNITYSDK_OFFSET(0x15AF0440)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15AEA3B0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_08C9B39C07B526E4_OFFSET UNITYSDK_OFFSET(0x15AEAA80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_096BBDBCFF281609_OFFSET UNITYSDK_OFFSET(0x15AEF710)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_0DE10FB6B809B938_OFFSET UNITYSDK_OFFSET(0x15AF1560)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_14B3B7D18EF50974_OFFSET UNITYSDK_OFFSET(0x15AEE750)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_15B5FD54C4CEEA1E_OFFSET UNITYSDK_OFFSET(0x15AEEBC0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_183B83AC452450A4_OFFSET UNITYSDK_OFFSET(0x15AF1D30)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_1_OFFSET UNITYSDK_OFFSET(0x15AECC90)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_OFFSET UNITYSDK_OFFSET(0x15AEC250)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_1D6B4D99BBE24A4E_OFFSET UNITYSDK_OFFSET(0x15AEAEB0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_2248EE9A822FF30B_OFFSET UNITYSDK_OFFSET(0x15AEE2C0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_32B08B3EF0F49488_OFFSET UNITYSDK_OFFSET(0x15AECD40)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_337434052E9ECAC7_OFFSET UNITYSDK_OFFSET(0x15AF1E50)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x15AF1880)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_493B1699B91163A9_OFFSET UNITYSDK_OFFSET(0x15AEC300)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_4FB1BA31C2BB0CC1_OFFSET UNITYSDK_OFFSET(0x15AECED0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_1_OFFSET UNITYSDK_OFFSET(0x15AF0350)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_OFFSET UNITYSDK_OFFSET(0x15AEE950)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5F4024CFF6F398BA_OFFSET UNITYSDK_OFFSET(0x15AF0B50)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_5F66EC39C4A62446_OFFSET UNITYSDK_OFFSET(0x15AF0D80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x15AF1E00)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x15AECC80)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x15AEADF0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_7EF1004C02A28808_OFFSET UNITYSDK_OFFSET(0x15AEE440)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_7FE7F893829399D7_OFFSET UNITYSDK_OFFSET(0x15AEA5F0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_823673E6D012DB40_OFFSET UNITYSDK_OFFSET(0x15AF19B0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9094C7E05F1A5B4A_OFFSET UNITYSDK_OFFSET(0x15AEB360)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9609E1F5A5E27A3F_OFFSET UNITYSDK_OFFSET(0x15AEE7B0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_97ECF2F5DF6FFF15_OFFSET UNITYSDK_OFFSET(0x15AEEA20)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_9EB30013E62F2720_OFFSET UNITYSDK_OFFSET(0x15AEC650)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_AF9895C2D9CDAC4A_OFFSET UNITYSDK_OFFSET(0x15AF1F70)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_B8CAAA32CB84B37E_OFFSET UNITYSDK_OFFSET(0x15AEFB60)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_BAC392D71D86582E_OFFSET UNITYSDK_OFFSET(0x15AF0870)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x15AEB320)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_CACDFB6EDC05F97E_OFFSET UNITYSDK_OFFSET(0x15AECB50)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x15AEF550)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x15AEA640)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E4B82A881FC0BE_OFFSET UNITYSDK_OFFSET(0x15AED090)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_DCBB0D8A534E50E6_OFFSET UNITYSDK_OFFSET(0x15AF0590)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0x15AEAAD0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E78551FB0A4D1B02_OFFSET UNITYSDK_OFFSET(0x15AEEE30)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x15AF1210)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x15AED000)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_ED213E4DDA2CFF9E_OFFSET UNITYSDK_OFFSET(0x15AF12A0)
#define CLASS_5_0DB196DE3B98F87A_METHOD_5_FCBBBE8104165B3C_OFFSET UNITYSDK_OFFSET(0x15AF1A30)
#define CLASS_5_0DB196DE3B98F87A__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEA190)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_TypeDefinitionIndex = 83228;

class Class_5_0DB196DE3B98F87A : public ::Class_4_F9CDBB957BDA8983<::Class_3_55A056439CE8821C*>
{
public:
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_13; // 0x30
	::Il2CppArray<::Class_5_A6F8D19602712D95*>* Field_5_7; // 0x38
	::MoleMole::HollowChessboard::HollowEntity* Field_5_8; // 0x40
	::Class_5_0DB196DE3B98F87A_Class_1_347E4C14F09A5A45* Field_5_4; // 0x48
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Field_5_5; // 0x50
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_14; // 0x58
	::MoleMole::Config::ConfigHollowChessboard* Field_5_10; // 0x60
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTaskCompletionSource*>* Field_5_12; // 0x68
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_5_11; // 0x70
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x78
	::Class_3_4CEBE66D8E0DD3A7* Field_5_0; // 0x80
	::Class_5_FCAF801AC482D3B5* Field_5_9; // 0x88
	::System::Single Field_5_2; // 0x90
	::System::Boolean Field_5_6; // 0x94
	::System::Single Field_5_3; // 0x98

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_5_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_5_7FE7F893829399D7(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_7FE7F893829399D7_OFFSET))(this, a1);
	}

	::System::Void Method_5_08C9B39C07B526E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_08C9B39C07B526E4_OFFSET))(this);
	}

	::System::Void Method_5_70603E2AE56EBD6B(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_5_1D6B4D99BBE24A4E(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Class_4_6242AA13BDAC7241* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_4_6242AA13BDAC7241*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1D6B4D99BBE24A4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_C9312916D3A31323_OFFSET))(this);
	}

	static ::System::Void Method_5_9094C7E05F1A5B4A(::MoleMole::UIHollowMainPageController* a1, ::Class_4_DA19DD65175B97CF* a2, ::ProtoScript::HollowGridLink a3, ::Class_5_0DB196DE3B98F87A_Class_1_347E4C14F09A5A45* a4)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowMainPageController*, ::Class_4_DA19DD65175B97CF*, ::ProtoScript::HollowGridLink, ::Class_5_0DB196DE3B98F87A_Class_1_347E4C14F09A5A45*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9094C7E05F1A5B4A_OFFSET))(a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_1A662F1DA90C17E9(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_OFFSET))(this, a1);
	}

	::System::Void Method_5_493B1699B91163A9(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_493B1699B91163A9_OFFSET))(this, a1);
	}

	::System::Void Method_5_9EB30013E62F2720(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9EB30013E62F2720_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_CACDFB6EDC05F97E(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_CACDFB6EDC05F97E_OFFSET))(this, a1);
	}

	::System::Void Method_5_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E57456F36F09A25C_OFFSET))(this);
	}

	::System::Void Method_5_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_70484F0C4668EBF2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_1A662F1DA90C17E9_1(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_1A662F1DA90C17E9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_32B08B3EF0F49488(::Class_5_A6F8D19602712D95* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a3, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_32B08B3EF0F49488_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_5_D9E4B82A881FC0BE(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_D9E4B82A881FC0BE_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_2248EE9A822FF30B(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_1_EDF7E2913A3DD535* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_EDF7E2913A3DD535*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_2248EE9A822FF30B_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_7EF1004C02A28808(::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_7EF1004C02A28808_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_5E99A542B900C2B1(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowEntity* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_97ECF2F5DF6FFF15(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_97ECF2F5DF6FFF15_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>* Method_5_15B5FD54C4CEEA1E(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_15B5FD54C4CEEA1E_OFFSET))(a1);
	}

	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Method_5_14B3B7D18EF50974()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_14B3B7D18EF50974_OFFSET))(this);
	}

	::System::Void Method_5_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_5_096BBDBCFF281609(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_096BBDBCFF281609_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B8CAAA32CB84B37E(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_B8CAAA32CB84B37E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_5E99A542B900C2B1_1(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5E99A542B900C2B1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_4FB1BA31C2BB0CC1(::Class_5_A6F8D19602712D95* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a3, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_4FB1BA31C2BB0CC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_9609E1F5A5E27A3F(::Cysharp::Threading::Tasks::UniTaskCompletionSource*& a1, ::Class_5_A6F8D19602712D95* a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a3, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* a4, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*&, ::Class_5_A6F8D19602712D95*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_9609E1F5A5E27A3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_0112CBB6E0E463D3(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_0112CBB6E0E463D3_OFFSET))(this, a1);
	}

	::System::Void Method_5_DCBB0D8A534E50E6(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_DCBB0D8A534E50E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_E9A575D18A0748D9_1(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_ED213E4DDA2CFF9E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_ED213E4DDA2CFF9E_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_BAC392D71D86582E(::MoleMole::Vector2Int a1, ::Class_5_8A5B236F53009830* a2, ::Class_4_7B5A65E248106C68* a3, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3& a4)
	{
		return ((::System::Void(*)(::MoleMole::Vector2Int, ::Class_5_8A5B236F53009830*, ::Class_4_7B5A65E248106C68*, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3&))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_BAC392D71D86582E_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_0DE10FB6B809B938(::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_0DE10FB6B809B938_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_45714050EDEF8291_OFFSET))(this);
	}

	static ::System::Void Method_5_5F4024CFF6F398BA(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_8A5B236F53009830* a2, ::Class_4_7B5A65E248106C68* a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_8A5B236F53009830*, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5F4024CFF6F398BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_5_5F66EC39C4A62446(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_1_EDF7E2913A3DD535* a2, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_EDF7E2913A3DD535*, ::Class_5_0DB196DE3B98F87A_Struct_2_6A02089180E906A3&))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_5F66EC39C4A62446_OFFSET))(a1, a2, a3);
	}

	::Class_5_A6F8D19602712D95* Method_5_823673E6D012DB40(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_823673E6D012DB40_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Method_5_FCBBBE8104165B3C(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* a1)
	{
		return ((::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_FCBBBE8104165B3C_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_5_183B83AC452450A4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_183B83AC452450A4_OFFSET))(a1);
	}

	::System::Void Method_5_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_676E831338583C9D_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_337434052E9ECAC7(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_337434052E9ECAC7_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::ConfigHollowChessboard_MoveXY* Method_5_E78551FB0A4D1B02(::Class_5_FCAF801AC482D3B5* a1, ::MoleMole::Config::ConfigHollowChessboard_MoveXY* a2, ::ProtoScript::HollowGridLink a3)
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_MoveXY*(*)(::Class_5_FCAF801AC482D3B5*, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::ProtoScript::HollowGridLink))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_E78551FB0A4D1B02_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_AF9895C2D9CDAC4A(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_METHOD_5_AF9895C2D9CDAC4A_OFFSET))(this, a1);
	}
};
