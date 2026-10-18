#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_0EAACD912373AD92;
class Class_1_1652F9EBC7E914D9;
class Class_1_1ABDF1855FCDB08F;
class Class_1_2D63678DF524F022;
class Class_1_3CCFEE4129165E0B;
class Class_1_9DC05C24123B42D8;
class Class_1_9F6ACA37AE08B5F1;
class Class_1_D05699509194BF9B;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_45CA56C59C8BBBC0_ADD_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518B90)
#define CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C5187D0)
#define CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C5188D0)
#define CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C5189D0)
#define CLASS_1_45CA56C59C8BBBC0_ADD_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518AD0)
#define CLASS_1_45CA56C59C8BBBC0_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x1C5187A0)
#define CLASS_1_45CA56C59C8BBBC0_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5187B0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_0283FBEDAE4C1E9F_OFFSET UNITYSDK_OFFSET(0x1C519C00)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_09AF3AC8D03ADBD4_OFFSET UNITYSDK_OFFSET(0x1C5134F0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_212C1030D36E3377_OFFSET UNITYSDK_OFFSET(0x1C513600)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_33FFADE2C3F06976_OFFSET UNITYSDK_OFFSET(0x1C51A680)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1C5197F0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x1C51A540)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_3E7DFF5412DFC195_OFFSET UNITYSDK_OFFSET(0x1C519160)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_41809B3832ECE799_OFFSET UNITYSDK_OFFSET(0x1C516770)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x1C519AD0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_4E0CCFC7E8FEF732_OFFSET UNITYSDK_OFFSET(0x1C516640)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_4FF024AE6350F606_OFFSET UNITYSDK_OFFSET(0x1C51AF80)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_518980BC46693300_1_OFFSET UNITYSDK_OFFSET(0x1C518700)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_518980BC46693300_OFFSET UNITYSDK_OFFSET(0x1C518660)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x1C5167F0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_5F4C687654011031_OFFSET UNITYSDK_OFFSET(0x1C519EC0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_81BC1D03A9ED5FEA_OFFSET UNITYSDK_OFFSET(0x1C519B30)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_A1DCBF6BA55F2558_OFFSET UNITYSDK_OFFSET(0x1C518C90)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_B7911423552E13B1_OFFSET UNITYSDK_OFFSET(0x1C516700)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_C353427A3EE3068C_OFFSET UNITYSDK_OFFSET(0x1C513DA0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1C513460)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_D61F1F3FC277F3B0_OFFSET UNITYSDK_OFFSET(0x1C51AD20)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_D6EEA763593503D8_OFFSET UNITYSDK_OFFSET(0x1C51A1E0)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_DEE3AF4568552BB0_OFFSET UNITYSDK_OFFSET(0x1C51AC00)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0x1C51A490)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1C513660)
#define CLASS_1_45CA56C59C8BBBC0_METHOD_1_FBAEA24E7060DA17_OFFSET UNITYSDK_OFFSET(0x1C516690)
#define CLASS_1_45CA56C59C8BBBC0_REMOVE_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518C10)
#define CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C518850)
#define CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C518950)
#define CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C518A50)
#define CLASS_1_45CA56C59C8BBBC0_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518B30)
#define CLASS_1_45CA56C59C8BBBC0_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5187C0)
#define CLASS_1_45CA56C59C8BBBC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5133E0)

inline static constexpr unsigned int Class_1_45CA56C59C8BBBC0_TypeDefinitionIndex = 41790;

