#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_2_A48F3719AA1CF200_14;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_6155F044CFFF9420__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBDB5A0)

inline static constexpr unsigned int Class_1_6155F044CFFF9420_TypeDefinitionIndex = 61145;

class Class_1_6155F044CFFF9420 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_HDELBPBOCEP()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x646D0);
	}
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_ICKAAJIMECL()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x646D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6155F044CFFF9420__CCTOR_OFFSET))();
	}
};
