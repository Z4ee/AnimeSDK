#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"

class Class_0_16E4307DCC419505_968;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8A62A96D5B2D08F0_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xA5A2900)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_382FB8E18C7BBA24_OFFSET UNITYSDK_OFFSET(0xA5A3760)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_4F11956DB86B790A_OFFSET UNITYSDK_OFFSET(0xA5A2780)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_6ED5BB9E67497920_OFFSET UNITYSDK_OFFSET(0xA5A3500)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_76FB0C4ED730F58B_OFFSET UNITYSDK_OFFSET(0xA5A3740)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_9FAC64C082B13882_OFFSET UNITYSDK_OFFSET(0xA5A2BE0)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_C87B7FFA600D1049_OFFSET UNITYSDK_OFFSET(0xA5A2DD0)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_C8980ADF7BF59F51_OFFSET UNITYSDK_OFFSET(0xA5A3770)
#define CLASS_2_8A62A96D5B2D08F0_METHOD_2_E96AD8BA07606ABE_OFFSET UNITYSDK_OFFSET(0xA5A3790)
#define CLASS_2_8A62A96D5B2D08F0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A2730)
#define CLASS_2_8A62A96D5B2D08F0__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xA5A30A0)
#define CLASS_2_8A62A96D5B2D08F0___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xA5A3750)
#define CLASS_2_8A62A96D5B2D08F0___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xA5A3780)

inline static constexpr unsigned int Class_2_8A62A96D5B2D08F0_TypeDefinitionIndex = 68908;

class Class_2_8A62A96D5B2D08F0 : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_4F11956DB86B790A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_4F11956DB86B790A_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_9FAC64C082B13882(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_9FAC64C082B13882_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C87B7FFA600D1049(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_C87B7FFA600D1049_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_6ED5BB9E67497920(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_6ED5BB9E67497920_OFFSET))(this, a1, a2);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_76FB0C4ED730F58B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_76FB0C4ED730F58B_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_382FB8E18C7BBA24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C8980ADF7BF59F51(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_C8980ADF7BF59F51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_E96AD8BA07606ABE(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A62A96D5B2D08F0_METHOD_2_E96AD8BA07606ABE_OFFSET))(this, a1, a2);
	}
};
