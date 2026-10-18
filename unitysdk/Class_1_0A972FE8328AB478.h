#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D;
class Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC;
class Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4;
class Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1;
class Class_1_45CA56C59C8BBBC0;
class Class_1_5E2D533DC7C7E714;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_0A972FE8328AB478_ADD_HANDLEFORCEHINTBUFFED_OFFSET UNITYSDK_OFFSET(0xB4B0620)
#define CLASS_1_0A972FE8328AB478_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0xB4B0140)
#define CLASS_1_0A972FE8328AB478_ADD_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0xB4B0520)
#define CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFE70)
#define CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFCA0)
#define CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTINGCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF9B0)
#define CLASS_1_0A972FE8328AB478_ADD_ONBUFFPREVIEWCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B0040)
#define CLASS_1_0A972FE8328AB478_ADD_ONCOVEREDBANNEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF7D0)
#define CLASS_1_0A972FE8328AB478_ADD_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF600)
#define CLASS_1_0A972FE8328AB478_ADD_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF420)
#define CLASS_1_0A972FE8328AB478_ADD_ONTUTORIALTARGETCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B0420)
#define CLASS_1_0A972FE8328AB478_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4B0A40)
#define CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_1_OFFSET UNITYSDK_OFFSET(0xB4AF030)
#define CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_2_OFFSET UNITYSDK_OFFSET(0xB4AF210)
#define CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_3_OFFSET UNITYSDK_OFFSET(0xB4B0240)
#define CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_OFFSET UNITYSDK_OFFSET(0xB4AED30)
#define CLASS_1_0A972FE8328AB478_METHOD_1_32A6610C0704A288_OFFSET UNITYSDK_OFFSET(0xB4AEC10)
#define CLASS_1_0A972FE8328AB478_METHOD_1_429EEB74484D09C7_1_OFFSET UNITYSDK_OFFSET(0xB4AF080)
#define CLASS_1_0A972FE8328AB478_METHOD_1_429EEB74484D09C7_OFFSET UNITYSDK_OFFSET(0xB4AED80)
#define CLASS_1_0A972FE8328AB478_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xB4B0CD0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_572E53F76E315839_1_OFFSET UNITYSDK_OFFSET(0xB4AEF10)
#define CLASS_1_0A972FE8328AB478_METHOD_1_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xB4B0960)
#define CLASS_1_0A972FE8328AB478_METHOD_1_5FDA89981A43E6BE_OFFSET UNITYSDK_OFFSET(0xB4AFAB0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_1_OFFSET UNITYSDK_OFFSET(0xB4AF700)
#define CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_2_OFFSET UNITYSDK_OFFSET(0xB4AFF70)
#define CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_OFFSET UNITYSDK_OFFSET(0xB4AF520)
#define CLASS_1_0A972FE8328AB478_METHOD_1_717B738548DF262E_1_OFFSET UNITYSDK_OFFSET(0xB4B0D60)
#define CLASS_1_0A972FE8328AB478_METHOD_1_717B738548DF262E_OFFSET UNITYSDK_OFFSET(0xB4B0B90)
#define CLASS_1_0A972FE8328AB478_METHOD_1_7BAAF08613961C16_OFFSET UNITYSDK_OFFSET(0xB4AFAF0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_7FD2462067A97B37_1_OFFSET UNITYSDK_OFFSET(0xB4AFDA0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_7FD2462067A97B37_OFFSET UNITYSDK_OFFSET(0xB4AF8D0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_1_OFFSET UNITYSDK_OFFSET(0xB4AF740)
#define CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_2_OFFSET UNITYSDK_OFFSET(0xB4AFFB0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_OFFSET UNITYSDK_OFFSET(0xB4AF560)
#define CLASS_1_0A972FE8328AB478_METHOD_1_B35034C3D0DD593C_1_OFFSET UNITYSDK_OFFSET(0xB4B0280)
#define CLASS_1_0A972FE8328AB478_METHOD_1_B35034C3D0DD593C_OFFSET UNITYSDK_OFFSET(0xB4AF260)
#define CLASS_1_0A972FE8328AB478_METHOD_1_CC0AD4C824746910_1_OFFSET UNITYSDK_OFFSET(0xB4AFDE0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_CC0AD4C824746910_OFFSET UNITYSDK_OFFSET(0xB4AF910)
#define CLASS_1_0A972FE8328AB478_METHOD_1_D728939B7D713806_OFFSET UNITYSDK_OFFSET(0xB4AECA0)
#define CLASS_1_0A972FE8328AB478_METHOD_1_E975629435F9C6D4_OFFSET UNITYSDK_OFFSET(0xB4B0C00)
#define CLASS_1_0A972FE8328AB478_REMOVE_HANDLEFORCEHINTBUFFED_OFFSET UNITYSDK_OFFSET(0xB4B06A0)
#define CLASS_1_0A972FE8328AB478_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET UNITYSDK_OFFSET(0xB4B01C0)
#define CLASS_1_0A972FE8328AB478_REMOVE_HANDLEHINTPLACED_OFFSET UNITYSDK_OFFSET(0xB4B05A0)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFEF0)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTEDLINESCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFD20)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTINGCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AFA30)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFPREVIEWCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B00C0)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONCOVEREDBANNEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF850)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF680)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4AF4A0)
#define CLASS_1_0A972FE8328AB478_REMOVE_ONTUTORIALTARGETCELLSCHANGED_OFFSET UNITYSDK_OFFSET(0xB4B04A0)
#define CLASS_1_0A972FE8328AB478__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B0720)
#define CLASS_1_0A972FE8328AB478___REFRESHPREVIEWOVERLAPPEDCELLS_G__ISSTILLOVERLAPPEDEVENWHENCONSIDERINGDRAGGED_89_0_OFFSET UNITYSDK_OFFSET(0xB4B0DD0)

