#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_C6B158EB9941F4E8_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x182D4230)
#define CLASS_4_C6B158EB9941F4E8_METHOD_4_8A83AFE4D802260F_OFFSET UNITYSDK_OFFSET(0x182D4300)
#define CLASS_4_C6B158EB9941F4E8__CTOR_OFFSET UNITYSDK_OFFSET(0x182D42B0)

inline static constexpr unsigned int Class_4_C6B158EB9941F4E8_TypeDefinitionIndex = 20274;

class Class_4_C6B158EB9941F4E8 : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::String* Field_4_1; // 0x20
	::System::UInt32 Field_4_2; // 0x28
	::RPG::GameCore::DesignerUserPrefsDomain Field_4_0; // 0x2C
	::System::Boolean Field_4_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6B158EB9941F4E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C6B158EB9941F4E8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C6B158EB9941F4E8*&))((::PBYTE)hIl2Cpp + CLASS_4_C6B158EB9941F4E8_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_8A83AFE4D802260F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C6B158EB9941F4E8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C6B158EB9941F4E8*))((::PBYTE)hIl2Cpp + CLASS_4_C6B158EB9941F4E8_METHOD_4_8A83AFE4D802260F_OFFSET))(a1, a2);
	}
};
