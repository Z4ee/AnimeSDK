#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RuntimeDynamicObjectSet.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_257;
class Class_0_16E4307DCC419505_396;
namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace MoleMole::SceneMark { class DefaultDynamicObjectLayer; }
namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_181A04F78EA47987_METHOD_1_09342B7AD3442A09_OFFSET UNITYSDK_OFFSET(0x121CA860)
#define CLASS_1_181A04F78EA47987_METHOD_1_1AC3D95034A2CB06_OFFSET UNITYSDK_OFFSET(0x121CAF30)
#define CLASS_1_181A04F78EA47987_METHOD_1_20CA362A364CD5B3_OFFSET UNITYSDK_OFFSET(0x121CADA0)
#define CLASS_1_181A04F78EA47987_METHOD_1_31EE965DE09537FB_OFFSET UNITYSDK_OFFSET(0x121CC600)
#define CLASS_1_181A04F78EA47987_METHOD_1_36B93BC28B841835_OFFSET UNITYSDK_OFFSET(0x121CAB10)
#define CLASS_1_181A04F78EA47987_METHOD_1_3F3DAED9BEEF758E_OFFSET UNITYSDK_OFFSET(0x121CC1C0)
#define CLASS_1_181A04F78EA47987_METHOD_1_42977843798B18F6_OFFSET UNITYSDK_OFFSET(0x121CB5A0)
#define CLASS_1_181A04F78EA47987_METHOD_1_4548BDB55173DDDC_OFFSET UNITYSDK_OFFSET(0x121CB420)
#define CLASS_1_181A04F78EA47987_METHOD_1_46086E8B47AC77A0_OFFSET UNITYSDK_OFFSET(0x121CB430)
#define CLASS_1_181A04F78EA47987_METHOD_1_6A4445C7EF8472D7_OFFSET UNITYSDK_OFFSET(0x121CAB90)
#define CLASS_1_181A04F78EA47987_METHOD_1_6E35DD24B36B0800_OFFSET UNITYSDK_OFFSET(0x121CB860)
#define CLASS_1_181A04F78EA47987_METHOD_1_9382CC761861400E_OFFSET UNITYSDK_OFFSET(0x121CA660)
#define CLASS_1_181A04F78EA47987_METHOD_1_955F2AB2CAF5E6D3_OFFSET UNITYSDK_OFFSET(0x121CAFC0)
#define CLASS_1_181A04F78EA47987_METHOD_1_A8C9C21DB0D4AF8E_OFFSET UNITYSDK_OFFSET(0x121CA3B0)
#define CLASS_1_181A04F78EA47987_METHOD_1_B248AA2483A0E270_OFFSET UNITYSDK_OFFSET(0x121CB260)
#define CLASS_1_181A04F78EA47987_METHOD_1_BAADD4F6B5FF5A9C_OFFSET UNITYSDK_OFFSET(0x121CB870)
#define CLASS_1_181A04F78EA47987_METHOD_1_BD2B3BA54B37DE5B_OFFSET UNITYSDK_OFFSET(0x121CC1B0)
#define CLASS_1_181A04F78EA47987_METHOD_1_BD7C0DAD4AB949D3_OFFSET UNITYSDK_OFFSET(0x121CA3A0)
#define CLASS_1_181A04F78EA47987_METHOD_1_C2D808AB634C5A86_OFFSET UNITYSDK_OFFSET(0x121CC2D0)
#define CLASS_1_181A04F78EA47987_METHOD_1_C362136037BD7745_OFFSET UNITYSDK_OFFSET(0x121CBB80)
#define CLASS_1_181A04F78EA47987_METHOD_1_D5E9730B664D398A_OFFSET UNITYSDK_OFFSET(0x121CA920)
#define CLASS_1_181A04F78EA47987_METHOD_1_F1CCD05CDB8DE2B6_OFFSET UNITYSDK_OFFSET(0x121CB740)
#define CLASS_1_181A04F78EA47987__CTOR_OFFSET UNITYSDK_OFFSET(0x121CA260)

