#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_1A05043E9AD1C5D3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x186B16C0)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x186B1270)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x186B1650)
#define CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x186B1ED0)

inline static constexpr unsigned int Class_2_CE9C8C053CDCCAAB_TypeDefinitionIndex = 62331;

class Class_2_CE9C8C053CDCCAAB : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateModifier(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET))(this, a1);
	}
};
