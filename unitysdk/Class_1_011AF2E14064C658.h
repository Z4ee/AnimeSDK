#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_011AF2E14064C658_Enum_3_F3FB71F6AE04B769.h"
#include "unitysdk/Class_1_011AF2E14064C658_Struct_2_15A3FA519D8875C2.h"
#include "unitysdk/Class_1_011AF2E14064C658_Struct_2_87FF019AA8F8935A.h"
#include "unitysdk/Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_5430DDABF48F9EFB.h"
#include "unitysdk/Enum_3_FAE144EE9510F878.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_599;
class Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F;
class Class_1_449B1BB2E3AA2D13;
class Class_1_46FECA8E1D551D46_9;
class Class_1_663AFC2250EC21C9;
class Class_1_8C28E085C991E9A7;
class Class_2_208CC9941471731A_239;
class Class_2_DB627EC47B0F0B11;
class Class_2_F6579EDC26D1BFF1;
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_011AF2E14064C658_METHOD_1_03DF2F822416454D_OFFSET UNITYSDK_OFFSET(0x1564AE70)
#define CLASS_1_011AF2E14064C658_METHOD_1_07905DF18E34A6CC_OFFSET UNITYSDK_OFFSET(0x1564D6C0)
#define CLASS_1_011AF2E14064C658_METHOD_1_0DBA10B99702F726_OFFSET UNITYSDK_OFFSET(0x1564D860)
#define CLASS_1_011AF2E14064C658_METHOD_1_0E0CB8BEE9ABC4DD_OFFSET UNITYSDK_OFFSET(0x1564F350)
#define CLASS_1_011AF2E14064C658_METHOD_1_10967FECA145C9BA_OFFSET UNITYSDK_OFFSET(0x1564C8E0)
#define CLASS_1_011AF2E14064C658_METHOD_1_1213C5437552BF2D_OFFSET UNITYSDK_OFFSET(0x1564B850)
#define CLASS_1_011AF2E14064C658_METHOD_1_14553DD20FA83DC6_OFFSET UNITYSDK_OFFSET(0x15647AC0)
#define CLASS_1_011AF2E14064C658_METHOD_1_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x15648E90)
#define CLASS_1_011AF2E14064C658_METHOD_1_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x1564D310)
#define CLASS_1_011AF2E14064C658_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x15645AC0)
#define CLASS_1_011AF2E14064C658_METHOD_1_2050A5829272D58F_OFFSET UNITYSDK_OFFSET(0x15651AC0)
#define CLASS_1_011AF2E14064C658_METHOD_1_2B2BF62F2A301B46_OFFSET UNITYSDK_OFFSET(0x15650520)
#define CLASS_1_011AF2E14064C658_METHOD_1_2D5C3D053AF9AA47_OFFSET UNITYSDK_OFFSET(0x1564D4E0)
#define CLASS_1_011AF2E14064C658_METHOD_1_2F045917300CBCEB_OFFSET UNITYSDK_OFFSET(0x1564C820)
#define CLASS_1_011AF2E14064C658_METHOD_1_30DE355FB41B6A3E_OFFSET UNITYSDK_OFFSET(0x15647740)
#define CLASS_1_011AF2E14064C658_METHOD_1_3AFD10932D5A27E7_OFFSET UNITYSDK_OFFSET(0x156499C0)
#define CLASS_1_011AF2E14064C658_METHOD_1_3B6DE532CA77D7C1_OFFSET UNITYSDK_OFFSET(0x1564CFC0)
#define CLASS_1_011AF2E14064C658_METHOD_1_3D28D344FC6E09F5_OFFSET UNITYSDK_OFFSET(0x1564FB70)
#define CLASS_1_011AF2E14064C658_METHOD_1_3D71D9AB5595F7DB_OFFSET UNITYSDK_OFFSET(0x156453E0)
#define CLASS_1_011AF2E14064C658_METHOD_1_3DF03F7D4CBAC619_OFFSET UNITYSDK_OFFSET(0x1564E850)
#define CLASS_1_011AF2E14064C658_METHOD_1_3E606C14B0000AFA_OFFSET UNITYSDK_OFFSET(0x15643FB0)
#define CLASS_1_011AF2E14064C658_METHOD_1_461D232A2E5A75CF_OFFSET UNITYSDK_OFFSET(0x15648D40)
#define CLASS_1_011AF2E14064C658_METHOD_1_46FFE084A15C0C9E_OFFSET UNITYSDK_OFFSET(0x1564AD00)
#define CLASS_1_011AF2E14064C658_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x1564E670)
#define CLASS_1_011AF2E14064C658_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x156484B0)
#define CLASS_1_011AF2E14064C658_METHOD_1_4D0158B5AFEAB6D8_OFFSET UNITYSDK_OFFSET(0x15649D20)
#define CLASS_1_011AF2E14064C658_METHOD_1_4D0AEB0455964937_OFFSET UNITYSDK_OFFSET(0x15644A50)
#define CLASS_1_011AF2E14064C658_METHOD_1_537A827D67D6BC8C_OFFSET UNITYSDK_OFFSET(0x15649E70)
#define CLASS_1_011AF2E14064C658_METHOD_1_565AA3EF89C82663_OFFSET UNITYSDK_OFFSET(0x15645E10)
#define CLASS_1_011AF2E14064C658_METHOD_1_590662BA0A0EF3EC_OFFSET UNITYSDK_OFFSET(0x1564E310)
#define CLASS_1_011AF2E14064C658_METHOD_1_5F20AC40CCFE6518_OFFSET UNITYSDK_OFFSET(0x1564E130)
#define CLASS_1_011AF2E14064C658_METHOD_1_61BE273A1DF4ABA4_OFFSET UNITYSDK_OFFSET(0x15649850)
#define CLASS_1_011AF2E14064C658_METHOD_1_6284C5E2519D98CF_OFFSET UNITYSDK_OFFSET(0x15646FD0)
#define CLASS_1_011AF2E14064C658_METHOD_1_67011414F1571CD0_OFFSET UNITYSDK_OFFSET(0x1564D070)
#define CLASS_1_011AF2E14064C658_METHOD_1_6BE7F2D0E26AB78D_OFFSET UNITYSDK_OFFSET(0x1564CCF0)
#define CLASS_1_011AF2E14064C658_METHOD_1_6C4480FF0EF892B6_OFFSET UNITYSDK_OFFSET(0x15648FE0)
#define CLASS_1_011AF2E14064C658_METHOD_1_6CD62A079EEDC40E_OFFSET UNITYSDK_OFFSET(0x1564A340)
#define CLASS_1_011AF2E14064C658_METHOD_1_6D1A13494426F371_OFFSET UNITYSDK_OFFSET(0x156432B0)
#define CLASS_1_011AF2E14064C658_METHOD_1_6D1B3936952C8C03_OFFSET UNITYSDK_OFFSET(0x1564F1C0)
#define CLASS_1_011AF2E14064C658_METHOD_1_6E3B47F8C443B00F_OFFSET UNITYSDK_OFFSET(0x156447D0)
#define CLASS_1_011AF2E14064C658_METHOD_1_6E8208462322B8CB_OFFSET UNITYSDK_OFFSET(0x156471D0)
#define CLASS_1_011AF2E14064C658_METHOD_1_7052FA2A4BCDA198_OFFSET UNITYSDK_OFFSET(0x1564C160)
#define CLASS_1_011AF2E14064C658_METHOD_1_81065543FC4015DF_OFFSET UNITYSDK_OFFSET(0x1564CD80)
#define CLASS_1_011AF2E14064C658_METHOD_1_849EF40CB3B8D1F3_OFFSET UNITYSDK_OFFSET(0x1564BDA0)
#define CLASS_1_011AF2E14064C658_METHOD_1_8920C9E338EDC657_OFFSET UNITYSDK_OFFSET(0x156506A0)
#define CLASS_1_011AF2E14064C658_METHOD_1_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0x1564D9E0)
#define CLASS_1_011AF2E14064C658_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1564C610)
#define CLASS_1_011AF2E14064C658_METHOD_1_92213E3DB09159E7_OFFSET UNITYSDK_OFFSET(0x1564BEC0)
#define CLASS_1_011AF2E14064C658_METHOD_1_96CF8F91C9C6A4A2_OFFSET UNITYSDK_OFFSET(0x1564B7A0)
#define CLASS_1_011AF2E14064C658_METHOD_1_98D79906B0F97E1A_OFFSET UNITYSDK_OFFSET(0x1564A980)
#define CLASS_1_011AF2E14064C658_METHOD_1_9FF15493113A7B0C_OFFSET UNITYSDK_OFFSET(0x15650990)
#define CLASS_1_011AF2E14064C658_METHOD_1_A152E4019DFC6B03_OFFSET UNITYSDK_OFFSET(0x15651810)
#define CLASS_1_011AF2E14064C658_METHOD_1_A26FE467ACC99817_OFFSET UNITYSDK_OFFSET(0x1564F5E0)
#define CLASS_1_011AF2E14064C658_METHOD_1_A2733B4DBACFA5E8_OFFSET UNITYSDK_OFFSET(0x15649510)
#define CLASS_1_011AF2E14064C658_METHOD_1_A3CAAD00B71BFB18_OFFSET UNITYSDK_OFFSET(0x156514C0)
#define CLASS_1_011AF2E14064C658_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x15645720)
#define CLASS_1_011AF2E14064C658_METHOD_1_A6EDAFC4AECAD138_OFFSET UNITYSDK_OFFSET(0x15644AF0)
#define CLASS_1_011AF2E14064C658_METHOD_1_AAD69C1FDF90A82C_OFFSET UNITYSDK_OFFSET(0x15651040)
#define CLASS_1_011AF2E14064C658_METHOD_1_AE168033B0E27C74_OFFSET UNITYSDK_OFFSET(0x15647910)
#define CLASS_1_011AF2E14064C658_METHOD_1_B1438E750EBD53E1_OFFSET UNITYSDK_OFFSET(0x1564F080)
#define CLASS_1_011AF2E14064C658_METHOD_1_B76E5FE3CE9BDF93_1_OFFSET UNITYSDK_OFFSET(0x1564E720)
#define CLASS_1_011AF2E14064C658_METHOD_1_B76E5FE3CE9BDF93_OFFSET UNITYSDK_OFFSET(0x1564DBF0)
#define CLASS_1_011AF2E14064C658_METHOD_1_B9356978399E6612_OFFSET UNITYSDK_OFFSET(0x15650190)
#define CLASS_1_011AF2E14064C658_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1564A7B0)
#define CLASS_1_011AF2E14064C658_METHOD_1_BEAE0A093C62A95B_OFFSET UNITYSDK_OFFSET(0x1564B390)
#define CLASS_1_011AF2E14064C658_METHOD_1_C16CB82DBE82BC4E_OFFSET UNITYSDK_OFFSET(0x15649730)
#define CLASS_1_011AF2E14064C658_METHOD_1_C2B5819477F73B7E_OFFSET UNITYSDK_OFFSET(0x1564FFF0)
#define CLASS_1_011AF2E14064C658_METHOD_1_C5A957EF760D2A06_OFFSET UNITYSDK_OFFSET(0x1564BF20)
#define CLASS_1_011AF2E14064C658_METHOD_1_C66F8C38FE9A0ADF_OFFSET UNITYSDK_OFFSET(0x15651C80)
#define CLASS_1_011AF2E14064C658_METHOD_1_CE3357F99AC5D697_OFFSET UNITYSDK_OFFSET(0x1564D020)
#define CLASS_1_011AF2E14064C658_METHOD_1_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x1564F6F0)
#define CLASS_1_011AF2E14064C658_METHOD_1_D6A7F05AEC159B79_OFFSET UNITYSDK_OFFSET(0x15649170)
#define CLASS_1_011AF2E14064C658_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x156512B0)
#define CLASS_1_011AF2E14064C658_METHOD_1_DCB41335CC9E7FBD_OFFSET UNITYSDK_OFFSET(0x1564E530)
#define CLASS_1_011AF2E14064C658_METHOD_1_DCCCC0BCA742D290_OFFSET UNITYSDK_OFFSET(0x15645320)
#define CLASS_1_011AF2E14064C658_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x1564A600)
#define CLASS_1_011AF2E14064C658_METHOD_1_DFE2F213AF3F696D_OFFSET UNITYSDK_OFFSET(0x156516B0)
#define CLASS_1_011AF2E14064C658_METHOD_1_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0x15645460)
#define CLASS_1_011AF2E14064C658_METHOD_1_E2D2F8728F0F3C8B_OFFSET UNITYSDK_OFFSET(0x15647DB0)
#define CLASS_1_011AF2E14064C658_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x156458D0)
#define CLASS_1_011AF2E14064C658_METHOD_1_E83F7689AC5B7231_OFFSET UNITYSDK_OFFSET(0x15647530)
#define CLASS_1_011AF2E14064C658_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x1564DD20)
#define CLASS_1_011AF2E14064C658_METHOD_1_EE8E5F15C4E5FB20_OFFSET UNITYSDK_OFFSET(0x15650C10)
#define CLASS_1_011AF2E14064C658_METHOD_1_EF7AFD3AA986BD3C_OFFSET UNITYSDK_OFFSET(0x15646020)
#define CLASS_1_011AF2E14064C658_METHOD_1_F67DB855542DD4C2_OFFSET UNITYSDK_OFFSET(0x1564F910)
#define CLASS_1_011AF2E14064C658_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15650490)
#define CLASS_1_011AF2E14064C658_METHOD_1_F88DB2783BB43746_OFFSET UNITYSDK_OFFSET(0x1564BC20)
#define CLASS_1_011AF2E14064C658_METHOD_1_FCD65F1D31C688F9_OFFSET UNITYSDK_OFFSET(0x1564E390)
#define CLASS_1_011AF2E14064C658__CCTOR_OFFSET UNITYSDK_OFFSET(0x15643210)

