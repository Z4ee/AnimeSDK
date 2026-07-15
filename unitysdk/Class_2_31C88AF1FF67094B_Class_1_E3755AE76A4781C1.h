#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_31C88AF1FF67094B_CLASS_1_E3755AE76A4781C1__CTOR_OFFSET UNITYSDK_OFFSET(0x18229090)

inline static constexpr unsigned int Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1_TypeDefinitionIndex = 68545;

class Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1 : public ::System::Object
{
public:
	::RPG::GameCore::EntityRelationType Field_1_0; // 0x10
	::RPG::GameCore::EntityRelationMemberType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_CLASS_1_E3755AE76A4781C1__CTOR_OFFSET))(this);
	}
};
