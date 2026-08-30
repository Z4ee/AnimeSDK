#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_CB2863802B65A55F_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1CCD6260)
#define CLASS_1_CB2863802B65A55F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD6580)

inline static constexpr unsigned int Class_1_CB2863802B65A55F_TypeDefinitionIndex = 11503;

class Class_1_CB2863802B65A55F : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
	::System::String* BJBGDFFIFJF; // 0x18
	::RPG::GameCore::FateBuffRarityType PMIEAEGJNMJ; // 0x20
	::System::UInt32 NDAIGIEMABD; // 0x24
	::System::UInt32 NOKPLOBPMMD; // 0x28
	::RPG::Client::TextID JFGICGNCKDA; // 0x30
	::System::UInt32 EFAIIOHKFGD; // 0x40
	::System::UInt32 OFNCHIDJOME; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB2863802B65A55F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CB2863802B65A55F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CB2863802B65A55F*&))((::PBYTE)hIl2Cpp + CLASS_1_CB2863802B65A55F_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
