#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A6E49020D23C900;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_044CBC43F87E8BD0_OFFSET UNITYSDK_OFFSET(0x17A2A8F0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0x17A2AFA0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_D7E1859C9C2B681E_OFFSET UNITYSDK_OFFSET(0x17A2A810)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2AD80)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_Class_1_A3CFD8D34FBA5923_TypeDefinitionIndex = 58018;

class Class_1_02986BBFC3ACF3B3_Class_1_A3CFD8D34FBA5923 : public ::System::Object
{
public:
	::RPG::GameCore::AnchorInfo* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_7A6E49020D23C900* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_7A6E49020D23C900* a3, ::RPG::GameCore::GameWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_044CBC43F87E8BD0(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_044CBC43F87E8BD0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7E1859C9C2B681E(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_D7E1859C9C2B681E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A7CEF06F8896271(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_A3CFD8D34FBA5923_METHOD_1_6A7CEF06F8896271_OFFSET))(this, a1, a2);
	}
};
