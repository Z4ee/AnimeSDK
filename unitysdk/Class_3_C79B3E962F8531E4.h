#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_C79B3E962F8531E4_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CD08F20)
#define CLASS_3_C79B3E962F8531E4_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CD08F60)
#define CLASS_3_C79B3E962F8531E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD08F50)

inline static constexpr unsigned int Class_3_C79B3E962F8531E4_TypeDefinitionIndex = 21250;

class Class_3_C79B3E962F8531E4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IEHPFADHJFD; // 0x18
	::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x20
	::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x28
	::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C79B3E962F8531E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C79B3E962F8531E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C79B3E962F8531E4*&))((::PBYTE)hIl2Cpp + CLASS_3_C79B3E962F8531E4_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C79B3E962F8531E4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C79B3E962F8531E4*))((::PBYTE)hIl2Cpp + CLASS_3_C79B3E962F8531E4_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
