#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_82AD06FA18CD21C2;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_BF948EE4ABDDF43D_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x183F0B60)
#define CLASS_3_BF948EE4ABDDF43D_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x183F0D30)
#define CLASS_3_BF948EE4ABDDF43D__CTOR_OFFSET UNITYSDK_OFFSET(0x183F0BA0)

inline static constexpr unsigned int Class_3_BF948EE4ABDDF43D_TypeDefinitionIndex = 23079;

class Class_3_BF948EE4ABDDF43D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x18
	::System::String* Field_3_10; // 0x20
	::Il2CppArray<::Class_2_82AD06FA18CD21C2*>* Field_3_13; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x30
	::RPG::GameCore::DynamicFloat* Field_3_6; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x40
	::System::String* Field_3_2; // 0x48
	::RPG::GameCore::DynamicFloat* Field_3_7; // 0x50
	::RPG::GameCore::RtCharacterState Field_3_1; // 0x58
	::System::Boolean Field_3_9; // 0x5C
	::System::Boolean Field_3_8; // 0x5D
	::System::Boolean Field_3_11; // 0x5E
	::System::Boolean Field_3_4; // 0x5F
	::RPG::GameCore::FixVec3 Field_3_12; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF948EE4ABDDF43D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF948EE4ABDDF43D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF948EE4ABDDF43D*&))((::PBYTE)hIl2Cpp + CLASS_3_BF948EE4ABDDF43D_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF948EE4ABDDF43D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF948EE4ABDDF43D*))((::PBYTE)hIl2Cpp + CLASS_3_BF948EE4ABDDF43D_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
