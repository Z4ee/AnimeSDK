#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_968;
class Class_1_166E0F5C448FE77D;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_2_7D955286BE9C6357_Class_1_DF49782B75FABBCB;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::Client::OpenWorld { template <typename T> class CellStruct_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7D955286BE9C6357_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xAF5B3E0)
#define CLASS_2_7D955286BE9C6357_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xAF5B140)
#define CLASS_2_7D955286BE9C6357_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF577D0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_0DD12AF892B01D5A_OFFSET UNITYSDK_OFFSET(0xAF5B6D0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_0FB39595DFE22C0B_OFFSET UNITYSDK_OFFSET(0xAF5B7B0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_28D8EC4589B1C4B8_OFFSET UNITYSDK_OFFSET(0xAF5A520)
#define CLASS_2_7D955286BE9C6357_METHOD_2_3407EE44BF43A6A4_OFFSET UNITYSDK_OFFSET(0xAF57A80)
#define CLASS_2_7D955286BE9C6357_METHOD_2_3463334F3C916ED0_OFFSET UNITYSDK_OFFSET(0xAF5B8A0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_356A8AB268440A1F_OFFSET UNITYSDK_OFFSET(0xAF5B4F0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_382FB8E18C7BBA24_OFFSET UNITYSDK_OFFSET(0xAF5B7F0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_3E8C166F58B80B39_OFFSET UNITYSDK_OFFSET(0xAF5B7C0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_5DE00ED3D9EFB4BA_OFFSET UNITYSDK_OFFSET(0xAF5A740)
#define CLASS_2_7D955286BE9C6357_METHOD_2_75DEE7A74EA0F7C2_OFFSET UNITYSDK_OFFSET(0xAF5A600)
#define CLASS_2_7D955286BE9C6357_METHOD_2_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0xAF5B5C0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_8D68E1C80950460F_OFFSET UNITYSDK_OFFSET(0xAF58790)
#define CLASS_2_7D955286BE9C6357_METHOD_2_90EC2DF0F810D5C6_OFFSET UNITYSDK_OFFSET(0xAF5B7D0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_93E37F35EE782FFC_OFFSET UNITYSDK_OFFSET(0xAF59E60)
#define CLASS_2_7D955286BE9C6357_METHOD_2_A14A1EB3F7EFF137_OFFSET UNITYSDK_OFFSET(0xAF5B790)
#define CLASS_2_7D955286BE9C6357_METHOD_2_A75974BD3C504FA2_OFFSET UNITYSDK_OFFSET(0xAF5B840)
#define CLASS_2_7D955286BE9C6357_METHOD_2_B1C9104A36114189_OFFSET UNITYSDK_OFFSET(0xAF5B7A0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_BEAE9B9FA494D648_OFFSET UNITYSDK_OFFSET(0xAF58D10)
#define CLASS_2_7D955286BE9C6357_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0xAF59D60)
#define CLASS_2_7D955286BE9C6357_METHOD_2_C1E9FA7A33D8D520_OFFSET UNITYSDK_OFFSET(0xAF59440)
#define CLASS_2_7D955286BE9C6357_METHOD_2_C7D0E24443F285BF_OFFSET UNITYSDK_OFFSET(0xAF5AEA0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_E44FD2AE32DFF0AA_OFFSET UNITYSDK_OFFSET(0xAF58660)
#define CLASS_2_7D955286BE9C6357_METHOD_2_E5C4FF7BBA1AC366_OFFSET UNITYSDK_OFFSET(0xAF58040)
#define CLASS_2_7D955286BE9C6357_METHOD_2_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0xAF579D0)
#define CLASS_2_7D955286BE9C6357_METHOD_2_FC0E13587F119004_OFFSET UNITYSDK_OFFSET(0xAF5B200)
#define CLASS_2_7D955286BE9C6357_METHOD_2_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0xAF58FE0)
#define CLASS_2_7D955286BE9C6357_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xAF5B0A0)
#define CLASS_2_7D955286BE9C6357__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF5B590)
#define CLASS_2_7D955286BE9C6357__CTOR_OFFSET UNITYSDK_OFFSET(0xAF57410)
#define CLASS_2_7D955286BE9C6357__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xAF5AB90)
#define CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xAF5B870)
#define CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xAF5B810)
#define CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF5B5B0)
#define CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xAF5B800)
#define CLASS_2_7D955286BE9C6357___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xAF5B7E0)

inline static constexpr unsigned int Class_2_7D955286BE9C6357_TypeDefinitionIndex = 68935;

class Class_2_7D955286BE9C6357 : public ::Class_1_5B228A4605C15E47
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7D955286BE9C6357_TypeDefinitionIndex)->GetStaticField(0x41E80);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_1; // 0x170
	::Class_2_7D955286BE9C6357_Class_1_DF49782B75FABBCB* Field_2_2; // 0x178
	::RPG::Client::OpenWorld::CellStruct_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_3; // 0x180
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* Field_2_4; // 0x188
	::Class_2_7D955286BE9C6357_Class_1_DF49782B75FABBCB* Field_2_5; // 0x190
	::Class_1_166E0F5C448FE77D* Field_2_6; // 0x198
	::Class_2_7D955286BE9C6357_Class_1_DF49782B75FABBCB* Field_2_7; // 0x1A0
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_8; // 0x1A8
	::System::Boolean Field_2_9; // 0x1B0

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Void Method_2_3407EE44BF43A6A4(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_3407EE44BF43A6A4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_E5C4FF7BBA1AC366(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_E5C4FF7BBA1AC366_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E44FD2AE32DFF0AA(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_E44FD2AE32DFF0AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D68E1C80950460F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_8D68E1C80950460F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BEAE9B9FA494D648(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_BEAE9B9FA494D648_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FEF999131EAD8C08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_FEF999131EAD8C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C1E9FA7A33D8D520()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_C1E9FA7A33D8D520_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_93E37F35EE782FFC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Class_1_DE4C6B309308A230* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_93E37F35EE782FFC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_28D8EC4589B1C4B8(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_28D8EC4589B1C4B8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5DE00ED3D9EFB4BA(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_5DE00ED3D9EFB4BA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_C7D0E24443F285BF(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_C7D0E24443F285BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_2_FC0E13587F119004(::UnityEngine::Rect a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_FC0E13587F119004_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_75DEE7A74EA0F7C2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_75DEE7A74EA0F7C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_356A8AB268440A1F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_356A8AB268440A1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_0DD12AF892B01D5A(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_0DD12AF892B01D5A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_A14A1EB3F7EFF137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_A14A1EB3F7EFF137_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1C9104A36114189(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_B1C9104A36114189_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0FB39595DFE22C0B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_0FB39595DFE22C0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3E8C166F58B80B39(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_3E8C166F58B80B39_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_90EC2DF0F810D5C6(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_90EC2DF0F810D5C6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24(::Class_0_16E4307DCC419505_968* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_968*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_382FB8E18C7BBA24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_A75974BD3C504FA2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_A75974BD3C504FA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_3463334F3C916ED0(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D955286BE9C6357_METHOD_2_3463334F3C916ED0_OFFSET))(this, a1, a2, a3);
	}
};
