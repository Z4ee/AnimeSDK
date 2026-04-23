#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E8856E702873277_ColumeType.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41;
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E8856E702873277_METHOD_1_0086B44DBE5B0F28_OFFSET UNITYSDK_OFFSET(0x99972D0)
#define CLASS_1_3E8856E702873277_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x999A9D0)
#define CLASS_1_3E8856E702873277_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9996280)
#define CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_1_OFFSET UNITYSDK_OFFSET(0x999AC50)
#define CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_2_OFFSET UNITYSDK_OFFSET(0x999B130)
#define CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x999A880)
#define CLASS_1_3E8856E702873277_METHOD_1_4348D348D50A2B81_OFFSET UNITYSDK_OFFSET(0x9997450)
#define CLASS_1_3E8856E702873277_METHOD_1_443A8FD387045C5D_OFFSET UNITYSDK_OFFSET(0x999AD90)
#define CLASS_1_3E8856E702873277_METHOD_1_612F73C5F773C442_OFFSET UNITYSDK_OFFSET(0x9997A10)
#define CLASS_1_3E8856E702873277_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x99974C0)
#define CLASS_1_3E8856E702873277_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x999B840)
#define CLASS_1_3E8856E702873277_METHOD_1_82125FD1B8FE1611_OFFSET UNITYSDK_OFFSET(0x9999FD0)
#define CLASS_1_3E8856E702873277_METHOD_1_84089D51E7DA5C2D_1_OFFSET UNITYSDK_OFFSET(0x9999D90)
#define CLASS_1_3E8856E702873277_METHOD_1_84089D51E7DA5C2D_OFFSET UNITYSDK_OFFSET(0x9999B50)
#define CLASS_1_3E8856E702873277_METHOD_1_95E181670AB28CF8_OFFSET UNITYSDK_OFFSET(0x99998E0)
#define CLASS_1_3E8856E702873277_METHOD_1_96E1AEBC77A72779_OFFSET UNITYSDK_OFFSET(0x9999950)
#define CLASS_1_3E8856E702873277_METHOD_1_A21DF4AAA5CC5DBC_OFFSET UNITYSDK_OFFSET(0x99975C0)
#define CLASS_1_3E8856E702873277_METHOD_1_B4CCC42D866F3519_1_OFFSET UNITYSDK_OFFSET(0x999B570)
#define CLASS_1_3E8856E702873277_METHOD_1_B4CCC42D866F3519_OFFSET UNITYSDK_OFFSET(0x999B2D0)
#define CLASS_1_3E8856E702873277_METHOD_1_B4CF8B430805E59B_OFFSET UNITYSDK_OFFSET(0x999A650)
#define CLASS_1_3E8856E702873277_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x9996920)
#define CLASS_1_3E8856E702873277_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x9996EC0)
#define CLASS_1_3E8856E702873277__CCTOR_OFFSET UNITYSDK_OFFSET(0x9996040)
#define CLASS_1_3E8856E702873277__CTOR_OFFSET UNITYSDK_OFFSET(0x999B850)

inline static constexpr unsigned int Class_1_3E8856E702873277_TypeDefinitionIndex = 50035;

class Class_1_3E8856E702873277 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C340);
	}
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C348);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_9()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C350);
	}
	static ::Il2CppArray<::RPG::GameCore::RtAbilityProperty>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::RPG::GameCore::RtAbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C358);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C360);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_50()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E8856E702873277_TypeDefinitionIndex)->GetStaticField(0x1C368);
	}
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::String* Field_1_32; // 0x0
	// static const ::System::String* Field_1_33; // 0x0
	// static const ::System::String* Field_1_34; // 0x0
	// static const ::System::String* Field_1_35; // 0x0
	// static const ::System::String* Field_1_36; // 0x0
	// static const ::System::String* Field_1_37; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	// static const ::System::String* Field_1_41; // 0x0
	// static const ::System::String* Field_1_42; // 0x0
	// static const ::System::String* Field_1_43; // 0x0
	// static const ::System::String* Field_1_44; // 0x0
	// static const ::System::String* Field_1_45; // 0x0
	// static const ::System::String* Field_1_46; // 0x0
	// static const ::System::String* Field_1_47; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_49; // 0x0
	::System::Collections::Generic::List_1<::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*>* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_0; // 0x20
	::RPG::GameCore::RtBattleMode* Field_1_3; // 0x28
	::RPG::GameCore::GameWorld* Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_ONPLUGINUNINIT_OFFSET))(this);
	}

	static ::System::String* Method_1_4348D348D50A2B81()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_4348D348D50A2B81_OFFSET))();
	}

	::System::Void Method_1_0086B44DBE5B0F28(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_0086B44DBE5B0F28_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A21DF4AAA5CC5DBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_A21DF4AAA5CC5DBC_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_0865E94460F11643_OFFSET))();
	}

	::System::Void Method_1_612F73C5F773C442(::RPG::GameCore::CSVRow* a1, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_612F73C5F773C442_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_96E1AEBC77A72779(::Class_1_3E8856E702873277_ColumeType a1, ::RPG::GameCore::RtAbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_3E8856E702873277_ColumeType, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_96E1AEBC77A72779_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_95E181670AB28CF8(::RPG::GameCore::CSVRow* a1, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_95E181670AB28CF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84089D51E7DA5C2D(::RPG::GameCore::CSVRow* a1, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_84089D51E7DA5C2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84089D51E7DA5C2D_1(::RPG::GameCore::CSVRow* a1, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_3E8856E702873277_Class_1_45022F90DC3E1A41*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_84089D51E7DA5C2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82125FD1B8FE1611(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_82125FD1B8FE1611_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CF8B430805E59B(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_B4CF8B430805E59B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FA0973E87FBD363(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FA0973E87FBD363_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_443A8FD387045C5D(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_443A8FD387045C5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FA0973E87FBD363_2(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_0FA0973E87FBD363_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_B4CCC42D866F3519_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_B4CCC42D866F3519_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8856E702873277_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
