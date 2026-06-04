#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_968;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_2_FFB390ED3CCEEE02;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_0C293A5E672E0EB2_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x138DF8D0)
#define CLASS_2_0C293A5E672E0EB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138DDA70)
#define CLASS_2_0C293A5E672E0EB2_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x138DF760)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_031C5A23422D4BE8_OFFSET UNITYSDK_OFFSET(0x138DE380)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_0461BD6DC785D08A_OFFSET UNITYSDK_OFFSET(0x138DFF30)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_0DD12AF892B01D5A_OFFSET UNITYSDK_OFFSET(0x138E0150)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_0FB39595DFE22C0B_OFFSET UNITYSDK_OFFSET(0x138DFF20)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_1DCD0EB57F2B3CF9_OFFSET UNITYSDK_OFFSET(0x138DF990)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_26BE450038393AC5_OFFSET UNITYSDK_OFFSET(0x138DE640)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x138DEF20)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_32FFE2990C0CD521_OFFSET UNITYSDK_OFFSET(0x138DF270)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_382FB8E18C7BBA24_1_OFFSET UNITYSDK_OFFSET(0x138DFF50)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_382FB8E18C7BBA24_OFFSET UNITYSDK_OFFSET(0x138DE750)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_3E8C166F58B80B39_OFFSET UNITYSDK_OFFSET(0x138E0210)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x138E0280)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x138DFAB0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_529176E12CEF1A3E_OFFSET UNITYSDK_OFFSET(0x138DDB80)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_533C6071A167307D_OFFSET UNITYSDK_OFFSET(0x138DEB30)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x138DFBD0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x138DF100)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_60E98A8839198A12_OFFSET UNITYSDK_OFFSET(0x138DE9E0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_610CC44B5A1B9AE0_OFFSET UNITYSDK_OFFSET(0x138DDF40)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x138E00B0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_697C250D8DD98D53_OFFSET UNITYSDK_OFFSET(0x138DFF40)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_6B8FDB6259F05406_OFFSET UNITYSDK_OFFSET(0x138DE400)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_73603F1B421E536C_OFFSET UNITYSDK_OFFSET(0x138E0070)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0x138DFF60)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_915BC5471FB708E2_OFFSET UNITYSDK_OFFSET(0x138DF5A0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_923A0CEAF8DA9C09_OFFSET UNITYSDK_OFFSET(0x138DFF10)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_9E9C8BD1128A2E9D_OFFSET UNITYSDK_OFFSET(0x138DFEE0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_A75974BD3C504FA2_OFFSET UNITYSDK_OFFSET(0x138E0250)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0x138DF170)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138DE700)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_E8077BB5F63D9F47_OFFSET UNITYSDK_OFFSET(0x138DFEF0)
#define CLASS_2_0C293A5E672E0EB2_METHOD_2_E96AD8BA07606ABE_OFFSET UNITYSDK_OFFSET(0x138E0090)
#define CLASS_2_0C293A5E672E0EB2_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x138DF0B0)
#define CLASS_2_0C293A5E672E0EB2__CTOR_OFFSET UNITYSDK_OFFSET(0x138DD8C0)
#define CLASS_2_0C293A5E672E0EB2__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x138DECD0)
#define CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x138E0220)
#define CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138DFF00)
#define CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x138E00A0)
#define CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x138E0080)

inline static constexpr unsigned int Class_2_0C293A5E672E0EB2_TypeDefinitionIndex = 68930;

class Class_2_0C293A5E672E0EB2 : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_0; // 0x170
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_2_1; // 0x178

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_529176E12CEF1A3E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_529176E12CEF1A3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_610CC44B5A1B9AE0(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_610CC44B5A1B9AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_031C5A23422D4BE8(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_031C5A23422D4BE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6B8FDB6259F05406(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_6B8FDB6259F05406_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BE450038393AC5(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_26BE450038393AC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_382FB8E18C7BBA24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_60E98A8839198A12(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_60E98A8839198A12_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_533C6071A167307D(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_533C6071A167307D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_297EA0FD117460C4(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_32FFE2990C0CD521(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_32FFE2990C0CD521_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1DCD0EB57F2B3CF9(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_1DCD0EB57F2B3CF9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_FFB390ED3CCEEE02* Method_2_915BC5471FB708E2(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_2_FFB390ED3CCEEE02*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_915BC5471FB708E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_2_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_9E9C8BD1128A2E9D()
	{
		return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_9E9C8BD1128A2E9D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_E8077BB5F63D9F47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_E8077BB5F63D9F47_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_923A0CEAF8DA9C09(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_923A0CEAF8DA9C09_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0FB39595DFE22C0B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_0FB39595DFE22C0B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0461BD6DC785D08A(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_0461BD6DC785D08A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_697C250D8DD98D53(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_697C250D8DD98D53_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24_1(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_382FB8E18C7BBA24_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_73603F1B421E536C(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_73603F1B421E536C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_E96AD8BA07606ABE(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_E96AD8BA07606ABE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Int32 Method_2_0DD12AF892B01D5A(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_0DD12AF892B01D5A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_3E8C166F58B80B39(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_3E8C166F58B80B39_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2___IFIXBASEPROXY_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A75974BD3C504FA2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_A75974BD3C504FA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C293A5E672E0EB2_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}
};
