#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F5257A564201F28E_METHOD_1_45E0FAD92C78B6E2_OFFSET UNITYSDK_OFFSET(0x1EC01BA0)
#define CLASS_1_F5257A564201F28E__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBCC860)

inline static constexpr unsigned int Class_1_F5257A564201F28E_TypeDefinitionIndex = 35273;

class Class_1_F5257A564201F28E : public ::System::Object
{
public:
	::System::String* OGHKHLCKFOG; // 0x10
	::System::String* FMKLNIIEDCM; // 0x18
	::System::String* CANHPBEBAML; // 0x20
	::System::String* NHHLMDLDMIL; // 0x28
	::System::String* IIMPLGFMIBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5257A564201F28E__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_45E0FAD92C78B6E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5257A564201F28E_METHOD_1_45E0FAD92C78B6E2_OFFSET))(this);
	}
};
