#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x18347760)
#define CLASS_3_CB2DBFA0FD4A48A4_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x183475A0)
#define CLASS_3_CB2DBFA0FD4A48A4__CTOR_OFFSET UNITYSDK_OFFSET(0x183475E0)

inline static constexpr unsigned int Class_3_CB2DBFA0FD4A48A4_TypeDefinitionIndex = 23075;

class Class_3_CB2DBFA0FD4A48A4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_9; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_8; // 0x38
	::System::String* Field_3_2; // 0x40
	::System::Boolean Field_3_6; // 0x48
	::System::Boolean Field_3_5; // 0x49
	::System::Boolean Field_3_3; // 0x4A
	::RPG::GameCore::RtCharacterState Field_3_1; // 0x4C

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
