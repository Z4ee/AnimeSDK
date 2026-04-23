#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_3_985419CB30979FC6;
namespace System { class Action; }

#define CLASS_1_F787549F10CA3477_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC710610)
#define CLASS_1_F787549F10CA3477_METHOD_1_0F87F20F7EC17068_OFFSET UNITYSDK_OFFSET(0xC710990)
#define CLASS_1_F787549F10CA3477_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xC7108D0)
#define CLASS_1_F787549F10CA3477_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC710680)
#define CLASS_1_F787549F10CA3477_METHOD_1_4AEFFF5F872A519C_OFFSET UNITYSDK_OFFSET(0xC7106E0)
#define CLASS_1_F787549F10CA3477_METHOD_1_DE99F62492680680_OFFSET UNITYSDK_OFFSET(0xC7107E0)
#define CLASS_1_F787549F10CA3477_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0xC7109E0)
#define CLASS_1_F787549F10CA3477__CTOR_OFFSET UNITYSDK_OFFSET(0xC7109F0)

inline static constexpr unsigned int Class_1_F787549F10CA3477_TypeDefinitionIndex = 56292;

class Class_1_F787549F10CA3477 : public ::System::Object
{
public:
	::Class_3_985419CB30979FC6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4AEFFF5F872A519C(::Class_3_985419CB30979FC6* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_985419CB30979FC6*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_4AEFFF5F872A519C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DE99F62492680680(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_DE99F62492680680_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::RPG::Client::WorkNodeState Method_1_0F87F20F7EC17068()
	{
		return ((::RPG::Client::WorkNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_0F87F20F7EC17068_OFFSET))(this);
	}

	::Class_3_985419CB30979FC6* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_985419CB30979FC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F787549F10CA3477_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}
};
