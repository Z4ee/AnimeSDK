#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesDialogConfig; }
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define CLASS_3_714E3A6CA2354616_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D069890)
#define CLASS_3_714E3A6CA2354616_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D0698E0)
#define CLASS_3_714E3A6CA2354616__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0698D0)

inline static constexpr unsigned int Class_3_714E3A6CA2354616_TypeDefinitionIndex = 21263;

class Class_3_714E3A6CA2354616 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesToastConfig* CCCCCCNNCJD; // 0x18
	::System::String* NMMKDFFHOLL; // 0x20
	::System::String* KBEPAIAFLHL; // 0x28
	::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x30
	::RPG::GameCore::ChenLingFesDialogConfig* GGICBIIJMPH; // 0x38
	::System::Single IEHPFADHJFD; // 0x40
	::System::UInt32 NJNFNFCJHFJ; // 0x44
	::System::Boolean HCBMABMLFPG; // 0x48
	::System::Boolean GNDCCBNILML; // 0x49
	::RPG::GameCore::ChenLingFesTargetType HILNFHCPEAD; // 0x4C
	::RPG::GameCore::LittleGameEntityType EAMICGDAKCN; // 0x50
	::System::UInt32 CMNOEFFFNPE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_714E3A6CA2354616*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_714E3A6CA2354616*&))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_714E3A6CA2354616* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_714E3A6CA2354616*))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
