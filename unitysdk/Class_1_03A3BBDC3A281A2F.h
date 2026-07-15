#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_03A3BBDC3A281A2F_METHOD_1_AF75C8685AEE1425_OFFSET UNITYSDK_OFFSET(0x16986B20)
#define CLASS_1_03A3BBDC3A281A2F_METHOD_1_DA1B6F6CFF58DF46_OFFSET UNITYSDK_OFFSET(0x16986C70)

inline static constexpr unsigned int Class_1_03A3BBDC3A281A2F_TypeDefinitionIndex = 56626;

class Class_1_03A3BBDC3A281A2F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0

	static ::System::String* Method_1_AF75C8685AEE1425(::RPG::GameCore::E_PakType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + CLASS_1_03A3BBDC3A281A2F_METHOD_1_AF75C8685AEE1425_OFFSET))(a1);
	}

	static ::RPG::GameCore::E_PakType Method_1_DA1B6F6CFF58DF46(::System::String* a1)
	{
		return ((::RPG::GameCore::E_PakType(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_03A3BBDC3A281A2F_METHOD_1_DA1B6F6CFF58DF46_OFFSET))(a1);
	}
};
