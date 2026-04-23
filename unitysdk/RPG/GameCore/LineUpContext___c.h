#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2B2C39A45CFC5540;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_LINEUPCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6EB240)
#define RPG_GAMECORE_LINEUPCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6EB280)
#define RPG_GAMECORE_LINEUPCONTEXT___C__GETMONSTERWAVESTAGECOUNT_B__2_0_OFFSET UNITYSDK_OFFSET(0xB6EB290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpContext___c_TypeDefinitionIndex = 51887;

	class LineUpContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_2B2C39A45CFC5540*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::Class_1_2B2C39A45CFC5540*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LineUpContext___c_TypeDefinitionIndex)->GetStaticField(0x55D60);
		}
		static ::RPG::GameCore::LineUpContext___c** StaticGet___9()
		{
			return (::RPG::GameCore::LineUpContext___c**)Il2CppClass::FromTypeDefinitionIndex(LineUpContext___c_TypeDefinitionIndex)->GetStaticField(0x55D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMonsterWaveStageCount_b__2_0(::Class_1_2B2C39A45CFC5540* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2B2C39A45CFC5540*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCONTEXT___C__GETMONSTERWAVESTAGECOUNT_B__2_0_OFFSET))(this, info);
		}
	};
}
