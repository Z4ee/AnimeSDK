#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define CLASS_3_E94A855EC595D175_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1CF25F40)
#define CLASS_3_E94A855EC595D175_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x1CF25FB0)
#define CLASS_3_E94A855EC595D175__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF25F90)

inline static constexpr unsigned int Class_3_E94A855EC595D175_TypeDefinitionIndex = 21154;

class Class_3_E94A855EC595D175 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* DHPNGKCIHJM; // 0x18
	::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x20
	::System::String* IGOGPLONDPF; // 0x28
	::System::String* OOOAGMPJPGG; // 0x30
	::RPG::Client::TextID KEGANNHEKHA; // 0x38
	::System::Single DIFABIECKMA; // 0x48
	::System::Boolean GAGFBOBODMO; // 0x4C
	::System::Boolean CADFNGKECGK; // 0x4D
	::System::Boolean JOHDDNDIONB; // 0x4E
	::System::Boolean FMBPABHHOPJ; // 0x4F
	::System::Single BNNOEMIHCFH; // 0x50

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
