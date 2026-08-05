#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_378655CA7182DB74___C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x185E0C20)
#define CLASS_2_378655CA7182DB74___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185E0BD0)
#define CLASS_2_378655CA7182DB74___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185E0C10)

inline static constexpr unsigned int Class_2_378655CA7182DB74___c_TypeDefinitionIndex = 49768;

class Class_2_378655CA7182DB74___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_8()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_378655CA7182DB74___c_TypeDefinitionIndex)->GetStaticField(0x44470);
	}
	static ::Class_2_378655CA7182DB74___c** StaticGet___9()
	{
		return (::Class_2_378655CA7182DB74___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_378655CA7182DB74___c_TypeDefinitionIndex)->GetStaticField(0x44478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_378655CA7182DB74___C_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}
};
