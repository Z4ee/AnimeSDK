#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F15F0F17400243F_1_METHOD_1_592D957EF3A2E523_OFFSET UNITYSDK_OFFSET(0x15E324B0)
#define CLASS_1_1F15F0F17400243F_1_METHOD_1_5C124A71F2A2E459_OFFSET UNITYSDK_OFFSET(0x15E32460)
#define CLASS_1_1F15F0F17400243F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E324A0)

inline static constexpr unsigned int Class_1_1F15F0F17400243F_1_TypeDefinitionIndex = 59793;

class Class_1_1F15F0F17400243F_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_1F15F0F17400243F_1* Method_1_5C124A71F2A2E459()
	{
		return ((::Class_1_1F15F0F17400243F_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F_1_METHOD_1_5C124A71F2A2E459_OFFSET))();
	}

	::System::Void Method_1_592D957EF3A2E523(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F_1_METHOD_1_592D957EF3A2E523_OFFSET))(this, a1);
	}
};
