#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/Foundation/TickFunction_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3B42BC0680587011;
class Class_3_61A5922E5046F385_5;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_DOTICK_OFFSET UNITYSDK_OFFSET(0x11B10210)
#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x11B104A0)
#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x11B10520)
#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11B105F0)
#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11B105E0)
#define CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815__CTOR_OFFSET UNITYSDK_OFFSET(0x11B0FDA0)

inline static constexpr unsigned int Class_1_052C27733D9F07A3_Class_2_7BB5AE41782F9815_TypeDefinitionIndex = 73353;

class Class_1_052C27733D9F07A3_Class_2_7BB5AE41782F9815 : public ::Foundation::TickFunction_1<::Foundation::ETickingGroup>
{
public:
	::Class_3_3B42BC0680587011* Field_2_6; // 0x28
	::System::Action* Field_2_3; // 0x30
	::MoleMole::Battle::Entity* Field_2_1; // 0x38
	::Class_3_61A5922E5046F385_5* Field_2_0; // 0x40
	::Class_3_F33F9DC5F4112336* Field_2_7; // 0x48
	::System::Boolean Field_2_2; // 0x50
	::System::Boolean Field_2_4; // 0x51
	::System::Int32 Field_2_11; // 0x54
	::UnityEngine::Vector3 Field_2_5; // 0x58

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Action* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void DoTick(::System::Double a1, ::System::Single a2, ::Foundation::ETickingGroup a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_DOTICK_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_052C27733D9F07A3_CLASS_2_7BB5AE41782F9815_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}
};
