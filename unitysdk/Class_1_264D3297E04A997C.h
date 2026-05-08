#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"

class Class_3_5609242270A80DFB;
class Class_3_BE6F3C2838BC0038_1;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_264D3297E04A997C_METHOD_1_66F8243EB89FB3AA_OFFSET UNITYSDK_OFFSET(0x12AE0820)
#define CLASS_1_264D3297E04A997C_METHOD_1_9EA6E8800E307273_OFFSET UNITYSDK_OFFSET(0x12ADFA90)
#define CLASS_1_264D3297E04A997C_METHOD_1_B043791E9B5ADEBB_OFFSET UNITYSDK_OFFSET(0x12ADF4B0)
#define CLASS_1_264D3297E04A997C_METHOD_1_C545FC4576A20374_OFFSET UNITYSDK_OFFSET(0x12AE08E0)
#define CLASS_1_264D3297E04A997C_METHOD_1_CC1579A30A45283B_OFFSET UNITYSDK_OFFSET(0x12ADFCB0)
#define CLASS_1_264D3297E04A997C_METHOD_1_D69B4B7E37808C06_OFFSET UNITYSDK_OFFSET(0x12ADF210)
#define CLASS_1_264D3297E04A997C_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x12AE0290)

inline static constexpr unsigned int Class_1_264D3297E04A997C_TypeDefinitionIndex = 43731;

class Class_1_264D3297E04A997C : public ::System::Object
{
public:
	static ::MoleMole::InLevelBuddyDataItem* Method_1_D69B4B7E37808C06(::MoleMole::Config::BuddyTeamType a1, ::Class_3_BE6F3C2838BC0038_1* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::MoleMole::InLevelBuddyDataItem*(*)(::MoleMole::Config::BuddyTeamType, ::Class_3_BE6F3C2838BC0038_1*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_D69B4B7E37808C06_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9EA6E8800E307273(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_9EA6E8800E307273_OFFSET))(a1);
	}

	static ::System::Void Method_1_CC1579A30A45283B(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_CC1579A30A45283B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B043791E9B5ADEBB(::MoleMole::InLevelBuddyDataItem* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_B043791E9B5ADEBB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_F4DD08A31BA3F883_OFFSET))();
	}

	static ::System::Void Method_1_66F8243EB89FB3AA(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_66F8243EB89FB3AA_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::BuddyOutlineCampType Method_1_C545FC4576A20374(::Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76& a1)
	{
		return ((::MoleMole::Config::BuddyOutlineCampType(*)(::Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76&))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_C545FC4576A20374_OFFSET))(a1);
	}
};
