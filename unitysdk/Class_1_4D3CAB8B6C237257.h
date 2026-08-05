#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4D3CAB8B6C237257_Enum_3_0A25083308CFA7F5.h"
#include "unitysdk/Class_1_4D3CAB8B6C237257_Struct_2_15A3FA519D8875C2.h"
#include "unitysdk/Class_1_4D3CAB8B6C237257_Struct_2_87FF019AA8F8935A.h"
#include "unitysdk/Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1.h"
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

class Class_0_16E4307DCC419505_367;
class Class_1_449B1BB2E3AA2D13;
class Class_1_46FECA8E1D551D46;
class Class_1_4D3CAB8B6C237257_Class_1_51CA10D8796CFF9F;
class Class_1_8C28E085C991E9A7;
class Class_1_BFC2F9D5895EB2FB;
class Class_2_208CC9941471731A_869;
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

#define CLASS_1_4D3CAB8B6C237257_METHOD_1_03DF2F822416454D_OFFSET UNITYSDK_OFFSET(0x15436230)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_0736EC4D4BD0646D_OFFSET UNITYSDK_OFFSET(0x15430420)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_0DBA10B99702F726_OFFSET UNITYSDK_OFFSET(0x15434C90)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_0E0CB8BEE9ABC4DD_OFFSET UNITYSDK_OFFSET(0x15430680)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_0E0D4BE7F6F24498_OFFSET UNITYSDK_OFFSET(0x1542EC00)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_11424DD5C0BB0487_OFFSET UNITYSDK_OFFSET(0x154372D0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1213C5437552BF2D_OFFSET UNITYSDK_OFFSET(0x154376E0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_14553DD20FA83DC6_OFFSET UNITYSDK_OFFSET(0x15429CA0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1542EAB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1638766D20343970_1_OFFSET UNITYSDK_OFFSET(0x15430A60)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1638766D20343970_OFFSET UNITYSDK_OFFSET(0x15430260)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x15432270)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x15430B90)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_2B2BF62F2A301B46_OFFSET UNITYSDK_OFFSET(0x1542E7B0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_2D5C3D053AF9AA47_OFFSET UNITYSDK_OFFSET(0x154380F0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_2F045917300CBCEB_OFFSET UNITYSDK_OFFSET(0x1542C5B0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_3302B096FCB70334_OFFSET UNITYSDK_OFFSET(0x15431930)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_37681431023A0C18_OFFSET UNITYSDK_OFFSET(0x1542C700)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_3B6DE532CA77D7C1_OFFSET UNITYSDK_OFFSET(0x15434ED0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_3D28D344FC6E09F5_OFFSET UNITYSDK_OFFSET(0x154353B0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_3D71D9AB5595F7DB_OFFSET UNITYSDK_OFFSET(0x1542F910)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_45EF4B7A024BEE9F_OFFSET UNITYSDK_OFFSET(0x1542BE70)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_461D232A2E5A75CF_OFFSET UNITYSDK_OFFSET(0x1542F5D0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_46FFE084A15C0C9E_OFFSET UNITYSDK_OFFSET(0x1542B610)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x15436750)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x1542DF20)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_4D0AEB0455964937_OFFSET UNITYSDK_OFFSET(0x1542B250)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_51C5CC3DC00E8BA5_OFFSET UNITYSDK_OFFSET(0x15433DA0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_5523DD70F13D7CC3_OFFSET UNITYSDK_OFFSET(0x1542D000)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_565AA3EF89C82663_OFFSET UNITYSDK_OFFSET(0x1542CDF0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_571FA3C9F915CC8F_OFFSET UNITYSDK_OFFSET(0x1542CA70)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_590662BA0A0EF3EC_OFFSET UNITYSDK_OFFSET(0x1542BBE0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_5F20AC40CCFE6518_OFFSET UNITYSDK_OFFSET(0x1542BA00)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_61A8D3DFC8CAD4BA_OFFSET UNITYSDK_OFFSET(0x15437AB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_6284C5E2519D98CF_OFFSET UNITYSDK_OFFSET(0x1542F3D0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_67011414F1571CD0_OFFSET UNITYSDK_OFFSET(0x15431080)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_6BE7F2D0E26AB78D_OFFSET UNITYSDK_OFFSET(0x15430390)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_6CD62A079EEDC40E_OFFSET UNITYSDK_OFFSET(0x15437420)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_6D1B3936952C8C03_OFFSET UNITYSDK_OFFSET(0x15433C10)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_6E3B47F8C443B00F_OFFSET UNITYSDK_OFFSET(0x1542B780)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_73CABE3EEA91DEEF_OFFSET UNITYSDK_OFFSET(0x15431490)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_79FCF1C8BCC3CF91_OFFSET UNITYSDK_OFFSET(0x1542B2F0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_81065543FC4015DF_OFFSET UNITYSDK_OFFSET(0x15430020)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_832F8F6C128ED00D_OFFSET UNITYSDK_OFFSET(0x1542ED70)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_849EF40CB3B8D1F3_OFFSET UNITYSDK_OFFSET(0x15431A50)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_891AE2223A8E0EF9_OFFSET UNITYSDK_OFFSET(0x1542C270)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_8920C9E338EDC657_OFFSET UNITYSDK_OFFSET(0x15432A40)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_8DF47EF45ABD2A6C_1_OFFSET UNITYSDK_OFFSET(0x15434A80)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1542FD60)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_92213E3DB09159E7_OFFSET UNITYSDK_OFFSET(0x15431020)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_9627DC6A920C2843_OFFSET UNITYSDK_OFFSET(0x15429FA0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_96CF8F91C9C6A4A2_OFFSET UNITYSDK_OFFSET(0x1542FF70)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_98D79906B0F97E1A_OFFSET UNITYSDK_OFFSET(0x154326C0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_9DD0CFEE2F798CCA_OFFSET UNITYSDK_OFFSET(0x1542BC60)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_9F629D40BBEFE27C_OFFSET UNITYSDK_OFFSET(0x15430920)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A152E4019DFC6B03_OFFSET UNITYSDK_OFFSET(0x15434F30)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A3CAAD00B71BFB18_OFFSET UNITYSDK_OFFSET(0x1542A710)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A3F185FFB58656D5_OFFSET UNITYSDK_OFFSET(0x15431700)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A47513372EA43249_OFFSET UNITYSDK_OFFSET(0x154382D0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x15436080)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_A6EDAFC4AECAD138_OFFSET UNITYSDK_OFFSET(0x15434250)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_AE168033B0E27C74_OFFSET UNITYSDK_OFFSET(0x1542CC40)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_B9356978399E6612_OFFSET UNITYSDK_OFFSET(0x1542F0D0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x154351E0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_BD123B271DA906F1_OFFSET UNITYSDK_OFFSET(0x15435EE0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_BE7FF6CFD6088C06_OFFSET UNITYSDK_OFFSET(0x15432D20)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_C2B5819477F73B7E_OFFSET UNITYSDK_OFFSET(0x15437F40)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_C66F8C38FE9A0ADF_OFFSET UNITYSDK_OFFSET(0x15431320)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_CE3357F99AC5D697_OFFSET UNITYSDK_OFFSET(0x1542BE20)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x1542F990)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_D6A7F05AEC159B79_OFFSET UNITYSDK_OFFSET(0x1542AEB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x15437D30)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_DCB41335CC9E7FBD_OFFSET UNITYSDK_OFFSET(0x15430EE0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_DCCCC0BCA742D290_OFFSET UNITYSDK_OFFSET(0x15434E10)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x1542FBB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_DD3690FA8B4A8A0C_OFFSET UNITYSDK_OFFSET(0x15436AB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_DFE2F213AF3F696D_OFFSET UNITYSDK_OFFSET(0x15433AB0)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0x15436800)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_E2D2F8728F0F3C8B_OFFSET UNITYSDK_OFFSET(0x15431B70)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1542F720)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_E83F7689AC5B7231_OFFSET UNITYSDK_OFFSET(0x1542B400)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x15435840)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_F67DB855542DD4C2_OFFSET UNITYSDK_OFFSET(0x15432460)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_F6A078ACAF11D793_OFFSET UNITYSDK_OFFSET(0x1542A900)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1542C670)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_F88DB2783BB43746_OFFSET UNITYSDK_OFFSET(0x1542E930)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_FCD65F1D31C688F9_OFFSET UNITYSDK_OFFSET(0x153FD240)
#define CLASS_1_4D3CAB8B6C237257_METHOD_1_FD2EB05B65A7C6F7_OFFSET UNITYSDK_OFFSET(0x1542AD10)
#define CLASS_1_4D3CAB8B6C237257__CCTOR_OFFSET UNITYSDK_OFFSET(0x15429C00)

