#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_ED7120C9B64DC28F_METHOD_2_5D395F4B077D682F_OFFSET UNITYSDK_OFFSET(0x1D6C62F0)
#define CLASS_2_ED7120C9B64DC28F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C64F0)

inline static constexpr unsigned int Class_2_ED7120C9B64DC28F_TypeDefinitionIndex = 21208;

class Class_2_ED7120C9B64DC28F : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* BAHLDFMIJFG; // 0x10
	::RPG::MVector3 JBIKFECEIIJ; // 0x18
	::System::Boolean CEFGAPLELBN; // 0x24
	::System::Boolean PAHCFELAJPB; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED7120C9B64DC28F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_5D395F4B077D682F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_ED7120C9B64DC28F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_ED7120C9B64DC28F*&))((::PBYTE)hIl2Cpp + CLASS_2_ED7120C9B64DC28F_METHOD_2_5D395F4B077D682F_OFFSET))(a1, a2);
	}
};
