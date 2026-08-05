#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_22DDD7B50F316EE2.h"
#include "unitysdk/Enum_3_443A885B4E84B185.h"
#include "unitysdk/Enum_3_9427751BE2A593AE.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_15;
class Class_0_16E4307DCC419505_442;
class Class_1_0BE87BAA5B57AD70;
class Class_1_2E4E5AFB9A71CC38;
class Class_1_9465CC52E1CFB15A;
class Class_1_E3DC1E0D82B1C1F3;
class Class_3_A26677E63C832BEF;
class Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800;
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class InteractiveNavigateContainer; }
namespace NodeGraph::MainCity { class NavigateContainer; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_3_E63367724D8B0533_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1273EE80)
#define CLASS_3_E63367724D8B0533_METHOD_3_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x12745ED0)
#define CLASS_3_E63367724D8B0533_METHOD_3_04C5CE6A51925CD2_OFFSET UNITYSDK_OFFSET(0x12743630)
#define CLASS_3_E63367724D8B0533_METHOD_3_04EF989F9335D26D_OFFSET UNITYSDK_OFFSET(0x127410A0)
#define CLASS_3_E63367724D8B0533_METHOD_3_0761D6519B7B3835_OFFSET UNITYSDK_OFFSET(0x12744270)
#define CLASS_3_E63367724D8B0533_METHOD_3_0C423F9076B94BAD_OFFSET UNITYSDK_OFFSET(0x12741750)
#define CLASS_3_E63367724D8B0533_METHOD_3_0C9B47BEED372D62_OFFSET UNITYSDK_OFFSET(0x12748AD0)
#define CLASS_3_E63367724D8B0533_METHOD_3_1376ADE26816B7E0_OFFSET UNITYSDK_OFFSET(0x1274A8B0)
#define CLASS_3_E63367724D8B0533_METHOD_3_14153DBBD0548B19_OFFSET UNITYSDK_OFFSET(0x12749430)
#define CLASS_3_E63367724D8B0533_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x1273DAA0)
#define CLASS_3_E63367724D8B0533_METHOD_3_1D5426E472B2B850_OFFSET UNITYSDK_OFFSET(0x12747DB0)
#define CLASS_3_E63367724D8B0533_METHOD_3_24DED1B33C9AD6EC_OFFSET UNITYSDK_OFFSET(0x127463E0)
#define CLASS_3_E63367724D8B0533_METHOD_3_258B30823AB8BC65_1_OFFSET UNITYSDK_OFFSET(0x12746F80)
#define CLASS_3_E63367724D8B0533_METHOD_3_258B30823AB8BC65_OFFSET UNITYSDK_OFFSET(0x12741B90)
#define CLASS_3_E63367724D8B0533_METHOD_3_25A679EDE5CA7EC3_OFFSET UNITYSDK_OFFSET(0x12740660)
#define CLASS_3_E63367724D8B0533_METHOD_3_2A091364A11B8C1F_OFFSET UNITYSDK_OFFSET(0x12744850)
#define CLASS_3_E63367724D8B0533_METHOD_3_2E276967CCB28384_OFFSET UNITYSDK_OFFSET(0x12747840)
#define CLASS_3_E63367724D8B0533_METHOD_3_33A76F491A6B1008_OFFSET UNITYSDK_OFFSET(0x12743C10)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_10_OFFSET UNITYSDK_OFFSET(0x1274B3C0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_11_OFFSET UNITYSDK_OFFSET(0x1274B890)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_1_OFFSET UNITYSDK_OFFSET(0x127440D0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_2_OFFSET UNITYSDK_OFFSET(0x127441A0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_3_OFFSET UNITYSDK_OFFSET(0x127447F0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_4_OFFSET UNITYSDK_OFFSET(0x12746380)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_5_OFFSET UNITYSDK_OFFSET(0x127477E0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_6_OFFSET UNITYSDK_OFFSET(0x127479B0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_7_OFFSET UNITYSDK_OFFSET(0x12749580)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_8_OFFSET UNITYSDK_OFFSET(0x1274A410)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_9_OFFSET UNITYSDK_OFFSET(0x1274AEF0)
#define CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_OFFSET UNITYSDK_OFFSET(0x1273FE40)
#define CLASS_3_E63367724D8B0533_METHOD_3_3CA1FD51FB2197A9_OFFSET UNITYSDK_OFFSET(0x12742740)
#define CLASS_3_E63367724D8B0533_METHOD_3_3F662FD119B85D3A_1_OFFSET UNITYSDK_OFFSET(0x1274B4A0)
#define CLASS_3_E63367724D8B0533_METHOD_3_3F662FD119B85D3A_OFFSET UNITYSDK_OFFSET(0x1274B330)
#define CLASS_3_E63367724D8B0533_METHOD_3_410DD37938D07AB8_OFFSET UNITYSDK_OFFSET(0x12749650)
#define CLASS_3_E63367724D8B0533_METHOD_3_48278047645E0369_OFFSET UNITYSDK_OFFSET(0x12749160)
#define CLASS_3_E63367724D8B0533_METHOD_3_54C30614B1DCCB85_OFFSET UNITYSDK_OFFSET(0x1274A2A0)
#define CLASS_3_E63367724D8B0533_METHOD_3_55C7DC91964EA0D3_OFFSET UNITYSDK_OFFSET(0x12740C20)
#define CLASS_3_E63367724D8B0533_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1273F940)
#define CLASS_3_E63367724D8B0533_METHOD_3_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x1273F710)
#define CLASS_3_E63367724D8B0533_METHOD_3_5DBE0D8848C75126_OFFSET UNITYSDK_OFFSET(0x1274A470)
#define CLASS_3_E63367724D8B0533_METHOD_3_611A4C3EDF686400_OFFSET UNITYSDK_OFFSET(0x12745E20)
#define CLASS_3_E63367724D8B0533_METHOD_3_646E6271011D2B6A_OFFSET UNITYSDK_OFFSET(0x12745A90)
#define CLASS_3_E63367724D8B0533_METHOD_3_647320B50701B20B_OFFSET UNITYSDK_OFFSET(0x1273FEA0)
#define CLASS_3_E63367724D8B0533_METHOD_3_6DC37033BBE0C893_OFFSET UNITYSDK_OFFSET(0x12743210)
#define CLASS_3_E63367724D8B0533_METHOD_3_7064EC1C53A913C1_OFFSET UNITYSDK_OFFSET(0x12747A10)
#define CLASS_3_E63367724D8B0533_METHOD_3_735790CBF17E3AEA_OFFSET UNITYSDK_OFFSET(0x1274AF50)
#define CLASS_3_E63367724D8B0533_METHOD_3_7BD1EDB18F3DEE60_OFFSET UNITYSDK_OFFSET(0x12748160)
#define CLASS_3_E63367724D8B0533_METHOD_3_7E9A70D64C4D5983_OFFSET UNITYSDK_OFFSET(0x12749E00)
#define CLASS_3_E63367724D8B0533_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1273EEE0)
#define CLASS_3_E63367724D8B0533_METHOD_3_919B6C5967564C65_1_OFFSET UNITYSDK_OFFSET(0x1274B8F0)
#define CLASS_3_E63367724D8B0533_METHOD_3_919B6C5967564C65_OFFSET UNITYSDK_OFFSET(0x127490D0)
#define CLASS_3_E63367724D8B0533_METHOD_3_9F3AA33041047CD7_OFFSET UNITYSDK_OFFSET(0x1274A5D0)
#define CLASS_3_E63367724D8B0533_METHOD_3_9FAC866AE8B4286D_OFFSET UNITYSDK_OFFSET(0x12744F80)
#define CLASS_3_E63367724D8B0533_METHOD_3_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x12748630)
#define CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_1_OFFSET UNITYSDK_OFFSET(0x12744130)
#define CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_2_OFFSET UNITYSDK_OFFSET(0x12744200)
#define CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_3_OFFSET UNITYSDK_OFFSET(0x127495E0)
#define CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x127411F0)
#define CLASS_3_E63367724D8B0533_METHOD_3_A7399AFF138601A3_OFFSET UNITYSDK_OFFSET(0x12741260)
#define CLASS_3_E63367724D8B0533_METHOD_3_AA20D66933384854_OFFSET UNITYSDK_OFFSET(0x1274B420)
#define CLASS_3_E63367724D8B0533_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x1273EBC0)
#define CLASS_3_E63367724D8B0533_METHOD_3_AEBE76F5A26C7190_OFFSET UNITYSDK_OFFSET(0x127423B0)
#define CLASS_3_E63367724D8B0533_METHOD_3_B398A0CD4E90F689_OFFSET UNITYSDK_OFFSET(0x12749A80)
#define CLASS_3_E63367724D8B0533_METHOD_3_C0CF220EA2E34B64_OFFSET UNITYSDK_OFFSET(0x12742440)
#define CLASS_3_E63367724D8B0533_METHOD_3_CCDB86B26EE91183_OFFSET UNITYSDK_OFFSET(0x12742E30)
#define CLASS_3_E63367724D8B0533_METHOD_3_D1CDB2FF551302FA_OFFSET UNITYSDK_OFFSET(0x1274B530)
#define CLASS_3_E63367724D8B0533_METHOD_3_D4E1A96C8B2DA7E3_1_OFFSET UNITYSDK_OFFSET(0x12746850)
#define CLASS_3_E63367724D8B0533_METHOD_3_D4E1A96C8B2DA7E3_OFFSET UNITYSDK_OFFSET(0x127459C0)
#define CLASS_3_E63367724D8B0533_METHOD_3_DDB702BF50EA3E25_OFFSET UNITYSDK_OFFSET(0x12749C30)
#define CLASS_3_E63367724D8B0533_METHOD_3_E2A7EAAB713D5833_OFFSET UNITYSDK_OFFSET(0x127496E0)
#define CLASS_3_E63367724D8B0533_METHOD_3_EDEE2005066C4244_OFFSET UNITYSDK_OFFSET(0x12744970)
#define CLASS_3_E63367724D8B0533_METHOD_3_EE5494E7AF21C7B8_OFFSET UNITYSDK_OFFSET(0x127498B0)
#define CLASS_3_E63367724D8B0533_METHOD_3_EEC44F9DBB6CA7AB_OFFSET UNITYSDK_OFFSET(0x1274B250)
#define CLASS_3_E63367724D8B0533_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1273F160)
#define CLASS_3_E63367724D8B0533_METHOD_3_F6DA862EBE90EAFF_OFFSET UNITYSDK_OFFSET(0x12746900)
#define CLASS_3_E63367724D8B0533_METHOD_3_FEA110052E9ADC61_OFFSET UNITYSDK_OFFSET(0x1274A1D0)
#define CLASS_3_E63367724D8B0533_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1273DA50)
#define CLASS_3_E63367724D8B0533_ONSTART_OFFSET UNITYSDK_OFFSET(0x1273EE40)
#define CLASS_3_E63367724D8B0533__CTOR_OFFSET UNITYSDK_OFFSET(0x1273FB10)

