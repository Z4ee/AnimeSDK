#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_02825942C7F143CF_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1823A0A0)
#define CLASS_1_02825942C7F143CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1823A340)

inline static constexpr unsigned int Class_1_02825942C7F143CF_TypeDefinitionIndex = 13210;

class Class_1_02825942C7F143CF : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::GameCore::LimaoNewsContentType Field_1_1; // 0x28
	::RPG::Client::TextID Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02825942C7F143CF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_02825942C7F143CF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_02825942C7F143CF*&))((::PBYTE)hIl2Cpp + CLASS_1_02825942C7F143CF_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
