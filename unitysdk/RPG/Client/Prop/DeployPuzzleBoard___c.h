#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_4;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA07A3A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA07A3E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0xA07A470)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET UNITYSDK_OFFSET(0xA07A3F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c_TypeDefinitionIndex = 63979;

	class DeployPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x48000);
		}
		static ::RPG::Client::Prop::DeployPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::DeployPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x48008);
		}
		static ::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_1_8CF94E0F14A91ED3_4*>**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0x48010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SetPuzzleAnswer_b__23_0(::Class_1_8CF94E0F14A91ED3_4* x, ::Class_1_8CF94E0F14A91ED3_4* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_4*, ::Class_1_8CF94E0F14A91ED3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET))(this, x, y);
		}

		::System::Int32 __CheckPuzzleFinish_b__31_0(::Class_1_8CF94E0F14A91ED3_4* x, ::Class_1_8CF94E0F14A91ED3_4* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_4*, ::Class_1_8CF94E0F14A91ED3_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET))(this, x, y);
		}
	};
}
