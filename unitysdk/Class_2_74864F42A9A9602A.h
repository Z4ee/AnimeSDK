#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"

class Class_1_EBD9A77671154634;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_74864F42A9A9602A_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1232FDB0)
#define CLASS_2_74864F42A9A9602A_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1232F9B0)
#define CLASS_2_74864F42A9A9602A_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1232FD40)
#define CLASS_2_74864F42A9A9602A__CTOR_OFFSET UNITYSDK_OFFSET(0x12330310)
#define CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x123304E0)
#define CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x12330400)
#define CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x12330470)

inline static constexpr unsigned int Class_2_74864F42A9A9602A_TypeDefinitionIndex = 60078;

class Class_2_74864F42A9A9602A : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* Field_2_2; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A__CTOR_OFFSET))(this);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateModifier(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_74864F42A9A9602A___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
