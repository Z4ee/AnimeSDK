#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_269DB65BC39777F0;
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_F9FBCC956DFCF137_14_METHOD_1_471450ED47D08C7F_OFFSET UNITYSDK_OFFSET(0xA4150F0)
#define CLASS_1_F9FBCC956DFCF137_14__CTOR_OFFSET UNITYSDK_OFFSET(0xA415110)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_14_TypeDefinitionIndex = 58643;

class Class_1_F9FBCC956DFCF137_14 : public ::System::Object
{
public:
	::Class_1_269DB65BC39777F0* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_269DB65BC39777F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_269DB65BC39777F0*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_14__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfit* Method_1_471450ED47D08C7F()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_14_METHOD_1_471450ED47D08C7F_OFFSET))(this);
	}
};
