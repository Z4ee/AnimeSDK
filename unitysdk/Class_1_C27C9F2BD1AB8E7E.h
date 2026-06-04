#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_2E81B539DAB8D165_1;

#define CLASS_1_C27C9F2BD1AB8E7E_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1350E6C0)
#define CLASS_1_C27C9F2BD1AB8E7E_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1350E6A0)
#define CLASS_1_C27C9F2BD1AB8E7E_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1350E6E0)
#define CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_097468641FDED14E_1_OFFSET UNITYSDK_OFFSET(0x1350E610)
#define CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x1350E5A0)
#define CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_B133B7862DD7224B_OFFSET UNITYSDK_OFFSET(0x1350E540)
#define CLASS_1_C27C9F2BD1AB8E7E_SET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1350E6D0)
#define CLASS_1_C27C9F2BD1AB8E7E_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1350E6B0)
#define CLASS_1_C27C9F2BD1AB8E7E_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1350E6F0)
#define CLASS_1_C27C9F2BD1AB8E7E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1350E530)
#define CLASS_1_C27C9F2BD1AB8E7E__CTOR_OFFSET UNITYSDK_OFFSET(0x1350E520)

inline static constexpr unsigned int Class_1_C27C9F2BD1AB8E7E_TypeDefinitionIndex = 59349;

class Class_1_C27C9F2BD1AB8E7E : public ::System::Object
{
public:
	::System::Boolean _IsDead_k__BackingField; // 0x10
	::System::Int32 _CurrentHP_k__BackingField; // 0x14
	::RPG::GameCore::FixPoint _CurrentAtk_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B133B7862DD7224B(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_B133B7862DD7224B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_C27C9F2BD1AB8E7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C27C9F2BD1AB8E7E*))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E_1(::Class_1_2E81B539DAB8D165_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E81B539DAB8D165_1*))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_METHOD_1_097468641FDED14E_1_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_GET_CURRENTHP_OFFSET))(this);
	}

	::System::Void set_CurrentHP(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_SET_CURRENTHP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurrentAtk()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_GET_CURRENTATK_OFFSET))(this);
	}

	::System::Void set_CurrentAtk(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_SET_CURRENTATK_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_GET_ISDEAD_OFFSET))(this);
	}

	::System::Void set_IsDead(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C27C9F2BD1AB8E7E_SET_ISDEAD_OFFSET))(this, a1);
	}
};
