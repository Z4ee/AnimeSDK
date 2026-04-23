#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyEventEffectRow; }

#define CLASS_1_2B4CD6A0619A0E50_GET_ID_OFFSET UNITYSDK_OFFSET(0x12A75F20)
#define CLASS_1_2B4CD6A0619A0E50_METHOD_1_7C817AD0B3526BFA_OFFSET UNITYSDK_OFFSET(0x12A75ED0)
#define CLASS_1_2B4CD6A0619A0E50_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x12A75E00)
#define CLASS_1_2B4CD6A0619A0E50_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x12A75D40)
#define CLASS_1_2B4CD6A0619A0E50_SET_ID_OFFSET UNITYSDK_OFFSET(0x12A75F30)
#define CLASS_1_2B4CD6A0619A0E50__CTOR_OFFSET UNITYSDK_OFFSET(0x12A75DF0)

inline static constexpr unsigned int Class_1_2B4CD6A0619A0E50_TypeDefinitionIndex = 61007;

class Class_1_2B4CD6A0619A0E50 : public ::System::Object
{
public:
	::RPG::GameCore::MonopolyEventEffectRow* Field_1_1; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50__CTOR_OFFSET))(this);
	}

	static ::Class_1_2B4CD6A0619A0E50* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_2B4CD6A0619A0E50*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50_SET_ID_OFFSET))(this, value);
	}

	::RPG::GameCore::MonopolyEffectType Method_1_7C817AD0B3526BFA()
	{
		return ((::RPG::GameCore::MonopolyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4CD6A0619A0E50_METHOD_1_7C817AD0B3526BFA_OFFSET))(this);
	}
};
