#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class String; }

#define CLASS_1_05C25BE1903D1AD8_METHOD_1_8448BE90732C5DA9_OFFSET UNITYSDK_OFFSET(0xBC04B20)
#define CLASS_1_05C25BE1903D1AD8__CTOR_OFFSET UNITYSDK_OFFSET(0xBC04C20)

inline static constexpr unsigned int Class_1_05C25BE1903D1AD8_TypeDefinitionIndex = 80174;

class Class_1_05C25BE1903D1AD8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05C25BE1903D1AD8__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CharacterOutfitPartConfig* Method_1_8448BE90732C5DA9(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterOutfitPartConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05C25BE1903D1AD8_METHOD_1_8448BE90732C5DA9_OFFSET))(this, a1);
	}
};
