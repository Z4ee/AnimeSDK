#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OrbitMoveRange; }
namespace System { class String; }

#define CLASS_2_42C46B3D8BC311E2_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x179A2660)
#define CLASS_2_42C46B3D8BC311E2__CTOR_OFFSET UNITYSDK_OFFSET(0x179A27B0)

inline static constexpr unsigned int Class_2_42C46B3D8BC311E2_TypeDefinitionIndex = 21070;

class Class_2_42C46B3D8BC311E2 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::OrbitMoveRange*>* Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42C46B3D8BC311E2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_42C46B3D8BC311E2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_42C46B3D8BC311E2*&))((::PBYTE)hIl2Cpp + CLASS_2_42C46B3D8BC311E2_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
