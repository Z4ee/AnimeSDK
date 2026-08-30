#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define CLASS_3_283AF94355ADE7E4_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0xCA45590)
#define CLASS_3_283AF94355ADE7E4_METHOD_3_81A21876F94E504E_OFFSET UNITYSDK_OFFSET(0xCA454E0)
#define CLASS_3_283AF94355ADE7E4__CTOR_OFFSET UNITYSDK_OFFSET(0xCA45550)

inline static constexpr unsigned int Class_3_283AF94355ADE7E4_TypeDefinitionIndex = 20908;

class Class_3_283AF94355ADE7E4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IGOGPLONDPF; // 0x18
	::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x20
	::System::String* OOOAGMPJPGG; // 0x28
	::System::String* DHPNGKCIHJM; // 0x30
	::RPG::Client::TextID KEGANNHEKHA; // 0x38
	::System::Single BNNOEMIHCFH; // 0x48
	::System::Single DIFABIECKMA; // 0x4C
	::System::Boolean FMBPABHHOPJ; // 0x50
	::System::Boolean GAGFBOBODMO; // 0x51
	::System::Boolean CADFNGKECGK; // 0x52
	::System::Boolean JOHDDNDIONB; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_283AF94355ADE7E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_81A21876F94E504E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_283AF94355ADE7E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_283AF94355ADE7E4*&))((::PBYTE)hIl2Cpp + CLASS_3_283AF94355ADE7E4_METHOD_3_81A21876F94E504E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_283AF94355ADE7E4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_283AF94355ADE7E4*))((::PBYTE)hIl2Cpp + CLASS_3_283AF94355ADE7E4_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
