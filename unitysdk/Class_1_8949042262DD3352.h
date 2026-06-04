#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8949042262DD3352_METHOD_1_DD8D0D2CA828095C_OFFSET UNITYSDK_OFFSET(0xDE31CE0)
#define CLASS_1_8949042262DD3352_METHOD_1_F7D794015ABDB7F5_OFFSET UNITYSDK_OFFSET(0xDE31E10)

inline static constexpr unsigned int Class_1_8949042262DD3352_TypeDefinitionIndex = 55389;

class Class_1_8949042262DD3352 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0

	static ::System::String* Method_1_DD8D0D2CA828095C(::RPG::GameCore::E_PakType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + CLASS_1_8949042262DD3352_METHOD_1_DD8D0D2CA828095C_OFFSET))(a1);
	}

	static ::RPG::GameCore::E_PakType Method_1_F7D794015ABDB7F5(::System::String* a1)
	{
		return ((::RPG::GameCore::E_PakType(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8949042262DD3352_METHOD_1_F7D794015ABDB7F5_OFFSET))(a1);
	}
};
