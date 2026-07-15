#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_A02C1FB9D26A2525_METHOD_2_012617F70DD9D7B6_OFFSET UNITYSDK_OFFSET(0x1754EF30)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0x1754ED60)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_29169364C61FFEF2_OFFSET UNITYSDK_OFFSET(0x175501E0)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_5CB1195CE7AFB965_OFFSET UNITYSDK_OFFSET(0x1754FFC0)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_6B181DF837608D32_OFFSET UNITYSDK_OFFSET(0x1754FA70)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1754ECD0)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1754FF20)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_AF5BB34115774BF4_OFFSET UNITYSDK_OFFSET(0x1754F5B0)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_CEB324AD021F471A_OFFSET UNITYSDK_OFFSET(0x1754F460)
#define CLASS_2_A02C1FB9D26A2525_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17550190)
#define CLASS_2_A02C1FB9D26A2525__CTOR_OFFSET UNITYSDK_OFFSET(0x17550470)
#define CLASS_2_A02C1FB9D26A2525__ONBIND_OFFSET UNITYSDK_OFFSET(0x1754EC90)

inline static constexpr unsigned int Class_2_A02C1FB9D26A2525_TypeDefinitionIndex = 68939;

class Class_2_A02C1FB9D26A2525 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ED51BEF22C2FF5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_0ED51BEF22C2FF5B_OFFSET))(this);
	}

	::System::Void Method_2_012617F70DD9D7B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_012617F70DD9D7B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B181DF837608D32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_6B181DF837608D32_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CB1195CE7AFB965(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_5CB1195CE7AFB965_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_29169364C61FFEF2(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_29169364C61FFEF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF5BB34115774BF4(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_AF5BB34115774BF4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CEB324AD021F471A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*&))((::PBYTE)hIl2Cpp + CLASS_2_A02C1FB9D26A2525_METHOD_2_CEB324AD021F471A_OFFSET))(this, a1, a2);
	}
};
