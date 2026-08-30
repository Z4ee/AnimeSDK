#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/System/Object.h"

class Class_1_5469D397DAE62876;
class Class_2_7AA0468CE6C1F3D7_1;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_97709FA9621EC553_METHOD_1_3F7D432C99ECDDFB_OFFSET UNITYSDK_OFFSET(0xB6DE240)
#define CLASS_1_97709FA9621EC553_METHOD_1_C20B8F6D1D691CDB_OFFSET UNITYSDK_OFFSET(0xB6DE280)
#define CLASS_1_97709FA9621EC553_METHOD_1_D0048EC1AB3D4CEF_OFFSET UNITYSDK_OFFSET(0xB6DE2D0)
#define CLASS_1_97709FA9621EC553__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6DE350)

inline static constexpr unsigned int Class_1_97709FA9621EC553_TypeDefinitionIndex = 56031;

class Class_1_97709FA9621EC553 : public ::System::Object
{
public:
	static ::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>** StaticGet_LJMDIKHBOJH()
	{
		return (::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97709FA9621EC553_TypeDefinitionIndex)->GetStaticField(0x21540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97709FA9621EC553__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_3F7D432C99ECDDFB(::Class_2_7AA0468CE6C1F3D7_1* a1)
	{
		return ((::System::Void(*)(::Class_2_7AA0468CE6C1F3D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_97709FA9621EC553_METHOD_1_3F7D432C99ECDDFB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C20B8F6D1D691CDB(::RPG::GameCore::EnumStatusType a1, ::RPG::GameCore::EnumStatusTypeMask a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::EnumStatusType, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_97709FA9621EC553_METHOD_1_C20B8F6D1D691CDB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D0048EC1AB3D4CEF(::RPG::GameCore::TurnBasedModifierInstance* a1, ::Class_1_5469D397DAE62876* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + CLASS_1_97709FA9621EC553_METHOD_1_D0048EC1AB3D4CEF_OFFSET))(a1, a2);
	}
};
