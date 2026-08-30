#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersInputActionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_28;
class Class_1_273D4925251D8837;
class Class_2_35962C2B7535512E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BD10A3BCF7C68615_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C191BC0)
#define CLASS_1_BD10A3BCF7C68615_METHOD_1_821418F41A8DB28C_OFFSET UNITYSDK_OFFSET(0x1C191DB0)
#define CLASS_1_BD10A3BCF7C68615_METHOD_1_C8FE1EA6E873FB89_OFFSET UNITYSDK_OFFSET(0x1C192270)
#define CLASS_1_BD10A3BCF7C68615_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x1C192330)
#define CLASS_1_BD10A3BCF7C68615_METHOD_1_D412F0348A00EBB5_OFFSET UNITYSDK_OFFSET(0x1C192100)
#define CLASS_1_BD10A3BCF7C68615__CTOR_OFFSET UNITYSDK_OFFSET(0x1C191B20)

inline static constexpr unsigned int Class_1_BD10A3BCF7C68615_TypeDefinitionIndex = 36425;

class Class_1_BD10A3BCF7C68615 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_273D4925251D8837*>* AKKMCBDDMKA; // 0x10
	::Class_2_35962C2B7535512E* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_2_35962C2B7535512E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_821418F41A8DB28C(::System::UInt32 a1, ::Class_0_16E4307DCC419505_28* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_28*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615_METHOD_1_821418F41A8DB28C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D412F0348A00EBB5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615_METHOD_1_D412F0348A00EBB5_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType Method_1_C8FE1EA6E873FB89(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615_METHOD_1_C8FE1EA6E873FB89_OFFSET))(this, a1);
	}

	::Class_1_273D4925251D8837* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_273D4925251D8837*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD10A3BCF7C68615_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}
};
