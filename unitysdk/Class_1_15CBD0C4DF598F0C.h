#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace MoleMole::Config { class HollowPosConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_15CBD0C4DF598F0C_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xDAFD6B0)
#define CLASS_1_15CBD0C4DF598F0C_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0xDAFD8D0)
#define CLASS_1_15CBD0C4DF598F0C_METHOD_1_70889F446EEDCE38_OFFSET UNITYSDK_OFFSET(0xDAFD4A0)
#define CLASS_1_15CBD0C4DF598F0C_METHOD_1_BDA69F93AAEA999D_OFFSET UNITYSDK_OFFSET(0xDAFD450)

inline static constexpr unsigned int Class_1_15CBD0C4DF598F0C_TypeDefinitionIndex = 41552;

class Class_1_15CBD0C4DF598F0C : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCityHollowMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigCityHollowMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15CBD0C4DF598F0C_TypeDefinitionIndex)->GetStaticField(0x3E4C0);
	}

	static ::MoleMole::Config::ConfigCityHollowMap* Method_1_BDA69F93AAEA999D()
	{
		return ((::MoleMole::Config::ConfigCityHollowMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_METHOD_1_BDA69F93AAEA999D_OFFSET))();
	}

	static ::MoleMole::Config::HollowPosConfig* Method_1_70889F446EEDCE38(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Config::HollowPosConfig*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_METHOD_1_70889F446EEDCE38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15CBD0C4DF598F0C_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
