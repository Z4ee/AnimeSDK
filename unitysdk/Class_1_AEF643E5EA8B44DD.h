#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_AEF643E5EA8B44DD__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBEDC90)

inline static constexpr unsigned int Class_1_AEF643E5EA8B44DD_TypeDefinitionIndex = 53829;

class Class_1_AEF643E5EA8B44DD : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonEnum** StaticGet_JMKIHPJPPMI()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_TypeDefinitionIndex)->GetStaticField(0x3F690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF643E5EA8B44DD__CCTOR_OFFSET))();
	}
};