class Class_1_45CA56C59C8BBBC0 : public ::System::Object
{
public:
	::Class_1_0EAACD912373AD92* _ChipPieces_k__BackingField; // 0x10
	::Class_1_3CCFEE4129165E0B* MIPPNCGOJNM; // 0x18
	::Class_1_9DC05C24123B42D8* LGOMCOOEHJG; // 0x20
	::Class_1_1652F9EBC7E914D9* _Progress_k__BackingField; // 0x28
	::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* OnPieceRotated; // 0x30
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* OnManyPiecesDestroyed; // 0x38
	::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* OnPieceInstantiated; // 0x40
	::Class_1_2D63678DF524F022* FILKNFKKGIC; // 0x48
	::System::Action_1<::System::Int32>* OnSinglePieceDestroyed; // 0x50
	::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* OnPieceMoved; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0__CTOR_OFFSET))(this);
	}

	::Class_1_3CCFEE4129165E0B* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_3CCFEE4129165E0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_3CCFEE4129165E0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CCFEE4129165E0B*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* Method_1_4E0CCFC7E8FEF732()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_4E0CCFC7E8FEF732_OFFSET))(this);
	}

	::System::Void Method_1_09AF3AC8D03ADBD4(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_09AF3AC8D03ADBD4_OFFSET))(this, a1);
	}

	::System::Void Method_1_518980BC46693300(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_518980BC46693300_OFFSET))(this, a1);
	}

	::System::Void Method_1_518980BC46693300_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_518980BC46693300_1_OFFSET))(this, a1);
	}

	::Class_1_0EAACD912373AD92* get_ChipPieces()
	{
		return ((::Class_1_0EAACD912373AD92*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_GET_CHIPPIECES_OFFSET))(this);
	}

	::Class_1_1652F9EBC7E914D9* get_Progress()
	{
		return ((::Class_1_1652F9EBC7E914D9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_GET_PROGRESS_OFFSET))(this);
	}

	::System::Void set_Progress(::Class_1_1652F9EBC7E914D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_SET_PROGRESS_OFFSET))(this, a1);
	}

	::System::Void add_OnPieceInstantiated(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEINSTANTIATED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPieceInstantiated(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEINSTANTIATED_OFFSET))(this, a1);
	}

	::System::Void add_OnPieceMoved(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEMOVED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPieceMoved(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEMOVED_OFFSET))(this, a1);
	}

	::System::Void add_OnPieceRotated(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_ADD_ONPIECEROTATED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPieceRotated(::System::Action_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_REMOVE_ONPIECEROTATED_OFFSET))(this, a1);
	}

	::System::Void add_OnSinglePieceDestroyed(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_ADD_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
	}

	::System::Void remove_OnSinglePieceDestroyed(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
	}

	::System::Void add_OnManyPiecesDestroyed(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_ADD_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
	}

	::System::Void remove_OnManyPiecesDestroyed(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_REMOVE_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
	}

	::System::Void Method_1_212C1030D36E3377(::Class_1_9F6ACA37AE08B5F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F6ACA37AE08B5F1*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_212C1030D36E3377_OFFSET))(this, a1);
	}

	::System::Void Method_1_C353427A3EE3068C(::Class_1_1652F9EBC7E914D9* a1, ::Class_1_2D63678DF524F022* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*, ::Class_1_2D63678DF524F022*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_C353427A3EE3068C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A1DCBF6BA55F2558(::Class_1_D05699509194BF9B* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_A1DCBF6BA55F2558_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FBAEA24E7060DA17(::Class_1_D05699509194BF9B* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_FBAEA24E7060DA17_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_1ABDF1855FCDB08F* Method_1_3E7DFF5412DFC195(::Class_1_D05699509194BF9B* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::Class_1_1ABDF1855FCDB08F*(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_3E7DFF5412DFC195_OFFSET))(this, a1, a2);
	}

	::Class_1_1ABDF1855FCDB08F* Method_1_B7911423552E13B1(::Class_1_D05699509194BF9B* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
	{
		return ((::Class_1_1ABDF1855FCDB08F*(*)(::PVOID, ::Class_1_D05699509194BF9B*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_B7911423552E13B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_4CFA30FA85BD5218(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_81BC1D03A9ED5FEA(::Class_1_1ABDF1855FCDB08F* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_81BC1D03A9ED5FEA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0283FBEDAE4C1E9F(::Class_1_1ABDF1855FCDB08F* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::UnityEngine::Vector2Int, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_0283FBEDAE4C1E9F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5F4C687654011031(::Class_1_1ABDF1855FCDB08F* a1, ::Struct_2_BDFB1B98046CDD46 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_5F4C687654011031_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6EEA763593503D8(::Class_1_1ABDF1855FCDB08F* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::UnityEngine::Vector2Int, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_D6EEA763593503D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_33FFADE2C3F06976(::Class_1_1ABDF1855FCDB08F* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*& a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*&, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*&))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_33FFADE2C3F06976_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_41809B3832ECE799(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_41809B3832ECE799_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4FF024AE6350F606(::Class_1_1ABDF1855FCDB08F* a1, ::Class_1_1ABDF1855FCDB08F* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_4FF024AE6350F606_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_DEE3AF4568552BB0(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_DEE3AF4568552BB0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_1_D61F1F3FC277F3B0(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_45CA56C59C8BBBC0_METHOD_1_D61F1F3FC277F3B0_OFFSET))(this, a1);
	}
};
