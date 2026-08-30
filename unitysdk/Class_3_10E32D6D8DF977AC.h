#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_10E32D6D8DF977AC_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1CC20320)
#define CLASS_3_10E32D6D8DF977AC_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1CC20360)
#define CLASS_3_10E32D6D8DF977AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC20350)

inline static constexpr unsigned int Class_3_10E32D6D8DF977AC_TypeDefinitionIndex = 21252;

class Class_3_10E32D6D8DF977AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
	::System::String* HHMLELABBFN; // 0x20
	::System::String* KFEHPOFIOOA; // 0x28
	::System::UInt32 CMNOEFFFNPE; // 0x30
	::System::UInt32 NJNFNFCJHFJ; // 0x34
	::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x38
	::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_10E32D6D8DF977AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_10E32D6D8DF977AC*&))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_10E32D6D8DF977AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_10E32D6D8DF977AC*))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
