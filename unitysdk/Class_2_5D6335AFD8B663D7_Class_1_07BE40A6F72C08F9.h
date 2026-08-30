#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x159A4FB0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x159A4FD0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_SET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x159A4FC0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x159A4FE0)
#define CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9__CTOR_OFFSET UNITYSDK_OFFSET(0x159A4B50)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_Class_1_07BE40A6F72C08F9_TypeDefinitionIndex = 57591;

class Class_2_5D6335AFD8B663D7_Class_1_07BE40A6F72C08F9 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _OwnerRef_k__BackingField; // 0x10
	::System::String* _UniqueName_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerRef()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_GET_OWNERREF_OFFSET))(this);
	}

	::System::Void set_OwnerRef(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_SET_OWNERREF_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_CLASS_1_07BE40A6F72C08F9_SET_UNIQUENAME_OFFSET))(this, a1);
	}
};
