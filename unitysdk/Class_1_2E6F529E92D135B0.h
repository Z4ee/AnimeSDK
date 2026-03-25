#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22D61CFAEF9166B1;
class Class_1_63D18ECF87218619;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define CLASS_1_2E6F529E92D135B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166EDE90)
#define CLASS_1_2E6F529E92D135B0_METHOD_1_0CF99FFA3F91D394_OFFSET UNITYSDK_OFFSET(0x166EDED0)
#define CLASS_1_2E6F529E92D135B0_METHOD_1_149C87CC170BFEEF_OFFSET UNITYSDK_OFFSET(0x166EDFA0)
#define CLASS_1_2E6F529E92D135B0__CTOR_OFFSET UNITYSDK_OFFSET(0x166EE090)

inline static constexpr unsigned int Class_1_2E6F529E92D135B0_TypeDefinitionIndex = 28853;

class Class_1_2E6F529E92D135B0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E6F529E92D135B0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E6F529E92D135B0_DISPOSE_OFFSET))(this);
	}

	::Class_1_22D61CFAEF9166B1* Method_1_0CF99FFA3F91D394(::Class_1_63D18ECF87218619* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::Class_1_22D61CFAEF9166B1*(*)(::PVOID, ::Class_1_63D18ECF87218619*, ::Entitas::IEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E6F529E92D135B0_METHOD_1_0CF99FFA3F91D394_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_22D61CFAEF9166B1* Method_1_149C87CC170BFEEF(::Class_1_63D18ECF87218619* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5)
	{
		return ((::Class_1_22D61CFAEF9166B1*(*)(::PVOID, ::Class_1_63D18ECF87218619*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::AIConfig*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E6F529E92D135B0_METHOD_1_149C87CC170BFEEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
