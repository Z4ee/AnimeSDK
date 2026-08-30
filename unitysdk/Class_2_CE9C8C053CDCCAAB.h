#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x15B94F80)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x15B94B30)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x15B94F10)
#define CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B95790)

inline static constexpr unsigned int Class_2_CE9C8C053CDCCAAB_TypeDefinitionIndex = 65316;

class Class_2_CE9C8C053CDCCAAB : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* NNGMFCEECBB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* GOELLLLHDGP; // 0x18
	::System::Boolean PCJNAOMLPLJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET))(this, a1);
	}
};
