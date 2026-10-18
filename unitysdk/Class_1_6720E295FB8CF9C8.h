#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_6720E295FB8CF9C8_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1645B1C0)
#define CLASS_1_6720E295FB8CF9C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1645B340)
#define CLASS_1_6720E295FB8CF9C8_METHOD_1_6192496CF19FCCBF_OFFSET UNITYSDK_OFFSET(0x1645B170)
#define CLASS_1_6720E295FB8CF9C8_METHOD_1_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1645B430)
#define CLASS_1_6720E295FB8CF9C8_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1645B3C0)
#define CLASS_1_6720E295FB8CF9C8_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1645B220)
#define CLASS_1_6720E295FB8CF9C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1645B280)

inline static constexpr unsigned int Class_1_6720E295FB8CF9C8_TypeDefinitionIndex = 60105;

class Class_1_6720E295FB8CF9C8 : public ::System::Object
{
public:
	::System::Action* OnMaybeChanged; // 0x10
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_6192496CF19FCCBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_METHOD_1_6192496CF19FCCBF_OFFSET))(this);
	}

	::System::Void add_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6720E295FB8CF9C8_METHOD_1_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}
};
