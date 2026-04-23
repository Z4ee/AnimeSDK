#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CADEC115725602AC_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x19115E80)
#define CLASS_3_CADEC115725602AC_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x19115F00)
#define CLASS_3_CADEC115725602AC__CTOR_OFFSET UNITYSDK_OFFSET(0x19115ED0)

inline static constexpr unsigned int Class_3_CADEC115725602AC_TypeDefinitionIndex = 21781;

class Class_3_CADEC115725602AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::System::String* Field_3_6; // 0x30
	::System::String* Field_3_1; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::System::Boolean Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CADEC115725602AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CADEC115725602AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CADEC115725602AC*&))((::PBYTE)hIl2Cpp + CLASS_3_CADEC115725602AC_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CADEC115725602AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CADEC115725602AC*))((::PBYTE)hIl2Cpp + CLASS_3_CADEC115725602AC_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};
