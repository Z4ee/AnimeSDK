#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_405;
class Class_1_465523F2618ACD1B;
class Class_1_EF79F96DD047B849;
class Class_3_98C806684F7CC372_12;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_009DF1C0DBE996B8_METHOD_1_07F7A083AEB87759_OFFSET UNITYSDK_OFFSET(0x973EF30)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_2AB85BE2A67D08EB_OFFSET UNITYSDK_OFFSET(0x973DE00)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_3A213389EC80D726_OFFSET UNITYSDK_OFFSET(0x973F3A0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_55357EED91DD300A_OFFSET UNITYSDK_OFFSET(0x973F4C0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_697A1CDB89AFCF80_OFFSET UNITYSDK_OFFSET(0x973E280)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_6C319119E0CCE4C0_1_OFFSET UNITYSDK_OFFSET(0x973EDE0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_6C319119E0CCE4C0_OFFSET UNITYSDK_OFFSET(0x973ED60)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_78328DD1829FCCF4_OFFSET UNITYSDK_OFFSET(0x973F0D0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x973F840)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_908180B8F1022CC2_OFFSET UNITYSDK_OFFSET(0x973E3C0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_91A383AC107D6858_OFFSET UNITYSDK_OFFSET(0x973F210)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_9E470020506C3C76_OFFSET UNITYSDK_OFFSET(0x973E170)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_AC7BD58DBE80A7D0_OFFSET UNITYSDK_OFFSET(0x973F5C0)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_C6DE0B41731F49F8_OFFSET UNITYSDK_OFFSET(0x973F700)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_D1DAA01ABF3D4077_OFFSET UNITYSDK_OFFSET(0x973E440)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_D95835FCFBC75488_OFFSET UNITYSDK_OFFSET(0x973DF30)
#define CLASS_1_009DF1C0DBE996B8_METHOD_1_E91DC8577619DA02_OFFSET UNITYSDK_OFFSET(0x973EFE0)
#define CLASS_1_009DF1C0DBE996B8_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x973E4A0)
#define CLASS_1_009DF1C0DBE996B8_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x973EE60)
#define CLASS_1_009DF1C0DBE996B8__CTOR_OFFSET UNITYSDK_OFFSET(0x973F850)

inline static constexpr unsigned int Class_1_009DF1C0DBE996B8_TypeDefinitionIndex = 49999;

class Class_1_009DF1C0DBE996B8 : public ::System::Object
{
public:
	::Class_1_465523F2618ACD1B* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_EF79F96DD047B849*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* Field_1_0; // 0x20
	::RPG::GameCore::FixVec3 Field_1_4; // 0x28
	::RPG::GameCore::IVec2 Field_1_6; // 0x40
	::RPG::GameCore::IVec2 Field_1_3; // 0x48
	::RPG::GameCore::FixPoint Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2AB85BE2A67D08EB(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::Class_0_16E4307DCC419505_405* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::Class_0_16E4307DCC419505_405*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_2AB85BE2A67D08EB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_D95835FCFBC75488(::RPG::GameCore::IVec2& a1, ::Class_0_16E4307DCC419505_405* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2&, ::Class_0_16E4307DCC419505_405*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_D95835FCFBC75488_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_9E470020506C3C76(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_9E470020506C3C76_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_697A1CDB89AFCF80(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a5, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_697A1CDB89AFCF80_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_908180B8F1022CC2(::Class_1_EF79F96DD047B849* a1)
	{
		return ((::System::Boolean(*)(::Class_1_EF79F96DD047B849*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_908180B8F1022CC2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D1DAA01ABF3D4077(::Class_1_EF79F96DD047B849* a1)
	{
		return ((::System::Boolean(*)(::Class_1_EF79F96DD047B849*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_D1DAA01ABF3D4077_OFFSET))(a1);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Boolean Method_1_07F7A083AEB87759(::RPG::GameCore::IVec2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_07F7A083AEB87759_OFFSET))(this, a1);
	}

	::Class_1_EF79F96DD047B849* Method_1_E91DC8577619DA02(::RPG::GameCore::IVec2 a1)
	{
		return ((::Class_1_EF79F96DD047B849*(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_E91DC8577619DA02_OFFSET))(this, a1);
	}

	::Class_1_EF79F96DD047B849* Method_1_78328DD1829FCCF4(::RPG::GameCore::IVec2 a1, ::Class_0_16E4307DCC419505_405* a2, ::System::Boolean a3)
	{
		return ((::Class_1_EF79F96DD047B849*(*)(::PVOID, ::RPG::GameCore::IVec2, ::Class_0_16E4307DCC419505_405*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_78328DD1829FCCF4_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::IVec2 Method_1_91A383AC107D6858(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_91A383AC107D6858_OFFSET))(this, a1);
	}

	::Class_1_EF79F96DD047B849* Method_1_55357EED91DD300A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_EF79F96DD047B849*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_55357EED91DD300A_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_AC7BD58DBE80A7D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_AC7BD58DBE80A7D0_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixVec3 Method_1_C6DE0B41731F49F8(::RPG::GameCore::IVec2 a1)
	{
		return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_C6DE0B41731F49F8_OFFSET))(this, a1);
	}

	::RPG::GameCore::IVec2 Method_1_3A213389EC80D726(::RPG::GameCore::FixVec3 a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_3A213389EC80D726_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_6C319119E0CCE4C0(::RPG::GameCore::IVec2 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_6C319119E0CCE4C0_OFFSET))(this, a1);
	}

	::RPG::GameCore::IVec2 Method_1_6C319119E0CCE4C0_1(::System::Int32 a1)
	{
		return ((::RPG::GameCore::IVec2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_6C319119E0CCE4C0_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_009DF1C0DBE996B8_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}
};
