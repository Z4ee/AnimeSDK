#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_93E860771372348B_Struct_2_3F27CF65D43CEA76.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"

class Class_3_5609242270A80DFB;
class Class_3_BE6F3C2838BC0038_1;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_93E860771372348B_METHOD_1_66F8243EB89FB3AA_OFFSET UNITYSDK_OFFSET(0x16422850)
#define CLASS_1_93E860771372348B_METHOD_1_9EA6E8800E307273_OFFSET UNITYSDK_OFFSET(0x16424020)
#define CLASS_1_93E860771372348B_METHOD_1_B043791E9B5ADEBB_OFFSET UNITYSDK_OFFSET(0x164231F0)
#define CLASS_1_93E860771372348B_METHOD_1_C545FC4576A20374_OFFSET UNITYSDK_OFFSET(0x16422910)
#define CLASS_1_93E860771372348B_METHOD_1_CC1579A30A45283B_OFFSET UNITYSDK_OFFSET(0x16422C00)
#define CLASS_1_93E860771372348B_METHOD_1_D04DA6C6EB2E0A80_OFFSET UNITYSDK_OFFSET(0x16423800)
#define CLASS_1_93E860771372348B_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x16423A90)

inline static constexpr unsigned int Class_1_93E860771372348B_TypeDefinitionIndex = 53904;

class Class_1_93E860771372348B : public ::System::Object
{
public:
	static ::System::Void Method_1_66F8243EB89FB3AA(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_66F8243EB89FB3AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B043791E9B5ADEBB(::MoleMole::InLevelBuddyDataItem* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_B043791E9B5ADEBB_OFFSET))(a1, a2);
	}

	static ::MoleMole::InLevelBuddyDataItem* Method_1_D04DA6C6EB2E0A80(::MoleMole::Config::BuddyTeamType a1, ::Class_3_BE6F3C2838BC0038_1* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::MoleMole::InLevelBuddyDataItem*(*)(::MoleMole::Config::BuddyTeamType, ::Class_3_BE6F3C2838BC0038_1*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_D04DA6C6EB2E0A80_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::BuddyOutlineCampType Method_1_C545FC4576A20374(::Class_1_93E860771372348B_Struct_2_3F27CF65D43CEA76& a1)
	{
		return ((::MoleMole::Config::BuddyOutlineCampType(*)(::Class_1_93E860771372348B_Struct_2_3F27CF65D43CEA76&))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_C545FC4576A20374_OFFSET))(a1);
	}

	static ::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_F4DD08A31BA3F883_OFFSET))();
	}

	static ::System::Void Method_1_CC1579A30A45283B(::Class_3_C93CC3D2C2AC4067* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_CC1579A30A45283B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9EA6E8800E307273(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_93E860771372348B_METHOD_1_9EA6E8800E307273_OFFSET))(a1);
	}
};
