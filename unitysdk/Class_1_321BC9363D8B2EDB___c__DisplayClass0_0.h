#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_321BC9363D8B2EDB___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C521970)
#define CLASS_1_321BC9363D8B2EDB___C__DISPLAYCLASS0_0__DETERMINE_B__0_OFFSET UNITYSDK_OFFSET(0x1C521B40)

inline static constexpr unsigned int Class_1_321BC9363D8B2EDB___c__DisplayClass0_0_TypeDefinitionIndex = 41892;

class Class_1_321BC9363D8B2EDB___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>> maxPair; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_321BC9363D8B2EDB___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Determine_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_321BC9363D8B2EDB___C__DISPLAYCLASS0_0__DETERMINE_B__0_OFFSET))(this, a1);
	}
};
