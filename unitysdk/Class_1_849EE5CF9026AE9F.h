#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_849EE5CF9026AE9F_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB905CA0)
#define CLASS_1_849EE5CF9026AE9F_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB905CB0)
#define CLASS_1_849EE5CF9026AE9F__CTOR_OFFSET UNITYSDK_OFFSET(0xB905CC0)

inline static constexpr unsigned int Class_1_849EE5CF9026AE9F_TypeDefinitionIndex = 68927;

class Class_1_849EE5CF9026AE9F : public ::System::Object
{
public:
	::RPG::GameCore::DanmuType _Type_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_849EE5CF9026AE9F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::DanmuType get_Type()
	{
		return ((::RPG::GameCore::DanmuType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_849EE5CF9026AE9F_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::DanmuType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + CLASS_1_849EE5CF9026AE9F_SET_TYPE_OFFSET))(this, a1);
	}
};
