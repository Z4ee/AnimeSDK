#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6EFC2A5F317516B_METHOD_1_E2D57A3ADE797207_OFFSET UNITYSDK_OFFSET(0x11E434A0)
#define CLASS_1_A6EFC2A5F317516B_METHOD_1_E2EB6FF297DA95BC_OFFSET UNITYSDK_OFFSET(0x11E43440)
#define CLASS_1_A6EFC2A5F317516B__CTOR_OFFSET UNITYSDK_OFFSET(0x11E43490)

inline static constexpr unsigned int Class_1_A6EFC2A5F317516B_TypeDefinitionIndex = 57722;

class Class_1_A6EFC2A5F317516B : public ::System::Object
{
public:
	::RPG::Client::RoguePickAvatarInfo* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::RoguePickAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A6EFC2A5F317516B* Method_1_E2EB6FF297DA95BC(::RPG::Client::RoguePickAvatarInfo* a1)
	{
		return ((::Class_1_A6EFC2A5F317516B*(*)(::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B_METHOD_1_E2EB6FF297DA95BC_OFFSET))(a1);
	}

	::System::Void Method_1_E2D57A3ADE797207(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFC2A5F317516B_METHOD_1_E2D57A3ADE797207_OFFSET))(this, a1);
	}
};
