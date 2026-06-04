#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_ED9DAF7806ABA6FC_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19376310)
#define CLASS_3_ED9DAF7806ABA6FC_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19376390)
#define CLASS_3_ED9DAF7806ABA6FC__CTOR_OFFSET UNITYSDK_OFFSET(0x19376360)

inline static constexpr unsigned int Class_3_ED9DAF7806ABA6FC_TypeDefinitionIndex = 20300;

class Class_3_ED9DAF7806ABA6FC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::ChenLingFesTargetType Field_3_2; // 0x28
	::RPG::GameCore::LittleGameEntityType Field_3_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED9DAF7806ABA6FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ED9DAF7806ABA6FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ED9DAF7806ABA6FC*&))((::PBYTE)hIl2Cpp + CLASS_3_ED9DAF7806ABA6FC_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ED9DAF7806ABA6FC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ED9DAF7806ABA6FC*))((::PBYTE)hIl2Cpp + CLASS_3_ED9DAF7806ABA6FC_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
