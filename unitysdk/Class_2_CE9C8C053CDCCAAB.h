#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x13D10230)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13D0FE60)
#define CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x13D101C0)
#define CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D10780)
#define CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x13D10930)
#define CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13D10870)
#define CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x13D108D0)

inline static constexpr unsigned int Class_2_CE9C8C053CDCCAAB_TypeDefinitionIndex = 61013;

class Class_2_CE9C8C053CDCCAAB : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB__CTOR_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_CE9C8C053CDCCAAB___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, a1);
	}
};
