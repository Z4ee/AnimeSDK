#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_269DB65BC39777F0;
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_F9FBCC956DFCF137_13_METHOD_1_E7AB2B7D0E333795_OFFSET UNITYSDK_OFFSET(0x185A6B40)
#define CLASS_1_F9FBCC956DFCF137_13__CTOR_OFFSET UNITYSDK_OFFSET(0x185A6B90)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_13_TypeDefinitionIndex = 59914;

class Class_1_F9FBCC956DFCF137_13 : public ::System::Object
{
public:
	::Class_1_269DB65BC39777F0* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_269DB65BC39777F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_269DB65BC39777F0*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_13__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfit* Method_1_E7AB2B7D0E333795()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_13_METHOD_1_E7AB2B7D0E333795_OFFSET))(this);
	}
};