inline static constexpr unsigned int Class_1_4D3CAB8B6C237257_TypeDefinitionIndex = 87010;

class Class_1_4D3CAB8B6C237257 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_TypeDefinitionIndex)->GetStaticField(0x3E880);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_TypeDefinitionIndex)->GetStaticField(0xE990);
	}
	static ::Foundation::Coroutine::CoroutineHandle* StaticGet_Field_1_7()
	{
		return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_TypeDefinitionIndex)->GetStaticField(0xE994);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Boolean Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_14553DD20FA83DC6(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_14553DD20FA83DC6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9627DC6A920C2843(::MoleMole::Config::SceneConfigRuntimeDataArea& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_9627DC6A920C2843_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A3CAAD00B71BFB18(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Enum_3_5430DDABF48F9EFB a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Collections::Generic::HashSet_1<::System::String*>* a5)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A3CAAD00B71BFB18_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_FD2EB05B65A7C6F7(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_FD2EB05B65A7C6F7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4D0AEB0455964937(::Enum_3_FAE144EE9510F878 a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::Enum_3_FAE144EE9510F878, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_4D0AEB0455964937_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_79FCF1C8BCC3CF91(::MoleMole::EntityHandle a1)
	{
		return ((::System::String*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_79FCF1C8BCC3CF91_OFFSET))(a1);
	}

	static ::System::Void Method_1_E83F7689AC5B7231(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_E83F7689AC5B7231_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_6E3B47F8C443B00F(::MoleMole::MonoSpawnPoint* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_6E3B47F8C443B00F_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F20AC40CCFE6518(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_5F20AC40CCFE6518_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9DD0CFEE2F798CCA(::Class_1_4D3CAB8B6C237257_Enum_3_0A25083308CFA7F5& a1)
	{
		return ((::System::Boolean(*)(::Class_1_4D3CAB8B6C237257_Enum_3_0A25083308CFA7F5&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_9DD0CFEE2F798CCA_OFFSET))(a1);
	}

	static ::System::Void Method_1_CE3357F99AC5D697(::System::String* a1, ::UnityEngine::LogType a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_CE3357F99AC5D697_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_45EF4B7A024BEE9F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_45EF4B7A024BEE9F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D6A7F05AEC159B79(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_D6A7F05AEC159B79_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2F045917300CBCEB(::System::String* a1, ::UnityEngine::LogType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_2F045917300CBCEB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_37681431023A0C18(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_37681431023A0C18_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_565AA3EF89C82663(::Class_1_4D3CAB8B6C237257_Class_1_51CA10D8796CFF9F* a1)
	{
		return ((::System::Void(*)(::Class_1_4D3CAB8B6C237257_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_565AA3EF89C82663_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_4A41C63BFE58D26F_OFFSET))();
	}

	static ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_1_2B2BF62F2A301B46()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_2B2BF62F2A301B46_OFFSET))();
	}

	static ::System::Boolean Method_1_F88DB2783BB43746(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_F88DB2783BB43746_OFFSET))(a1);
	}

	static ::Class_1_449B1BB2E3AA2D13* Method_1_1561BFA77991A03A()
	{
		return ((::Class_1_449B1BB2E3AA2D13*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1561BFA77991A03A_OFFSET))();
	}

	static ::System::Void Method_1_46FFE084A15C0C9E(::MoleMole::Config::InputGroup a1, ::Class_1_4D3CAB8B6C237257_Struct_2_87FF019AA8F8935A& a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::InputGroup, ::Class_1_4D3CAB8B6C237257_Struct_2_87FF019AA8F8935A&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_46FFE084A15C0C9E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0E0D4BE7F6F24498(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_0E0D4BE7F6F24498_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B9356978399E6612(::Class_0_16E4307DCC419505_367* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_367*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_B9356978399E6612_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_367* Method_1_6284C5E2519D98CF(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_367*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_6284C5E2519D98CF_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_461D232A2E5A75CF(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_461D232A2E5A75CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_832F8F6C128ED00D(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_832F8F6C128ED00D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_E693A0026D178D8E_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_869* Method_1_3D71D9AB5595F7DB()
	{
		return ((::Class_2_208CC9941471731A_869*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_3D71D9AB5595F7DB_OFFSET))();
	}

	static ::System::Void Method_1_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_D675670EA8F43CD1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_DD1EE3A48E307831_OFFSET))();
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_96CF8F91C9C6A4A2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_96CF8F91C9C6A4A2_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_1_81065543FC4015DF()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_81065543FC4015DF_OFFSET))();
	}

	static ::System::Boolean Method_1_891AE2223A8E0EF9()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_891AE2223A8E0EF9_OFFSET))();
	}

	static ::System::Boolean Method_1_1638766D20343970(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1638766D20343970_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_6BE7F2D0E26AB78D()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_6BE7F2D0E26AB78D_OFFSET))();
	}

	static ::Class_2_DB627EC47B0F0B11* Method_1_0736EC4D4BD0646D()
	{
		return ((::Class_2_DB627EC47B0F0B11*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_0736EC4D4BD0646D_OFFSET))();
	}

	static ::System::Boolean Method_1_0E0CB8BEE9ABC4DD(::MoleMole::Level::OverrideScenePerformDelayConfig& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_0E0CB8BEE9ABC4DD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1638766D20343970_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1638766D20343970_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1947BC35B7A7FCB8_OFFSET))();
	}

	static ::System::Single Method_1_DCB41335CC9E7FBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_DCB41335CC9E7FBD_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_92213E3DB09159E7(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_92213E3DB09159E7_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_67011414F1571CD0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_67011414F1571CD0_OFFSET))(a1);
	}

	static ::System::Void Method_1_C66F8C38FE9A0ADF(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_C66F8C38FE9A0ADF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73CABE3EEA91DEEF(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1& a1)
	{
		return ((::System::Boolean(*)(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_73CABE3EEA91DEEF_OFFSET))(a1);
	}

	static ::System::Void Method_1_A3F185FFB58656D5(::System::String* a1, ::System::UInt32 a2, ::MoleMole::Config::StageEntry* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A3F185FFB58656D5_OFFSET))(a1, a2, a3, a4);
	}

	static ::Foundation::Coroutine::CoroutineHandle Method_1_849EF40CB3B8D1F3(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_849EF40CB3B8D1F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E2D2F8728F0F3C8B(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1& a1)
	{
		return ((::System::Void(*)(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_E2D2F8728F0F3C8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1832E29FF208A65E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F67DB855542DD4C2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_F67DB855542DD4C2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9F629D40BBEFE27C(::System::Collections::Generic::List_1<::System::String*>* a1, ::Enum_3_5430DDABF48F9EFB a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_9F629D40BBEFE27C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8920C9E338EDC657(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_8920C9E338EDC657_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BE7FF6CFD6088C06(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::MonoSpawnPoint*& a3, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::MonoSpawnPoint*&, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_BE7FF6CFD6088C06_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_DFE2F213AF3F696D(::Class_2_F6579EDC26D1BFF1* a1)
	{
		return ((::System::Void(*)(::Class_2_F6579EDC26D1BFF1*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_DFE2F213AF3F696D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AE168033B0E27C74(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_AE168033B0E27C74_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_9DFB39885391F41D Method_1_6D1B3936952C8C03(::System::String* a1)
	{
		return ((::Struct_2_9DFB39885391F41D(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_6D1B3936952C8C03_OFFSET))(a1);
	}

	static ::System::Void Method_1_51C5CC3DC00E8BA5(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1& a1)
	{
		return ((::System::Void(*)(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_51C5CC3DC00E8BA5_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6EDAFC4AECAD138(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A6EDAFC4AECAD138_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_8DF47EF45ABD2A6C_1_OFFSET))();
	}

	static ::System::Single Method_1_FCD65F1D31C688F9(::System::Boolean a1)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_FCD65F1D31C688F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0DBA10B99702F726(::System::Type*& a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType& a2)
	{
		return ((::System::Boolean(*)(::System::Type*&, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_0DBA10B99702F726_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_DCCCC0BCA742D290()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_DCCCC0BCA742D290_OFFSET))();
	}

	static ::System::Void Method_1_3B6DE532CA77D7C1(::Struct_2_9DFB39885391F41D a1)
	{
		return ((::System::Void(*)(::Struct_2_9DFB39885391F41D))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_3B6DE532CA77D7C1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A152E4019DFC6B03()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A152E4019DFC6B03_OFFSET))();
	}

	static ::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_BBA49FAB086F388D_OFFSET))();
	}

	static ::System::Void Method_1_5523DD70F13D7CC3(::Class_1_4D3CAB8B6C237257_Class_1_51CA10D8796CFF9F* a1, ::System::String*& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_1_4D3CAB8B6C237257_Class_1_51CA10D8796CFF9F*, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_5523DD70F13D7CC3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BD123B271DA906F1(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_BD123B271DA906F1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A6CE5DAA2387E1E2_OFFSET))();
	}

	static ::System::Boolean Method_1_98D79906B0F97E1A(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_98D79906B0F97E1A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D28D344FC6E09F5(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_3D28D344FC6E09F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_03DF2F822416454D(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_03DF2F822416454D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_EB7282B6745B4611_OFFSET))();
	}

	static ::System::Void Method_1_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_E0078F6C95D82674_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F6A078ACAF11D793(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Class_1_4D3CAB8B6C237257_Struct_2_15A3FA519D8875C2& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Class_1_4D3CAB8B6C237257_Struct_2_15A3FA519D8875C2&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_F6A078ACAF11D793_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3302B096FCB70334(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46* a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46*, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_3302B096FCB70334_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::Vector2Int Method_1_6CD62A079EEDC40E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_6CD62A079EEDC40E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_1213C5437552BF2D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_1213C5437552BF2D_OFFSET))();
	}

	static ::System::Void Method_1_590662BA0A0EF3EC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_590662BA0A0EF3EC_OFFSET))(a1);
	}

	static ::System::Void Method_1_61A8D3DFC8CAD4BA(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_61A8D3DFC8CAD4BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}

	static ::System::Boolean Method_1_C2B5819477F73B7E(::System::Int32 a1, ::Class_1_BFC2F9D5895EB2FB* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_1_BFC2F9D5895EB2FB*, ::System::Action_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_C2B5819477F73B7E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_DD3690FA8B4A8A0C(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_DD3690FA8B4A8A0C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_571FA3C9F915CC8F(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_571FA3C9F915CC8F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2D5C3D053AF9AA47(::System::UInt32 a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_2D5C3D053AF9AA47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11424DD5C0BB0487(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1& a1)
	{
		return ((::System::Void(*)(::Class_1_4D3CAB8B6C237257_Struct_2_F2D5BBFE98F9F8F1&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_11424DD5C0BB0487_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A47513372EA43249(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_METHOD_1_A47513372EA43249_OFFSET))(a1);
	}
};
