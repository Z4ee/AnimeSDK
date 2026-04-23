#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DCA68F5BAA50C8C0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9990660)
#define CLASS_1_DCA68F5BAA50C8C0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99906A0)
#define CLASS_1_DCA68F5BAA50C8C0___C___GETTEAMSPEEDSUM_B__4_0_OFFSET UNITYSDK_OFFSET(0x99906B0)
#define CLASS_1_DCA68F5BAA50C8C0___C___GETTEAMSPEEDSUM_B__4_1_OFFSET UNITYSDK_OFFSET(0x99906D0)

inline static constexpr unsigned int Class_1_DCA68F5BAA50C8C0___c_TypeDefinitionIndex = 60203;

class Class_1_DCA68F5BAA50C8C0___c : public ::System::Object
{
public:
	static ::Class_1_DCA68F5BAA50C8C0___c** StaticGet___9()
	{
		return (::Class_1_DCA68F5BAA50C8C0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DCA68F5BAA50C8C0___c_TypeDefinitionIndex)->GetStaticField(0x1BDE0);
	}
	static ::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DCA68F5BAA50C8C0___c_TypeDefinitionIndex)->GetStaticField(0x1BDE8);
	}
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DCA68F5BAA50C8C0___c_TypeDefinitionIndex)->GetStaticField(0x1BDF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTeamSpeedSum_b__4_0(::RPG::Client::GridFightRole* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0___C___GETTEAMSPEEDSUM_B__4_0_OFFSET))(this, x);
	}

	::RPG::GameCore::FixPoint __GetTeamSpeedSum_b__4_1(::RPG::GameCore::FixPoint x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0___C___GETTEAMSPEEDSUM_B__4_1_OFFSET))(this, x);
	}
};
