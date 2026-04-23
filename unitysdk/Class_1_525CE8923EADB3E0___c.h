#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_525CE8923EADB3E0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B16080)
#define CLASS_1_525CE8923EADB3E0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B160B0)
#define CLASS_1_525CE8923EADB3E0___C___CREATESTORYPLAYER_B__4_1_OFFSET UNITYSDK_OFFSET(0x12B160C0)

inline static constexpr unsigned int Class_1_525CE8923EADB3E0___c_TypeDefinitionIndex = 56022;

class Class_1_525CE8923EADB3E0___c : public ::System::Object
{
public:
	static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_525CE8923EADB3E0___c_TypeDefinitionIndex)->GetStaticField(0x4B410);
	}
	static ::Class_1_525CE8923EADB3E0___c** StaticGet___9()
	{
		return (::Class_1_525CE8923EADB3E0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_525CE8923EADB3E0___c_TypeDefinitionIndex)->GetStaticField(0x4B418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreateStoryPlayer_b__4_1(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_525CE8923EADB3E0___C___CREATESTORYPLAYER_B__4_1_OFFSET))(this, entity);
	}
};
