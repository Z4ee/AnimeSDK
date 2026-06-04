#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_9156D074A1DB9CA7_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x19E848B0)
#define CLASS_3_9156D074A1DB9CA7_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x19E84930)
#define CLASS_3_9156D074A1DB9CA7__CTOR_OFFSET UNITYSDK_OFFSET(0x19E84900)

inline static constexpr unsigned int Class_3_9156D074A1DB9CA7_TypeDefinitionIndex = 21474;

class Class_3_9156D074A1DB9CA7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9156D074A1DB9CA7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9156D074A1DB9CA7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9156D074A1DB9CA7*&))((::PBYTE)hIl2Cpp + CLASS_3_9156D074A1DB9CA7_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9156D074A1DB9CA7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9156D074A1DB9CA7*))((::PBYTE)hIl2Cpp + CLASS_3_9156D074A1DB9CA7_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
