#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_FFA52D4EA9820334_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1CFD62F0)
#define CLASS_2_FFA52D4EA9820334__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFD62D0)
#define CLASS_2_FFA52D4EA9820334__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD62C0)

inline static constexpr unsigned int Class_2_FFA52D4EA9820334_TypeDefinitionIndex = 24567;

class Class_2_FFA52D4EA9820334 : public ::System::Attribute
{
public:
	::System::Nullable_1<::RPG::GameCore::JsonEnumCategory> _Category_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA52D4EA9820334__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::JsonEnumCategory a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory))((::PBYTE)hIl2Cpp + CLASS_2_FFA52D4EA9820334__CTOR_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::GameCore::JsonEnumCategory> get_Category()
	{
		return ((::System::Nullable_1<::RPG::GameCore::JsonEnumCategory>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA52D4EA9820334_GET_CATEGORY_OFFSET))(this);
	}
};
