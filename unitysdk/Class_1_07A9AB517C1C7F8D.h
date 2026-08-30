#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyEventEffectRow; }

#define CLASS_1_07A9AB517C1C7F8D_GET_ID_OFFSET UNITYSDK_OFFSET(0x160669F0)
#define CLASS_1_07A9AB517C1C7F8D_METHOD_1_7C817AD0B3526BFA_OFFSET UNITYSDK_OFFSET(0x160669A0)
#define CLASS_1_07A9AB517C1C7F8D_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x160668D0)
#define CLASS_1_07A9AB517C1C7F8D_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x16066810)
#define CLASS_1_07A9AB517C1C7F8D_SET_ID_OFFSET UNITYSDK_OFFSET(0x16066A00)
#define CLASS_1_07A9AB517C1C7F8D__CTOR_OFFSET UNITYSDK_OFFSET(0x160668C0)

inline static constexpr unsigned int Class_1_07A9AB517C1C7F8D_TypeDefinitionIndex = 66291;

class Class_1_07A9AB517C1C7F8D : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyEventEffectRow* IBPBJBOKKMF; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D__CTOR_OFFSET))(this);
	}

	static ::Class_1_07A9AB517C1C7F8D* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_07A9AB517C1C7F8D*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonopolyEffectType Method_1_7C817AD0B3526BFA()
	{
		return ((::RPG::GameCore::MonopolyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A9AB517C1C7F8D_METHOD_1_7C817AD0B3526BFA_OFFSET))(this);
	}
};
