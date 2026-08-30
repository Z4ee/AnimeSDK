#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_C79380732FBBDA38__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAF400)

inline static constexpr unsigned int Class_2_C79380732FBBDA38_TypeDefinitionIndex = 24578;

class Class_2_C79380732FBBDA38 : public ::System::Attribute
{
public:
	::Il2CppArray<::RPG::GameCore::LevelGraphType>* JMHACKMBPLF; // 0x10
	::System::Boolean BHMGBPJCFBK; // 0x18
	::System::Boolean GNDCCBNILML; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C79380732FBBDA38__CTOR_OFFSET))(this);
	}
};