inline static constexpr unsigned int Class_1_181A04F78EA47987_TypeDefinitionIndex = 48048;

class Class_1_181A04F78EA47987 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::MoleMole::SceneMark::MonoSceneMarkRoot* Field_1_6; // 0x10
	::MoleMole::SceneMark::DefaultDynamicObjectLayer* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_396*>* Field_1_3; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987__CTOR_OFFSET))(this);
	}

	::MoleMole::SceneMark::DefaultDynamicObjectLayer* Method_1_BD7C0DAD4AB949D3()
	{
		return ((::MoleMole::SceneMark::DefaultDynamicObjectLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_BD7C0DAD4AB949D3_OFFSET))(this);
	}

	::System::Void Method_1_A8C9C21DB0D4AF8E(::MoleMole::GameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_A8C9C21DB0D4AF8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_09342B7AD3442A09(::Class_0_16E4307DCC419505_257* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_257*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_09342B7AD3442A09_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_257* Method_1_D5E9730B664D398A(::MoleMole::GameplayTag a1)
	{
		return ((::Class_0_16E4307DCC419505_257*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_D5E9730B664D398A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A4445C7EF8472D7(::MoleMole::Config::RuntimeDynamicObjectSet a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimeDynamicObjectSet, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_6A4445C7EF8472D7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_20CA362A364CD5B3(::System::String* a1, ::MoleMole::GameplayTag a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_20CA362A364CD5B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_955F2AB2CAF5E6D3(::MoleMole::GameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_955F2AB2CAF5E6D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9382CC761861400E(::MoleMole::GameplayTag a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_9382CC761861400E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B248AA2483A0E270(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_B248AA2483A0E270_OFFSET))(this, a1);
	}

	::MoleMole::SceneMark::MonoSceneMarkRoot* Method_1_4548BDB55173DDDC()
	{
		return ((::MoleMole::SceneMark::MonoSceneMarkRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_4548BDB55173DDDC_OFFSET))(this);
	}

	::System::Void Method_1_46086E8B47AC77A0(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_46086E8B47AC77A0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_257* Method_1_36B93BC28B841835(::Class_0_16E4307DCC419505_396* a1, ::MoleMole::GameplayTag a2)
	{
		return ((::Class_0_16E4307DCC419505_257*(*)(::PVOID, ::Class_0_16E4307DCC419505_396*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_36B93BC28B841835_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_42977843798B18F6(::MoleMole::SceneMark::DefaultDynamicObjectLayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::DefaultDynamicObjectLayer*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_42977843798B18F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1AC3D95034A2CB06(::Class_0_16E4307DCC419505_396* a1, ::MoleMole::GameplayTag a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_396*, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_257*>*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_1AC3D95034A2CB06_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F1CCD05CDB8DE2B6(::MoleMole::GameplayTag a1, ::Class_0_16E4307DCC419505_396*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::Class_0_16E4307DCC419505_396*&))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_F1CCD05CDB8DE2B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E35DD24B36B0800(::MoleMole::SceneMark::DefaultDynamicObjectLayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::DefaultDynamicObjectLayer*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_6E35DD24B36B0800_OFFSET))(this, a1);
	}

	::System::Void Method_1_BAADD4F6B5FF5A9C(::Class_0_16E4307DCC419505_396* a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_BAADD4F6B5FF5A9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C362136037BD7745(::MoleMole::Config::SceneConfigRuntimeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeData*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_C362136037BD7745_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD2B3BA54B37DE5B(::MoleMole::SceneMark::MonoSceneMarkRoot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_BD2B3BA54B37DE5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F3DAED9BEEF758E(::MoleMole::GameplayTag a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_3F3DAED9BEEF758E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C2D808AB634C5A86(::Class_0_16E4307DCC419505_396* a1, ::MoleMole::GameplayTag a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_C2D808AB634C5A86_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_31EE965DE09537FB(::MoleMole::GameplayTag a1, ::MoleMole::GameplayTag a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_181A04F78EA47987_METHOD_1_31EE965DE09537FB_OFFSET))(this, a1, a2, a3);
	}
};
