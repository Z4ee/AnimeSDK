#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Reflection { class FieldInfo; }

#define CLASS_1_F0CA766499A3EC17_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xBDAF4A0)
#define CLASS_1_F0CA766499A3EC17_METHOD_1_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0xBDAF050)
#define CLASS_1_F0CA766499A3EC17__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDAF780)

inline static constexpr unsigned int Class_1_F0CA766499A3EC17_TypeDefinitionIndex = 50026;

class Class_1_F0CA766499A3EC17 : public ::System::Object
{
public:
	static ::System::Reflection::FieldInfo** StaticGet_JGPJDJLDDGG()
	{
		return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0CA766499A3EC17_TypeDefinitionIndex)->GetStaticField(0x6FC10);
	}
	static ::RPG::GameCore::GameWorld** StaticGet_JEOADHBDKMO()
	{
		return (::RPG::GameCore::GameWorld**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0CA766499A3EC17_TypeDefinitionIndex)->GetStaticField(0x6FC18);
	}
	static ::System::Reflection::FieldInfo** StaticGet_NNGFOPLABOF()
	{
		return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0CA766499A3EC17_TypeDefinitionIndex)->GetStaticField(0x6FC20);
	}
	static ::RPG::Client::AdventurePhase** StaticGet_NOHNKAIALPJ()
	{
		return (::RPG::Client::AdventurePhase**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0CA766499A3EC17_TypeDefinitionIndex)->GetStaticField(0x6FC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0CA766499A3EC17__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9A433A8074D7736F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0CA766499A3EC17_METHOD_1_9A433A8074D7736F_OFFSET))();
	}

	static ::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0CA766499A3EC17_METHOD_1_5A124CAF1E48B74F_OFFSET))();
	}
};
