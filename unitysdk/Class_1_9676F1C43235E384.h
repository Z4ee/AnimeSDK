#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_1488;
class Class_0_16E4307DCC419505_1491;
class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_409;
class Class_1_0FB19829F200C71B;
class Class_1_13C055CC5761D73D;
class Class_1_2860A093D0C9EE46;
class Class_1_31522EB1D598DA68;
class Class_1_3CFD07DFD0180CDE;
class Class_1_45CA56C59C8BBBC0;
class Class_1_581762AE8CB44C88;
class Class_1_8A7282DF079FF8B3;
class Class_1_9676F1C43235E384_Class_2_C3E5A63932A0F53D;
class Class_1_9793B20584EC649C;
class Class_1_B3D1E248FF1F770C;
class Class_1_B8E5A1E8B06E8C9E;
class Class_1_BCC6EC14575D7215;
class Class_1_E2972620852557B7;
class Class_1_F9FBCC956DFCF137_30;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }

#define CLASS_1_9676F1C43235E384_ADD_HANDLECONFIRMEXIT_OFFSET UNITYSDK_OFFSET(0x15B847D0)
#define CLASS_1_9676F1C43235E384_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x15B848D0)
#define CLASS_1_9676F1C43235E384_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B864A0)
#define CLASS_1_9676F1C43235E384_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0x15B84630)
#define CLASS_1_9676F1C43235E384_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x15B84570)
#define CLASS_1_9676F1C43235E384_GET_CHIPMOLDBANK_OFFSET UNITYSDK_OFFSET(0x15B84550)
#define CLASS_1_9676F1C43235E384_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x15B84590)
#define CLASS_1_9676F1C43235E384_GET_EDIT_OFFSET UNITYSDK_OFFSET(0x15B845B0)
#define CLASS_1_9676F1C43235E384_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0x15B84610)
#define CLASS_1_9676F1C43235E384_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x15B845F0)
#define CLASS_1_9676F1C43235E384_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x15B845D0)
#define CLASS_1_9676F1C43235E384_METHOD_1_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x15B84B10)
#define CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0x15B84710)
#define CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_2_OFFSET UNITYSDK_OFFSET(0x15B849B0)
#define CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x15B84650)
#define CLASS_1_9676F1C43235E384_METHOD_1_C239A63E0C527090_OFFSET UNITYSDK_OFFSET(0x15B86680)
#define CLASS_1_9676F1C43235E384_METHOD_1_D25207AFD34DB1A9_OFFSET UNITYSDK_OFFSET(0x15B86A10)
#define CLASS_1_9676F1C43235E384_REMOVE_HANDLECONFIRMEXIT_OFFSET UNITYSDK_OFFSET(0x15B84850)
#define CLASS_1_9676F1C43235E384_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x15B84940)
#define CLASS_1_9676F1C43235E384_SET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0x15B84640)
#define CLASS_1_9676F1C43235E384_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x15B84580)
#define CLASS_1_9676F1C43235E384_SET_CHIPMOLDBANK_OFFSET UNITYSDK_OFFSET(0x15B84560)
#define CLASS_1_9676F1C43235E384_SET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x15B845A0)
#define CLASS_1_9676F1C43235E384_SET_EDIT_OFFSET UNITYSDK_OFFSET(0x15B845C0)
#define CLASS_1_9676F1C43235E384_SET_PARTNERS_OFFSET UNITYSDK_OFFSET(0x15B84620)
#define CLASS_1_9676F1C43235E384_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x15B84600)
#define CLASS_1_9676F1C43235E384_SET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x15B845E0)
#define CLASS_1_9676F1C43235E384__CTOR_OFFSET UNITYSDK_OFFSET(0x15B84A70)
#define CLASS_1_9676F1C43235E384__GET_BEGINSETTLEPERFORMANCECOMMAND_B__54_0_OFFSET UNITYSDK_OFFSET(0x15B86F20)
#define CLASS_1_9676F1C43235E384__GET_EXITCOMMAND_B__45_0_OFFSET UNITYSDK_OFFSET(0x15B86D40)
#define CLASS_1_9676F1C43235E384__GET_EXITCOMMAND_B__45_1_OFFSET UNITYSDK_OFFSET(0x15B86E60)
#define CLASS_1_9676F1C43235E384__GET_HANDLEENTEREDCOMMAND_B__42_0_OFFSET UNITYSDK_OFFSET(0x15B86B30)
#define CLASS_1_9676F1C43235E384__GET_HANDLEENTEREDCOMMAND_B__42_1_OFFSET UNITYSDK_OFFSET(0x15B86C40)
#define CLASS_1_9676F1C43235E384__INIT_B__58_0_OFFSET UNITYSDK_OFFSET(0x15B86F60)
#define CLASS_1_9676F1C43235E384__INIT_B__58_10_OFFSET UNITYSDK_OFFSET(0x15B873D0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_12_OFFSET UNITYSDK_OFFSET(0x15B87420)
#define CLASS_1_9676F1C43235E384__INIT_B__58_13_OFFSET UNITYSDK_OFFSET(0x15B874C0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_1_OFFSET UNITYSDK_OFFSET(0x15B86FD0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_2_OFFSET UNITYSDK_OFFSET(0x15B87050)
#define CLASS_1_9676F1C43235E384__INIT_B__58_3_OFFSET UNITYSDK_OFFSET(0x15B870D0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_4_OFFSET UNITYSDK_OFFSET(0x15B87180)
#define CLASS_1_9676F1C43235E384__INIT_B__58_5_OFFSET UNITYSDK_OFFSET(0x15B87220)
#define CLASS_1_9676F1C43235E384__INIT_B__58_7_OFFSET UNITYSDK_OFFSET(0x15B872C0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_8_OFFSET UNITYSDK_OFFSET(0x15B872F0)
#define CLASS_1_9676F1C43235E384__INIT_B__58_9_OFFSET UNITYSDK_OFFSET(0x15B87360)

