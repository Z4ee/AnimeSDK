#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6EFC2A5F317516B_METHOD_1_80D66DC67DDE041F_OFFSET UNITYSDK_OFFSET(0xC361C20)
#define CLASS_1_A6EFC2A5F317516B_METHOD_1_E2EB6FF297DA95BC_OFFSET UNITYSDK_OFFSET(0xC361BC0)
#define CLASS_1_A6EFC2A5F317516B__CTOR_OFFSET UNITYSDK_OFFSET(0xC361C10)

inline static constexpr unsigned int Class_1_A6EFC2A5F317516B_TypeDefinitionIndex = 62640;

class Class_1_A6EFC2A5F317516B : public ::System::Object
{
public:
	::RPG::Client::RoguePickAvatarInfo* BPJMOAEDGOM; // 0x10

	::System::Void _ctor(::RPG::Client::RoguePickAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A6EFC2A5F317516B* Method_1_E2EB6FF297DA95BC(::RPG::Client::RoguePickAvatarInfo* a1)
	{
		return ((::Class_1_A6EFC2A5F317516B*(*)(::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B_METHOD_1_E2EB6FF297DA95BC_OFFSET))(a1);
	}

	::System::Void Method_1_80D66DC67DDE041F(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B_METHOD_1_80D66DC67DDE041F_OFFSET))(this, a1);
	}
};
