#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"

class Class_0_16E4307DCC419505_1010;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8A62A96D5B2D08F0_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1529D790)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_9FAC64C082B13882_OFFSET UNITYSDK_OFFSET(0x1529DA70)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_B42E2668BAC39DAD_OFFSET UNITYSDK_OFFSET(0x1529E390)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_B49F31F265437060_OFFSET UNITYSDK_OFFSET(0x1529D710)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_C87B7FFA600D1049_OFFSET UNITYSDK_OFFSET(0x1529DC60)
#define CLASS_2_8A62A96D5B2D08F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1529D6C0)
#define CLASS_2_8A62A96D5B2D08F0__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x1529DF30)

inline static constexpr unsigned int Class_2_8A62A96D5B2D08F0_TypeDefinitionIndex = 70440;

class Class_2_8A62A96D5B2D08F0 : public ::Class_1_E7175D70942CF05A
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_B49F31F265437060(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_B49F31F265437060_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_9FAC64C082B13882(::Class_0_16E4307DCC419505_1010* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1010*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_9FAC64C082B13882_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C87B7FFA600D1049(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_C87B7FFA600D1049_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_B42E2668BAC39DAD(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_B42E2668BAC39DAD_OFFSET))(this, a1, a2);
	}
};