inline static constexpr unsigned int Class_1_011AF2E14064C658_TypeDefinitionIndex = 70800;

class Class_1_011AF2E14064C658 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_011AF2E14064C658_TypeDefinitionIndex)->GetStaticField(0x36C50);
	}
	static ::Foundation::Coroutine::CoroutineHandle* StaticGet_Field_1_2()
	{
		return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_011AF2E14064C658_TypeDefinitionIndex)->GetStaticField(0xD910);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_011AF2E14064C658_TypeDefinitionIndex)->GetStaticField(0xD914);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Boolean Field_1_5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_6D1A13494426F371(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::MonoSpawnPoint*& a3, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::MonoSpawnPoint*&, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6D1A13494426F371_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4D0AEB0455964937(::Enum_3_FAE144EE9510F878 a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::Enum_3_FAE144EE9510F878, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_4D0AEB0455964937_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A6EDAFC4AECAD138(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A6EDAFC4AECAD138_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_DCCCC0BCA742D290()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_DCCCC0BCA742D290_OFFSET))();
	}

	static ::System::Void Method_1_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_E0078F6C95D82674_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A6CE5DAA2387E1E2_OFFSET))();
	}

	static ::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_E693A0026D178D8E_OFFSET))();
	}

	static ::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_1947BC35B7A7FCB8_OFFSET))();
	}

	static ::System::Void Method_1_565AA3EF89C82663(::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F* a1)
	{
		return ((::System::Void(*)(::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_565AA3EF89C82663_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_599* Method_1_6284C5E2519D98CF(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_599*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6284C5E2519D98CF_OFFSET))(a1);
	}

	static ::System::Void Method_1_6E8208462322B8CB(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6E8208462322B8CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_14553DD20FA83DC6(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_14553DD20FA83DC6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E2D2F8728F0F3C8B(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_E2D2F8728F0F3C8B_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_461D232A2E5A75CF(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_461D232A2E5A75CF_OFFSET))(a1, a2);
	}

	static ::Class_1_449B1BB2E3AA2D13* Method_1_1561BFA77991A03A()
	{
		return ((::Class_1_449B1BB2E3AA2D13*(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_1561BFA77991A03A_OFFSET))();
	}

	static ::System::Void Method_1_6C4480FF0EF892B6(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6C4480FF0EF892B6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A2733B4DBACFA5E8(::System::String* a1, ::System::UInt32 a2, ::MoleMole::Config::StageEntry* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A2733B4DBACFA5E8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_61BE273A1DF4ABA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_61BE273A1DF4ABA4_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D0158B5AFEAB6D8(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_4D0158B5AFEAB6D8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_30DE355FB41B6A3E(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_30DE355FB41B6A3E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D6A7F05AEC159B79(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_D6A7F05AEC159B79_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Vector2Int Method_1_6CD62A079EEDC40E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6CD62A079EEDC40E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_DD1EE3A48E307831_OFFSET))();
	}

	static ::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_BBA49FAB086F388D_OFFSET))();
	}

	static ::System::Boolean Method_1_98D79906B0F97E1A(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_98D79906B0F97E1A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E83F7689AC5B7231(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_E83F7689AC5B7231_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03DF2F822416454D(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_03DF2F822416454D_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_BEAE0A093C62A95B(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_BEAE0A093C62A95B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_537A827D67D6BC8C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_537A827D67D6BC8C_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_96CF8F91C9C6A4A2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_96CF8F91C9C6A4A2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3E606C14B0000AFA(::MoleMole::Config::SceneConfigRuntimeDataArea& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3E606C14B0000AFA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1213C5437552BF2D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_1213C5437552BF2D_OFFSET))();
	}

	static ::Foundation::Coroutine::CoroutineHandle Method_1_849EF40CB3B8D1F3(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_849EF40CB3B8D1F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C5A957EF760D2A06(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Boolean(*)(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_C5A957EF760D2A06_OFFSET))(a1);
	}

	static ::System::Void Method_1_7052FA2A4BCDA198(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_011AF2E14064C658_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_7052FA2A4BCDA198_OFFSET))(a1);
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::System::Void Method_1_2F045917300CBCEB(::System::String* a1, ::UnityEngine::LogType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_2F045917300CBCEB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_10967FECA145C9BA(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Class_1_011AF2E14064C658_Struct_2_15A3FA519D8875C2& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Class_1_011AF2E14064C658_Struct_2_15A3FA519D8875C2&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_10967FECA145C9BA_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_6BE7F2D0E26AB78D()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6BE7F2D0E26AB78D_OFFSET))();
	}

	static ::System::Boolean Method_1_3AFD10932D5A27E7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3AFD10932D5A27E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B6DE532CA77D7C1(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Void(*)(::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3B6DE532CA77D7C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_CE3357F99AC5D697(::System::String* a1, ::UnityEngine::LogType a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_CE3357F99AC5D697_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_67011414F1571CD0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_67011414F1571CD0_OFFSET))(a1);
	}

	static ::System::Void Method_1_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_1832E29FF208A65E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F88DB2783BB43746(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_F88DB2783BB43746_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D5C3D053AF9AA47(::System::UInt32 a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_2D5C3D053AF9AA47_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_07905DF18E34A6CC(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_07905DF18E34A6CC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0DBA10B99702F726(::System::Type*& a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType& a2)
	{
		return ((::System::Boolean(*)(::System::Type*&, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_0DBA10B99702F726_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_8DF47EF45ABD2A6C_1_OFFSET))();
	}

	static ::System::Boolean Method_1_B76E5FE3CE9BDF93(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_B76E5FE3CE9BDF93_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_EB7282B6745B4611_OFFSET))();
	}

	static ::System::Void Method_1_AE168033B0E27C74(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_AE168033B0E27C74_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5F20AC40CCFE6518(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_5F20AC40CCFE6518_OFFSET))(a1);
	}

	static ::System::Single Method_1_FCD65F1D31C688F9(::System::Boolean a1)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_FCD65F1D31C688F9_OFFSET))(a1);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B76E5FE3CE9BDF93_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_B76E5FE3CE9BDF93_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C16CB82DBE82BC4E(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46_9* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_9*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_C16CB82DBE82BC4E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_B1438E750EBD53E1(::System::Collections::Generic::List_1<::System::String*>* a1, ::Enum_3_5430DDABF48F9EFB a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_B1438E750EBD53E1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DCB41335CC9E7FBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_DCB41335CC9E7FBD_OFFSET))();
	}

	static ::System::Void Method_1_590662BA0A0EF3EC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_590662BA0A0EF3EC_OFFSET))(a1);
	}

	static ::Struct_2_9DFB39885391F41D Method_1_6D1B3936952C8C03(::System::String* a1)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6D1B3936952C8C03_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0E0CB8BEE9ABC4DD(::MoleMole::Level::OverrideScenePerformDelayConfig& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_0E0CB8BEE9ABC4DD_OFFSET))(a1);
	}

	static ::System::String* Method_1_A26FE467ACC99817(::MoleMole::EntityHandle a1)
	{
		return ((::System::String*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A26FE467ACC99817_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3DF03F7D4CBAC619(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46_9* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_9*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3DF03F7D4CBAC619_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_D675670EA8F43CD1_OFFSET))(a1);
	}

	static ::System::Void Method_1_EF7AFD3AA986BD3C(::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F* a1, ::System::String*& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_1_011AF2E14064C658_Class_1_51CA10D8796CFF9F*, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_EF7AFD3AA986BD3C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C2B5819477F73B7E(::System::Int32 a1, ::Class_1_663AFC2250EC21C9* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_1_663AFC2250EC21C9*, ::System::Action_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_C2B5819477F73B7E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_6E3B47F8C443B00F(::MoleMole::MonoSpawnPoint* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_6E3B47F8C443B00F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B9356978399E6612(::Class_0_16E4307DCC419505_599* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_599*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_B9356978399E6612_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_1_81065543FC4015DF()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_81065543FC4015DF_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_1_2B2BF62F2A301B46()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_2B2BF62F2A301B46_OFFSET))();
	}

	static ::System::Boolean Method_1_8920C9E338EDC657(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_8920C9E338EDC657_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9FF15493113A7B0C(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_9FF15493113A7B0C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EE8E5F15C4E5FB20(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_EE8E5F15C4E5FB20_OFFSET))(a1);
	}

	static ::Class_2_DB627EC47B0F0B11* Method_1_AAD69C1FDF90A82C()
	{
		return ((::Class_2_DB627EC47B0F0B11*(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_AAD69C1FDF90A82C_OFFSET))();
	}

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}

	static ::System::Boolean Method_1_F67DB855542DD4C2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_F67DB855542DD4C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D28D344FC6E09F5(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3D28D344FC6E09F5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A3CAAD00B71BFB18(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Enum_3_5430DDABF48F9EFB a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Collections::Generic::HashSet_1<::System::String*>* a5)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A3CAAD00B71BFB18_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_4A41C63BFE58D26F_OFFSET))();
	}

	static ::System::Void Method_1_DFE2F213AF3F696D(::Class_2_F6579EDC26D1BFF1* a1)
	{
		return ((::System::Void(*)(::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_DFE2F213AF3F696D_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_239* Method_1_3D71D9AB5595F7DB()
	{
		return ((::Class_2_208CC9941471731A_239*(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_3D71D9AB5595F7DB_OFFSET))();
	}

	static ::System::Boolean Method_1_A152E4019DFC6B03()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_A152E4019DFC6B03_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_92213E3DB09159E7(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_92213E3DB09159E7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2050A5829272D58F(::Class_1_011AF2E14064C658_Enum_3_F3FB71F6AE04B769& a1)
	{
		return ((::System::Boolean(*)(::Class_1_011AF2E14064C658_Enum_3_F3FB71F6AE04B769&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_2050A5829272D58F_OFFSET))(a1);
	}

	static ::System::Void Method_1_46FFE084A15C0C9E(::MoleMole::Config::InputGroup a1, ::Class_1_011AF2E14064C658_Struct_2_87FF019AA8F8935A& a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::InputGroup, ::Class_1_011AF2E14064C658_Struct_2_87FF019AA8F8935A&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_46FFE084A15C0C9E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C66F8C38FE9A0ADF(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_METHOD_1_C66F8C38FE9A0ADF_OFFSET))(a1, a2);
	}
};
