#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_965EB4ED882F86FF_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x1CC72D70)
#define CLASS_1_965EB4ED882F86FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC72F60)

inline static constexpr unsigned int Class_1_965EB4ED882F86FF_TypeDefinitionIndex = 11972;

class Class_1_965EB4ED882F86FF : public ::System::Object
{
public:
	::System::Int32 FLBGELFEBCK; // 0x10
	::RPG::GameCore::MechCraftTraitType GMPGDEINODK; // 0x14
	::RPG::Client::TextID OENAMINOLLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_965EB4ED882F86FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_965EB4ED882F86FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_965EB4ED882F86FF*&))((::PBYTE)hIl2Cpp + CLASS_1_965EB4ED882F86FF_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};