inline static constexpr unsigned int Class_1_0A972FE8328AB478_TypeDefinitionIndex = 79454;

class Class_1_0A972FE8328AB478 : public ::System::Object
{
public:
	::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* OnBuffPreviewCellsChanged; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* CENPHKJBLPK; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* KECBLJENOBE; // 0x20
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* MGLENJEDGCJ; // 0x28
	::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* HandleHintPlaced; // 0x30
	::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* OnCoveredBannedCellsChanged; // 0x38
	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* MEAAPCKMMNJ; // 0x40
	::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* OnBuffAffectingCellsChanged; // 0x48
	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* DKMENDFGGPD; // 0x50
	::Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC* OnBuffAffectedLinesChanged; // 0x58
	::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* OnBuffAffectedCellsChanged; // 0x60
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* BIIOHGHDAGF; // 0x68
	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* NFKOGIKHLGJ; // 0x70
	::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* OnTutorialTargetCellsChanged; // 0x78
	::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* OnPreviewOverlappedCellsChanged; // 0x80
	::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleForceHintBuffed; // 0x88
	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* MMHBILCCJOG; // 0x90
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x98
	::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* OnErroneousOverlappedCellsChanged; // 0xA0
	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* IADIPFGACDL; // 0xA8
	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* CAEKHIPPCMB; // 0xB0
	::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleHintAsymmetricCells; // 0xB8

