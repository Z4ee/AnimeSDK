#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_2_0C561856C5C5A2FC;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_6155F044CFFF9420__CCTOR_OFFSET UNITYSDK_OFFSET(0xA864CD0)

inline static constexpr unsigned int Class_1_6155F044CFFF9420_TypeDefinitionIndex = 57060;

class Class_1_6155F044CFFF9420 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x65A80);
	}
	static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::RPG::Client::WorkNodeState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6155F044CFFF9420_TypeDefinitionIndex)->GetStaticField(0x65A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6155F044CFFF9420__CCTOR_OFFSET))();
	}
};
