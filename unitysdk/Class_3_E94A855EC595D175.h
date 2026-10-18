#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define CLASS_3_E94A855EC595D175_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1CEF7F00)
#define CLASS_3_E94A855EC595D175_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x1CEF7F70)
#define CLASS_3_E94A855EC595D175__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7F50)

inline static constexpr unsigned int Class_3_E94A855EC595D175_TypeDefinitionIndex = 21154;

class Class_3_E94A855EC595D175 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IGOGPLONDPF; // 0x18
	::System::String* DHPNGKCIHJM; // 0x20
	::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x28
	::System::String* OOOAGMPJPGG; // 0x30
	::System::Single BNNOEMIHCFH; // 0x38
	::System::Single DIFABIECKMA; // 0x3C
	::System::Boolean JOHDDNDIONB; // 0x40
	::System::Boolean GAGFBOBODMO; // 0x41
	::System::Boolean FMBPABHHOPJ; // 0x42
	::System::Boolean CADFNGKECGK; // 0x43
	::RPG::Client::TextID KEGANNHEKHA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E94A855EC595D175__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E94A855EC595D175*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E94A855EC595D175*&))((::PBYTE)hIl2Cpp + CLASS_3_E94A855EC595D175_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E94A855EC595D175* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E94A855EC595D175*))((::PBYTE)hIl2Cpp + CLASS_3_E94A855EC595D175_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