inline static constexpr unsigned int Class_1_9676F1C43235E384_TypeDefinitionIndex = 79537;

class Class_1_9676F1C43235E384 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1488* MPFFGNPIDOA; // 0x10
	::Class_1_0FB19829F200C71B* _ChipPieces_k__BackingField; // 0x18
	::Class_1_581762AE8CB44C88* _Assistant_k__BackingField; // 0x20
	::Class_1_31522EB1D598DA68* MLGCJCPCLJP; // 0x28
	::Class_1_8A7282DF079FF8B3* _Partners_k__BackingField; // 0x30
	::Class_1_E2972620852557B7* MABLIBLCMOC; // 0x38
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x40
	::Class_1_BCC6EC14575D7215* _Submit_k__BackingField; // 0x48
	::Class_0_16E4307DCC419505_397* NJPPIINKNLO; // 0x50
	::Class_1_9793B20584EC649C* PPEDGGOGDCP; // 0x58
	::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>* HandleConfirmExit; // 0x60
	::Class_1_F9FBCC956DFCF137_30* _Progress_k__BackingField; // 0x68
	::Class_0_16E4307DCC419505_409* GJALMBBNNOF; // 0x70
	::Class_0_16E4307DCC419505_397* LCGBLFOHNFA; // 0x78
	::Class_1_B8E5A1E8B06E8C9E* _ChipMoldBank_k__BackingField; // 0x80
	::Class_0_16E4307DCC419505_397* GPJNCLPHNCM; // 0x88
	::System::Action* HandleExit; // 0x90
	::Class_1_B3D1E248FF1F770C* _Board_k__BackingField; // 0x98
	::Class_1_13C055CC5761D73D* IFFHKDPBEFL; // 0xA0
	::Class_0_16E4307DCC419505_1491* _Edit_k__BackingField; // 0xA8
	::System::Boolean GFAMGLFOMGI; // 0xB0

	::System::Void _ctor(::Class_0_16E4307DCC419505_409* a1, ::Class_0_16E4307DCC419505_1488* a2, ::Class_1_31522EB1D598DA68* a3, ::Class_1_9793B20584EC649C* a4, ::Class_1_13C055CC5761D73D* a5, ::Class_1_45CA56C59C8BBBC0* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*, ::Class_0_16E4307DCC419505_1488*, ::Class_1_31522EB1D598DA68*, ::Class_1_9793B20584EC649C*, ::Class_1_13C055CC5761D73D*, ::Class_1_45CA56C59C8BBBC0*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_B8E5A1E8B06E8C9E* get_ChipMoldBank()
	{
		return ((::Class_1_B8E5A1E8B06E8C9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_CHIPMOLDBANK_OFFSET))(this);
	}

	::System::Void set_ChipMoldBank(::Class_1_B8E5A1E8B06E8C9E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E5A1E8B06E8C9E*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_CHIPMOLDBANK_OFFSET))(this, a1);
	}

	::Class_1_B3D1E248FF1F770C* get_Board()
	{
		return ((::Class_1_B3D1E248FF1F770C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_BOARD_OFFSET))(this);
	}

	::System::Void set_Board(::Class_1_B3D1E248FF1F770C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B3D1E248FF1F770C*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_BOARD_OFFSET))(this, a1);
	}

	::Class_1_0FB19829F200C71B* get_ChipPieces()
	{
		return ((::Class_1_0FB19829F200C71B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_CHIPPIECES_OFFSET))(this);
	}

	::System::Void set_ChipPieces(::Class_1_0FB19829F200C71B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0FB19829F200C71B*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_CHIPPIECES_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1491* get_Edit()
	{
		return ((::Class_0_16E4307DCC419505_1491*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_EDIT_OFFSET))(this);
	}

	::System::Void set_Edit(::Class_0_16E4307DCC419505_1491* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1491*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_EDIT_OFFSET))(this, a1);
	}

	::Class_1_BCC6EC14575D7215* get_Submit()
	{
		return ((::Class_1_BCC6EC14575D7215*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_SUBMIT_OFFSET))(this);
	}

	::System::Void set_Submit(::Class_1_BCC6EC14575D7215* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BCC6EC14575D7215*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_SUBMIT_OFFSET))(this, a1);
	}

	::Class_1_F9FBCC956DFCF137_30* get_Progress()
	{
		return ((::Class_1_F9FBCC956DFCF137_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void set_Progress(::Class_1_F9FBCC956DFCF137_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_30*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_PROGRESS_OFFSET))(this, a1);
	}

	::Class_1_8A7282DF079FF8B3* get_Partners()
	{
		return ((::Class_1_8A7282DF079FF8B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_PARTNERS_OFFSET))(this);
	}

	::System::Void set_Partners(::Class_1_8A7282DF079FF8B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A7282DF079FF8B3*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_PARTNERS_OFFSET))(this, a1);
	}

	::Class_1_581762AE8CB44C88* get_Assistant()
	{
		return ((::Class_1_581762AE8CB44C88*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_GET_ASSISTANT_OFFSET))(this);
	}

	::System::Void set_Assistant(::Class_1_581762AE8CB44C88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_581762AE8CB44C88*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_SET_ASSISTANT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::System::Void add_HandleConfirmExit(::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_ADD_HANDLECONFIRMEXIT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleConfirmExit(::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_REMOVE_HANDLECONFIRMEXIT_OFFSET))(this, a1);
	}

	::System::Void add_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_ADD_HANDLEEXIT_OFFSET))(this, a1);
	}

	::System::Void remove_HandleExit(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_REMOVE_HANDLEEXIT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067_2()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_B213056103887067_2_OFFSET))(this);
	}

	::System::Void Method_1_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_C239A63E0C527090()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_C239A63E0C527090_OFFSET))(this);
	}

	::System::Void Method_1_D25207AFD34DB1A9(::System::Object* a1, ::Class_1_9676F1C43235E384_Class_2_C3E5A63932A0F53D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_9676F1C43235E384_Class_2_C3E5A63932A0F53D*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384_METHOD_1_D25207AFD34DB1A9_OFFSET))(this, a1, a2);
	}

	::System::Void _get_HandleEnteredCommand_b__42_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__GET_HANDLEENTEREDCOMMAND_B__42_0_OFFSET))(this);
	}

	::System::Void _get_HandleEnteredCommand_b__42_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__GET_HANDLEENTEREDCOMMAND_B__42_1_OFFSET))(this);
	}

	::System::Void _get_ExitCommand_b__45_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__GET_EXITCOMMAND_B__45_0_OFFSET))(this);
	}

	::System::Void _get_ExitCommand_b__45_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__GET_EXITCOMMAND_B__45_1_OFFSET))(this, a1);
	}

	::System::Void _get_BeginSettlePerformanceCommand_b__54_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__GET_BEGINSETTLEPERFORMANCECOMMAND_B__54_0_OFFSET))(this);
	}

	::System::Void _Init_b__58_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_0_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_1(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_1_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_2(::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_2_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_3(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_3_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_4(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_4_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_5(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_5_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_7(::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_7_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_8(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_8_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_9_OFFSET))(this, a1);
	}

	::Class_1_2860A093D0C9EE46* _Init_b__58_10(::R3::Unit a1)
	{
		return ((::Class_1_2860A093D0C9EE46*(*)(::PVOID, ::R3::Unit))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_10_OFFSET))(this, a1);
	}

	::System::Void _Init_b__58_12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_12_OFFSET))(this);
	}

	::System::Void _Init_b__58_13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9676F1C43235E384__INIT_B__58_13_OFFSET))(this);
	}
};
