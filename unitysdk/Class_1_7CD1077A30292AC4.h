#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }

#define CLASS_1_7CD1077A30292AC4_METHOD_1_1C89965ADB1648BD_OFFSET UNITYSDK_OFFSET(0xB6A2990)
#define CLASS_1_7CD1077A30292AC4_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB6A2940)
#define CLASS_1_7CD1077A30292AC4_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xB6A28A0)

inline static constexpr unsigned int Class_1_7CD1077A30292AC4_TypeDefinitionIndex = 73204;

class Class_1_7CD1077A30292AC4 : public ::System::Object
{
public:
	static ::RPG::GameCore::LevelNPCStillConfig** StaticGet_IGHAHBNLIJA()
	{
		return (::RPG::GameCore::LevelNPCStillConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CD1077A30292AC4_TypeDefinitionIndex)->GetStaticField(0x65C20);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CD1077A30292AC4_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CD1077A30292AC4_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::LevelNPCStillConfigData* Method_1_1C89965ADB1648BD(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelNPCStillConfigData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CD1077A30292AC4_METHOD_1_1C89965ADB1648BD_OFFSET))(a1);
	}
};
