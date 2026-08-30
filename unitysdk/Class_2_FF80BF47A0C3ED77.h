#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FF80BF47A0C3ED77_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xE5CFCF0)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_0D051CE1B342F7F2_OFFSET UNITYSDK_OFFSET(0xE5CF140)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_7EE9D44ADCE8F637_OFFSET UNITYSDK_OFFSET(0xE5CEF30)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_BEFDA8A30C656893_OFFSET UNITYSDK_OFFSET(0xE5CED70)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0xE5CF230)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_CA23EF7928660EAF_OFFSET UNITYSDK_OFFSET(0xE5CF600)
#define CLASS_2_FF80BF47A0C3ED77_METHOD_2_D99CFF7509BF1A75_OFFSET UNITYSDK_OFFSET(0xE5CE980)
#define CLASS_2_FF80BF47A0C3ED77__CTOR_OFFSET UNITYSDK_OFFSET(0xE5CE930)
#define CLASS_2_FF80BF47A0C3ED77__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xE5CF340)

inline static constexpr unsigned int Class_2_FF80BF47A0C3ED77_TypeDefinitionIndex = 73878;

class Class_2_FF80BF47A0C3ED77 : public ::Class_1_E7175D70942CF05A
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D99CFF7509BF1A75(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_D99CFF7509BF1A75_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7EE9D44ADCE8F637(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_7EE9D44ADCE8F637_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0D051CE1B342F7F2(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_0D051CE1B342F7F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_CA23EF7928660EAF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_CA23EF7928660EAF_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BEFDA8A30C656893(::Class_1_3F28033F34305C46* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF80BF47A0C3ED77_METHOD_2_BEFDA8A30C656893_OFFSET))(this, a1, a2, a3);
	}
};