inline static constexpr unsigned int Class_3_E63367724D8B0533_TypeDefinitionIndex = 78479;

class Class_3_E63367724D8B0533 : public ::Foundation::GameManager_1<::Class_3_E63367724D8B0533*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_3_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_6; // 0x28
	::System::Collections::Generic::List_1<::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800*>* Field_3_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_2E4E5AFB9A71CC38*>* Field_3_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_37D613409A049EE3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_OFFSET))(this, a1);
	}

	::System::Void Method_3_25A679EDE5CA7EC3(::System::Int32 a1, ::Enum_3_9427751BE2A593AE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_9427751BE2A593AE))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_25A679EDE5CA7EC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_04EF989F9335D26D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_04EF989F9335D26D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::MoleMole::EntityHandle Method_3_A7399AFF138601A3(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A7399AFF138601A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0C423F9076B94BAD(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::String* a10, ::System::Single a11, ::System::Single a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_0C423F9076B94BAD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_258B30823AB8BC65(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_258B30823AB8BC65_OFFSET))(this, a1, a2);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_3_AEBE76F5A26C7190(::System::Int32 a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_AEBE76F5A26C7190_OFFSET))(this, a1);
	}

	::System::Void Method_3_3CA1FD51FB2197A9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_3CA1FD51FB2197A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CCDB86B26EE91183(::System::Int32 a1, ::Class_0_16E4307DCC419505_442* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_442*, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_CCDB86B26EE91183_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_6DC37033BBE0C893(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_6DC37033BBE0C893_OFFSET))(this, a1);
	}

	::System::Void Method_3_55C7DC91964EA0D3(::System::Int32 a1, ::Enum_3_22DDD7B50F316EE2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_22DDD7B50F316EE2))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_55C7DC91964EA0D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_3_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_3_33A76F491A6B1008(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_33A76F491A6B1008_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_A3E94568D5184024_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_647320B50701B20B(::System::Int32 a1, ::Enum_3_22DDD7B50F316EE2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_22DDD7B50F316EE2))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_647320B50701B20B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_A3E94568D5184024_2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0761D6519B7B3835(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_0761D6519B7B3835_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_37D613409A049EE3_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_2A091364A11B8C1F(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Enum_3_443A885B4E84B185 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Enum_3_443A885B4E84B185, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_2A091364A11B8C1F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_EDEE2005066C4244(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_EDEE2005066C4244_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FAC866AE8B4286D(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_9FAC866AE8B4286D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_3_D4E1A96C8B2DA7E3(::Class_1_0BE87BAA5B57AD70* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::Class_1_0BE87BAA5B57AD70*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_D4E1A96C8B2DA7E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_646E6271011D2B6A(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_646E6271011D2B6A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_611A4C3EDF686400(::System::String* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_611A4C3EDF686400_OFFSET))(this, a1, a2);
	}

	::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800* Method_3_C0CF220EA2E34B64(::System::Int32 a1)
	{
		return ((::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_C0CF220EA2E34B64_OFFSET))(this, a1);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_37D613409A049EE3_4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_4_OFFSET))(this, a1);
	}

	::System::Void Method_3_24DED1B33C9AD6EC(::System::Int32 a1, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_24DED1B33C9AD6EC_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_3_D4E1A96C8B2DA7E3_1(::Class_1_0BE87BAA5B57AD70* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::Class_1_0BE87BAA5B57AD70*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_D4E1A96C8B2DA7E3_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F6DA862EBE90EAFF(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_F6DA862EBE90EAFF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Boolean Method_3_258B30823AB8BC65_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_258B30823AB8BC65_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_5_OFFSET))(this, a1);
	}

	::System::Void Method_3_2E276967CCB28384(::System::Int32 a1, ::System::Single a2, ::System::Action_1<::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Action_1<::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF>*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_2E276967CCB28384_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_37D613409A049EE3_6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_6_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_3_7064EC1C53A913C1(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_7064EC1C53A913C1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_04C5CE6A51925CD2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_04C5CE6A51925CD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_1D5426E472B2B850(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::String* a6, ::System::Single a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_1D5426E472B2B850_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_7BD1EDB18F3DEE60(::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_7BD1EDB18F3DEE60_OFFSET))(this, a1);
	}

	::System::Void Method_3_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_3_A134E903C4692403(::Class_1_9465CC52E1CFB15A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_3_919B6C5967564C65(::System::Int32 a1, ::Class_1_E3DC1E0D82B1C1F3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_E3DC1E0D82B1C1F3*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_919B6C5967564C65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_48278047645E0369(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_48278047645E0369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_14153DBBD0548B19(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_14153DBBD0548B19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_7_OFFSET))(this, a1);
	}

	::System::Void Method_3_A3E94568D5184024_3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_A3E94568D5184024_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_410DD37938D07AB8(::System::Int32 a1, ::NodeGraph::MainCity::NavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_410DD37938D07AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E2A7EAAB713D5833(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_E2A7EAAB713D5833_OFFSET))(this, a1);
	}

	::System::Void Method_3_EE5494E7AF21C7B8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_EE5494E7AF21C7B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B398A0CD4E90F689(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_B398A0CD4E90F689_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C9B47BEED372D62(::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_0C9B47BEED372D62_OFFSET))(this, a1);
	}

	::System::Void Method_3_DDB702BF50EA3E25(::Class_0_16E4307DCC419505_15* a1, ::Class_3_A26677E63C832BEF* a2, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a3, ::Foundation::ViewObject::ViewObjectHandle a4, ::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_15*, ::Class_3_A26677E63C832BEF*, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83, ::Foundation::ViewObject::ViewObjectHandle, ::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_DDB702BF50EA3E25_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_3_7E9A70D64C4D5983(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_7E9A70D64C4D5983_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FEA110052E9ADC61(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Enum_3_443A885B4E84B185 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Enum_3_443A885B4E84B185))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_FEA110052E9ADC61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_54C30614B1DCCB85(::System::Int32 a1, ::NodeGraph::MainCity::NavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_54C30614B1DCCB85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_8_OFFSET))(this, a1);
	}

	::System::Void Method_3_5DBE0D8848C75126(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_5DBE0D8848C75126_OFFSET))(this, a1);
	}

	::System::Void Method_3_9F3AA33041047CD7(::System::Int32 a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_9F3AA33041047CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1376ADE26816B7E0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_1376ADE26816B7E0_OFFSET))(this, a1);
	}

	::System::Void Method_3_37D613409A049EE3_9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_9_OFFSET))(this, a1);
	}

	::System::Void Method_3_735790CBF17E3AEA(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_735790CBF17E3AEA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_EEC44F9DBB6CA7AB(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Foundation::AssetRequestHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_EEC44F9DBB6CA7AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3F662FD119B85D3A(::System::Int32 a1, ::NodeGraph::MainCity::InteractiveNavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::InteractiveNavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_3F662FD119B85D3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_37D613409A049EE3_10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_10_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_3_AA20D66933384854(::System::Int32 a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_AA20D66933384854_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_15*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_3_3F662FD119B85D3A_1(::System::Int32 a1, ::NodeGraph::MainCity::InteractiveNavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::InteractiveNavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_3F662FD119B85D3A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D1CDB2FF551302FA(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_D1CDB2FF551302FA_OFFSET))(this, a1);
	}

	::System::Void Method_3_37D613409A049EE3_11(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_37D613409A049EE3_11_OFFSET))(this, a1);
	}

	::System::Void Method_3_919B6C5967564C65_1(::System::Int32 a1, ::Class_1_E3DC1E0D82B1C1F3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_E3DC1E0D82B1C1F3*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_METHOD_3_919B6C5967564C65_1_OFFSET))(this, a1, a2);
	}
};
