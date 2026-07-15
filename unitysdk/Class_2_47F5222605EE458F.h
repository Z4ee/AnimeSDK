#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6F2598F82A312737.h"

class Class_2_0F352EB443AE75AF;
class Class_2_718A51E22CB71EC4;
class Class_2_FE27D0FC265DDD96;
namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_47F5222605EE458F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x160A7710)
#define CLASS_2_47F5222605EE458F_METHOD_2_BDC7274BCEB8EFE9_OFFSET UNITYSDK_OFFSET(0x160A7880)
#define CLASS_2_47F5222605EE458F_METHOD_2_C6A5DBFC106719A3_OFFSET UNITYSDK_OFFSET(0x160A77E0)
#define CLASS_2_47F5222605EE458F_METHOD_2_FFD49DF2888465D3_OFFSET UNITYSDK_OFFSET(0x160A7650)
#define CLASS_2_47F5222605EE458F__CTOR_OFFSET UNITYSDK_OFFSET(0x160A7AA0)

inline static constexpr unsigned int Class_2_47F5222605EE458F_TypeDefinitionIndex = 51840;

class Class_2_47F5222605EE458F : public ::Class_1_6F2598F82A312737
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F5222605EE458F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FFD49DF2888465D3(::Class_2_718A51E22CB71EC4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_2_47F5222605EE458F_METHOD_2_FFD49DF2888465D3_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_2_47F5222605EE458F_EXECUTE_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_BDC7274BCEB8EFE9(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_47F5222605EE458F_METHOD_2_BDC7274BCEB8EFE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_C6A5DBFC106719A3(::Class_2_0F352EB443AE75AF* a1)
	{
		return ((::System::Void(*)(::Class_2_0F352EB443AE75AF*))((::PBYTE)hIl2Cpp + CLASS_2_47F5222605EE458F_METHOD_2_C6A5DBFC106719A3_OFFSET))(a1);
	}
};
