#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_95265256C2BBEDF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ABD20)

inline static constexpr unsigned int Class_2_95265256C2BBEDF2_TypeDefinitionIndex = 24720;

class Class_2_95265256C2BBEDF2 : public ::System::Attribute
{
public:
	::System::String* DPPJMFBGFJN; // 0x10
	::System::String* CHFPPBOOEFK; // 0x18
	::System::String* FMBNGMNEIFB; // 0x20
	::System::String* KEOAHDOPBMH; // 0x28
	::System::String* AFNAAAJILIL; // 0x30
	::System::Object* NBMKFMINNGO; // 0x38
	::System::String* FCKKFGEKLJA; // 0x40
	::System::Boolean LONIOGBIKFK; // 0x48
	::System::Boolean OEAKMFHPMPN; // 0x49
	::System::Boolean IPLKGEDHJHM; // 0x4A

	::System::Void _ctor(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_95265256C2BBEDF2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
