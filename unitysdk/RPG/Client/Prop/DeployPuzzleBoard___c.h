#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_4;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC53E510)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC53E550)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0xC53E5E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET UNITYSDK_OFFSET(0xC53E560)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c_TypeDefinitionIndex = 73048;

	class DeployPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::DeployPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::DeployPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x156C0);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x156C8);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x156D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SetPuzzleAnswer_b__23_0(::Class_1_8CF94E0F14A91ED3_4* a1, ::Class_1_8CF94E0F14A91ED3_4* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_4*, ::Class_1_8CF94E0F14A91ED3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __CheckPuzzleFinish_b__31_0(::Class_1_8CF94E0F14A91ED3_4* a1, ::Class_1_8CF94E0F14A91ED3_4* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_4*, ::Class_1_8CF94E0F14A91ED3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET))(this, a1, a2);
		}
	};
}
