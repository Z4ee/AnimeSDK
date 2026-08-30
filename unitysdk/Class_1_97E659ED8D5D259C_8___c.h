#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_97E659ED8D5D259C_8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17119A80)
#define CLASS_1_97E659ED8D5D259C_8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17119AC0)
#define CLASS_1_97E659ED8D5D259C_8___C___GETCHIMERAPOOLMAXRARITY_B__14_1_OFFSET UNITYSDK_OFFSET(0x17119AD0)
#define CLASS_1_97E659ED8D5D259C_8___C___GETITEMPOOLMAXRARITY_B__15_1_OFFSET UNITYSDK_OFFSET(0x17119B30)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_8___c_TypeDefinitionIndex = 63445;

class Class_1_97E659ED8D5D259C_8___c : public ::System::Object
{
public:
	static ::Class_1_97E659ED8D5D259C_8___c** StaticGet___9()
	{
		return (::Class_1_97E659ED8D5D259C_8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97E659ED8D5D259C_8___c_TypeDefinitionIndex)->GetStaticField(0x67080);
	}
	static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>** StaticGet___9__14_1()
	{
		return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97E659ED8D5D259C_8___c_TypeDefinitionIndex)->GetStaticField(0x67088);
	}
	static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>** StaticGet___9__15_1()
	{
		return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97E659ED8D5D259C_8___c_TypeDefinitionIndex)->GetStaticField(0x67090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GetChimeraPoolMaxRarity_b__14_1(::RPG::Client::ChimeraDuelChimeraData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C___GETCHIMERAPOOLMAXRARITY_B__14_1_OFFSET))(this, a1);
	}

	::System::UInt32 __GetItemPoolMaxRarity_b__15_1(::RPG::Client::ChimeraDuelItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_8___C___GETITEMPOOLMAXRARITY_B__15_1_OFFSET))(this, a1);
	}
};
