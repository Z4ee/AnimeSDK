#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x19242430)
#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x19242270)
#define CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET UNITYSDK_OFFSET(0x192422B0)

inline static constexpr unsigned int Class_3_CB2DBFA0FD4A48A4_TypeDefinitionIndex = 22761;

class Class_3_CB2DBFA0FD4A48A4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::System::String* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::RtCharacterState Field_3_6; // 0x48
	::System::Boolean Field_3_7; // 0x4C
	::System::Boolean Field_3_8; // 0x4D
	::System::Boolean Field_3_9; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB2DBFA0FD4A48A4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB2DBFA0FD4A48A4*&))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB2DBFA0FD4A48A4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB2DBFA0FD4A48A4*))((::PBYTE)hIl2Cpp + CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
