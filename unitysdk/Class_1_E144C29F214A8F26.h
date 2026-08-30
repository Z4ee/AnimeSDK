#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_E144C29F214A8F26_CLEAR_OFFSET UNITYSDK_OFFSET(0xC112E80)
#define CLASS_1_E144C29F214A8F26_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xC112F30)
#define CLASS_1_E144C29F214A8F26_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xC112EE0)
#define CLASS_1_E144C29F214A8F26_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xC112F40)
#define CLASS_1_E144C29F214A8F26__CTOR_OFFSET UNITYSDK_OFFSET(0xC112F50)

inline static constexpr unsigned int Class_1_E144C29F214A8F26_TypeDefinitionIndex = 69886;

class Class_1_E144C29F214A8F26 : public ::System::Object
{
public:
	::System::String* FLCPMEIBBKI; // 0x10
	::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* FEMFCJCKOKC; // 0x18
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
	::System::String* BAHLDFMIJFG; // 0x28
	::System::String* ECNKCCNJNPJ; // 0x30
	::System::UInt32 LFIEOIKFGNG; // 0x38
	::System::Boolean _IsReleased_k__BackingField; // 0x3C
	::System::Boolean ELNLFOJJHOO; // 0x3D
	::System::Boolean OLLCILOMNMH; // 0x3E
	::System::Boolean JGIFOKCNIMB; // 0x3F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_IsReleased()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_GET_ISRELEASED_OFFSET))(this);
	}

	::System::Void set_IsReleased(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E144C29F214A8F26_SET_ISRELEASED_OFFSET))(this, a1);
	}
};