	::System::Void _ctor(::Class_1_45CA56C59C8BBBC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CA56C59C8BBBC0*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_32A6610C0704A288()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_32A6610C0704A288_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_D728939B7D713806()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_D728939B7D713806_OFFSET))(this);
	}

	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* Method_1_0F8644D620700128()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_OFFSET))(this);
	}

	::System::Void Method_1_429EEB74484D09C7(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_429EEB74484D09C7_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* Method_1_0F8644D620700128_1()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_1_OFFSET))(this);
	}

	::System::Void Method_1_429EEB74484D09C7_1(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_429EEB74484D09C7_1_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* Method_1_0F8644D620700128_2()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_2_OFFSET))(this);
	}

	::System::Void Method_1_B35034C3D0DD593C(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_B35034C3D0DD593C_OFFSET))(this, a1);
	}

	::System::Void add_OnPreviewOverlappedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnPreviewOverlappedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONPREVIEWOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_663662E92205BC23()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_OFFSET))(this);
	}

	::System::Void Method_1_8CF2C04F5B1584EB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_OFFSET))(this, a1);
	}

	::System::Void add_OnErroneousOverlappedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnErroneousOverlappedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONERRONEOUSOVERLAPPEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_663662E92205BC23_1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_1_OFFSET))(this);
	}

	::System::Void Method_1_8CF2C04F5B1584EB_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_1_OFFSET))(this, a1);
	}

	::System::Void add_OnCoveredBannedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONCOVEREDBANNEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnCoveredBannedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONCOVEREDBANNEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Method_1_7FD2462067A97B37()
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_7FD2462067A97B37_OFFSET))(this);
	}

	::System::Void Method_1_CC0AD4C824746910(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_CC0AD4C824746910_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffAffectingCellsChanged(::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTINGCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffAffectingCellsChanged(::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTINGCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* Method_1_5FDA89981A43E6BE()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_5FDA89981A43E6BE_OFFSET))(this);
	}

	::System::Void Method_1_7BAAF08613961C16(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_7BAAF08613961C16_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffAffectedLinesChanged(::Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffAffectedLinesChanged(::Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_3269944D4783ADBC*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTEDLINESCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* Method_1_7FD2462067A97B37_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_7FD2462067A97B37_1_OFFSET))(this);
	}

	::System::Void Method_1_CC0AD4C824746910_1(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_CC0AD4C824746910_1_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffAffectedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONBUFFAFFECTEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffAffectedCellsChanged(::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_79E6296B04AB77B1*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFAFFECTEDCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_663662E92205BC23_2()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_663662E92205BC23_2_OFFSET))(this);
	}

	::System::Void Method_1_8CF2C04F5B1584EB_2(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_8CF2C04F5B1584EB_2_OFFSET))(this, a1);
	}

	::System::Void add_OnBuffPreviewCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONBUFFPREVIEWCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnBuffPreviewCellsChanged(::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_0C63AF8EBB14DF5D*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONBUFFPREVIEWCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintAsymmetricCells(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_HANDLEHINTASYMMETRICCELLS_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* Method_1_0F8644D620700128_3()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_0F8644D620700128_3_OFFSET))(this);
	}

	::System::Void Method_1_B35034C3D0DD593C_1(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_B35034C3D0DD593C_1_OFFSET))(this, a1);
	}

	::System::Void add_OnTutorialTargetCellsChanged(::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_ONTUTORIALTARGETCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnTutorialTargetCellsChanged(::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_ONTUTORIALTARGETCELLSCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_HandleHintPlaced(::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_HANDLEHINTPLACED_OFFSET))(this, a1);
	}

	::System::Void remove_HandleHintPlaced(::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_HANDLEHINTPLACED_OFFSET))(this, a1);
	}

	::System::Void add_HandleForceHintBuffed(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_ADD_HANDLEFORCEHINTBUFFED_OFFSET))(this, a1);
	}

	::System::Void remove_HandleForceHintBuffed(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_REMOVE_HANDLEFORCEHINTBUFFED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_717B738548DF262E(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_717B738548DF262E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E975629435F9C6D4(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_E975629435F9C6D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_717B738548DF262E_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_717B738548DF262E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_1_572E53F76E315839_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_METHOD_1_572E53F76E315839_1_OFFSET))(this);
	}

	::System::Boolean __RefreshPreviewOverlappedCells_g__IsStillOverlappedEvenWhenConsideringDragged_89_0(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478___REFRESHPREVIEWOVERLAPPEDCELLS_G__ISSTILLOVERLAPPEDEVENWHENCONSIDERINGDRAGGED_89_0_OFFSET))(this, a1);
	}
};
