#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_2_DA3132AA62F93B22;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_6155F044CFFF9420__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B38140)

inline static constexpr unsigned int Class_1_6155F044CFFF9420_TypeDefinitionIndex = 56298;

class Class_1_6155F044CFFF9420 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x4AE20);
	}
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x4AE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6155F044CFFF9420__CCTOR_OFFSET))();
	}
};
