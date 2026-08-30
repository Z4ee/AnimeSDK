#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Retarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_4_092EA836AE6F6838_METHOD_4_C0421DF35F714DA6_OFFSET UNITYSDK_OFFSET(0x1CF744F0)
#define CLASS_4_092EA836AE6F6838_METHOD_4_C616402C1FF54AE8_OFFSET UNITYSDK_OFFSET(0x1CF74680)
#define CLASS_4_092EA836AE6F6838__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF745D0)

inline static constexpr unsigned int Class_4_092EA836AE6F6838_TypeDefinitionIndex = 22652;

class Class_4_092EA836AE6F6838 : public ::RPG::GameCore::Retarget
{
public:
	::RPG::GameCore::DynamicFloat* JKDFIMCIKFJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_092EA836AE6F6838__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_C0421DF35F714DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_092EA836AE6F6838*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_092EA836AE6F6838*&))((::PBYTE)hIl2Cpp + CLASS_4_092EA836AE6F6838_METHOD_4_C0421DF35F714DA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C616402C1FF54AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_092EA836AE6F6838* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_092EA836AE6F6838*))((::PBYTE)hIl2Cpp + CLASS_4_092EA836AE6F6838_METHOD_4_C616402C1FF54AE8_OFFSET))(a1, a2);
	}
};
