#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_BE27584A7A63E572___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA559AD0)
#define CLASS_1_BE27584A7A63E572___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA559B10)
#define CLASS_1_BE27584A7A63E572___C___COMPACTORDEREDSTATEFORKEY_B__27_0_OFFSET UNITYSDK_OFFSET(0xA559B20)

inline static constexpr unsigned int Class_1_BE27584A7A63E572___c_TypeDefinitionIndex = 71310;

class Class_1_BE27584A7A63E572___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::Client::MonoEffect*>** StaticGet___9__27_0()
	{
		return (::System::Predicate_1<::RPG::Client::MonoEffect*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE27584A7A63E572___c_TypeDefinitionIndex)->GetStaticField(0x6B350);
	}
	static ::Class_1_BE27584A7A63E572___c** StaticGet___9()
	{
		return (::Class_1_BE27584A7A63E572___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE27584A7A63E572___c_TypeDefinitionIndex)->GetStaticField(0x6B358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CompactOrderedStateForKey_b__27_0(::RPG::Client::MonoEffect* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_BE27584A7A63E572___C___COMPACTORDEREDSTATEFORKEY_B__27_0_OFFSET))(this, x);
	}
};
