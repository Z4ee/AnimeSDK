#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_55339DE98A27446D_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x1B575140)
#define CLASS_3_55339DE98A27446D_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x1B575180)
#define CLASS_3_55339DE98A27446D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B575170)

inline static constexpr unsigned int Class_3_55339DE98A27446D_TypeDefinitionIndex = 20710;

class Class_3_55339DE98A27446D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55339DE98A27446D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55339DE98A27446D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55339DE98A27446D*&))((::PBYTE)hIl2Cpp + CLASS_3_55339DE98A27446D_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55339DE98A27446D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55339DE98A27446D*))((::PBYTE)hIl2Cpp + CLASS_3_55339DE98A27446D_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};
