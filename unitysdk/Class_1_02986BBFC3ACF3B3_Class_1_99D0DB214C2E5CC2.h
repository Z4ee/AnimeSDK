#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A6E49020D23C900;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0x114B3DA0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_9105FE363E855D22_OFFSET UNITYSDK_OFFSET(0x114B3740)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_C6942FFEE1B73A78_OFFSET UNITYSDK_OFFSET(0x114B37E0)
#define CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2__CTOR_OFFSET UNITYSDK_OFFSET(0x114B3BE0)

inline static constexpr unsigned int Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2_TypeDefinitionIndex = 49212;

class Class_1_02986BBFC3ACF3B3_Class_1_99D0DB214C2E5CC2 : public ::System::Object
{
public:
	::Class_1_7A6E49020D23C900* Field_1_3; // 0x10
	::System::String* Field_1_0; // 0x18
	::RPG::GameCore::AnchorInfo* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Class_1_7A6E49020D23C900* a3, ::RPG::GameCore::GameWorld* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C6942FFEE1B73A78(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_C6942FFEE1B73A78_OFFSET))(this, a1);
	}

	::System::Void Method_1_9105FE363E855D22(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_9105FE363E855D22_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A7CEF06F8896271(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02986BBFC3ACF3B3_CLASS_1_99D0DB214C2E5CC2_METHOD_1_6A7CEF06F8896271_OFFSET))(this, a1, a2);
	}
};
