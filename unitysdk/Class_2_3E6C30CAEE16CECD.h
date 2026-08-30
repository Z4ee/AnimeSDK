#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1064;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_2_ABBDDF72A79D9567;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_3E6C30CAEE16CECD_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x19AD06B0)
#define CLASS_2_3E6C30CAEE16CECD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19ACE920)
#define CLASS_2_3E6C30CAEE16CECD_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19AD0540)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_031C5A23422D4BE8_OFFSET UNITYSDK_OFFSET(0x19ACF170)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_0E1D3A4B1CB6C0BD_OFFSET UNITYSDK_OFFSET(0x19ACF4B0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_1DCD0EB57F2B3CF9_OFFSET UNITYSDK_OFFSET(0x19AD0770)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x19ACFCF0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_32FFE2990C0CD521_OFFSET UNITYSDK_OFFSET(0x19AD0050)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_382FB8E18C7BBA24_OFFSET UNITYSDK_OFFSET(0x19ACF5C0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x19AD0890)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_533C6071A167307D_OFFSET UNITYSDK_OFFSET(0x19ACF900)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x19AD09B0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x19ACFED0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_61BDFA393AECFF2C_OFFSET UNITYSDK_OFFSET(0x19ACF850)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_880903668C573858_OFFSET UNITYSDK_OFFSET(0x19ACF250)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_8A3813BAED267AA9_OFFSET UNITYSDK_OFFSET(0x19ACEDF0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_915BC5471FB708E2_OFFSET UNITYSDK_OFFSET(0x19AD0380)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_9E9C8BD1128A2E9D_OFFSET UNITYSDK_OFFSET(0x19AD0CC0)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_A7D97CAC6C19C9FA_OFFSET UNITYSDK_OFFSET(0x19ACEA30)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0x19ACFF40)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19ACF570)
#define CLASS_2_3E6C30CAEE16CECD_METHOD_2_E8077BB5F63D9F47_OFFSET UNITYSDK_OFFSET(0x19AD0CD0)
#define CLASS_2_3E6C30CAEE16CECD_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x19ACFE80)
#define CLASS_2_3E6C30CAEE16CECD__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE760)
#define CLASS_2_3E6C30CAEE16CECD__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x19ACFAA0)

inline static constexpr unsigned int Class_2_3E6C30CAEE16CECD_TypeDefinitionIndex = 73739;

class Class_2_3E6C30CAEE16CECD : public ::Class_1_E7175D70942CF05A
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* LKLMJDAKLJI; // 0x170
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* LGGKMIELPIH; // 0x178

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A7D97CAC6C19C9FA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_A7D97CAC6C19C9FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A3813BAED267AA9(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_8A3813BAED267AA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_031C5A23422D4BE8(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_031C5A23422D4BE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_880903668C573858(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_880903668C573858_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E1D3A4B1CB6C0BD(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_0E1D3A4B1CB6C0BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24(::Class_0_16E4307DCC419505_1064* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1064*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_382FB8E18C7BBA24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_61BDFA393AECFF2C(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_61BDFA393AECFF2C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_533C6071A167307D(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_533C6071A167307D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_297EA0FD117460C4(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_32FFE2990C0CD521(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_32FFE2990C0CD521_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1DCD0EB57F2B3CF9(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_1DCD0EB57F2B3CF9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_ABBDDF72A79D9567* Method_2_915BC5471FB708E2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_2_ABBDDF72A79D9567*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_915BC5471FB708E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_2_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_9E9C8BD1128A2E9D()
	{
		return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_9E9C8BD1128A2E9D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_E8077BB5F63D9F47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6C30CAEE16CECD_METHOD_2_E8077BB5F63D9F47_OFFSET))(this);
	}
};
