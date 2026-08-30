#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_4845F7398617F812_METHOD_1_1D1713DC50EF2833_OFFSET UNITYSDK_OFFSET(0x160DC850)
#define CLASS_1_4845F7398617F812_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x160DC7D0)
#define CLASS_1_4845F7398617F812__CTOR_OFFSET UNITYSDK_OFFSET(0x160DC840)

inline static constexpr unsigned int Class_1_4845F7398617F812_TypeDefinitionIndex = 73021;

class Class_1_4845F7398617F812 : public ::System::Object
{
public:
	static ::Class_1_4845F7398617F812** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_4845F7398617F812**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4845F7398617F812_TypeDefinitionIndex)->GetStaticField(0x2DD10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4845F7398617F812__CTOR_OFFSET))(this);
	}

	static ::Class_1_4845F7398617F812* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_4845F7398617F812*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4845F7398617F812_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::RPG::Client::Promises::Promise* Method_1_1D1713DC50EF2833()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4845F7398617F812_METHOD_1_1D1713DC50EF2833_OFFSET))(this);
	}
};
