#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"

class Class_1_190BB2A3D431BCD2_1;
class Class_1_8844A4E6AE686D5C_6;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightForgeAddCoinEvent; }
namespace RPG::Client { class GridFightForgeAddRoleEvent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_599C9F65F3F85994_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16269A20)
#define CLASS_2_599C9F65F3F85994_METHOD_2_2658530140AE851C_OFFSET UNITYSDK_OFFSET(0x1626D0B0)
#define CLASS_2_599C9F65F3F85994_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x1626A340)
#define CLASS_2_599C9F65F3F85994_METHOD_2_611363E6316608E0_OFFSET UNITYSDK_OFFSET(0x1626D270)
#define CLASS_2_599C9F65F3F85994_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1626B780)
#define CLASS_2_599C9F65F3F85994_METHOD_2_853181FBF70E388E_OFFSET UNITYSDK_OFFSET(0x1626A3D0)
#define CLASS_2_599C9F65F3F85994_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1626D470)
#define CLASS_2_599C9F65F3F85994_METHOD_2_E9C16E203CD4DBF0_OFFSET UNITYSDK_OFFSET(0x16269AE0)
#define CLASS_2_599C9F65F3F85994_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1626D410)
#define CLASS_2_599C9F65F3F85994_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1626A2B0)
#define CLASS_2_599C9F65F3F85994_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1626B4B0)
#define CLASS_2_599C9F65F3F85994_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1626B7D0)
#define CLASS_2_599C9F65F3F85994_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16269330)
#define CLASS_2_599C9F65F3F85994_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1626B630)
#define CLASS_2_599C9F65F3F85994_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x16269A90)
#define CLASS_2_599C9F65F3F85994_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x162692F0)
#define CLASS_2_599C9F65F3F85994__CTOR_OFFSET UNITYSDK_OFFSET(0x1626D5C0)

inline static constexpr unsigned int Class_2_599C9F65F3F85994_TypeDefinitionIndex = 65012;

class Class_2_599C9F65F3F85994 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddRoleEvent*>* EGNHJDDFGPK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* AEKKIJNOPJC; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* JJPGIMPFLFP; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipReturnPackEvent*>* CMMDFMHEDII; // 0x28
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipDressEvent*>* BHKBMJJMKAE; // 0x30
	::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddCoinEvent*>* GLPNHGLGGEN; // 0x38
	::System::Boolean EDIBEIOPBHN; // 0x40
	::System::Boolean BPJENGFCKOD; // 0x41
	::System::Boolean PHFGHFNEJIB; // 0x42
	::System::Boolean CFLHIOCDLEL; // 0x43
	::Enum_3_75A1C8C41006A504 DACNIDLDFJG; // 0x44
	::System::UInt32 IGCLFNPAGJA; // 0x48
	::System::UInt32 NMJKJLDANOC; // 0x4C
	::RPG::GameCore::GridFightForgeFuncType IEOJLKBEHBN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994__CTOR_OFFSET))(this);
	}

	::System::Void UpdateStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATESTART_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATEITEM_OFFSET))(this, a1);
	}

	::System::Void UpdateAddItem(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATEADDITEM_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_853181FBF70E388E(::Class_1_190BB2A3D431BCD2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_1*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_853181FBF70E388E_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_190BB2A3D431BCD2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_1*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2658530140AE851C(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_2658530140AE851C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611363E6316608E0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_611363E6316608E0_OFFSET))(this, a1);
	}

	::System::Void PreUpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_PREUPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_E9C16E203CD4DBF0(::Class_1_8844A4E6AE686D5C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_6*))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_E9C16E203CD4DBF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_599C9F65F3F85994_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
