#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F15F0F17400243F_METHOD_1_592D957EF3A2E523_OFFSET UNITYSDK_OFFSET(0x17EABD50)
#define CLASS_1_1F15F0F17400243F_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0x17EABCD0)
#define CLASS_1_1F15F0F17400243F__CTOR_OFFSET UNITYSDK_OFFSET(0x17EABD40)

inline static constexpr unsigned int Class_1_1F15F0F17400243F_TypeDefinitionIndex = 59792;

class Class_1_1F15F0F17400243F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F__CTOR_OFFSET))(this);
	}

	static ::Class_1_1F15F0F17400243F* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_1F15F0F17400243F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::System::Void Method_1_592D957EF3A2E523(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F15F0F17400243F_METHOD_1_592D957EF3A2E523_OFFSET))(this, a1);
	}
};
