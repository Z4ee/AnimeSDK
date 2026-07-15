#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7994F57D2C133FDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146AA390)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_0C26ECD726C672E7_OFFSET UNITYSDK_OFFSET(0x146AC6A0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_13895DF26013295D_OFFSET UNITYSDK_OFFSET(0x146AD030)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x146AD2C0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_1E385C0D8ECA4821_OFFSET UNITYSDK_OFFSET(0x146ACAA0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_2397BE1B090A06CF_OFFSET UNITYSDK_OFFSET(0x146AD1D0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x146ABBE0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_342BE5A5703789D7_OFFSET UNITYSDK_OFFSET(0x146AC520)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_3F22D21CFB54FC1E_OFFSET UNITYSDK_OFFSET(0x146AC650)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x146AA4B0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_59F5F5E6AFB9C8E7_OFFSET UNITYSDK_OFFSET(0x146AC320)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_6C621B9661FCEE55_OFFSET UNITYSDK_OFFSET(0x146AD650)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_902F31EB43538568_OFFSET UNITYSDK_OFFSET(0x146AD5F0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_94D29AED36CFE345_OFFSET UNITYSDK_OFFSET(0x146ABB60)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_9A6D0FEF00DFD311_OFFSET UNITYSDK_OFFSET(0x146AC930)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x146AD500)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x146AD550)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x146AD4B0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x146ACF90)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_CC81AF912581ACE2_OFFSET UNITYSDK_OFFSET(0x146ACBF0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x146AD5A0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x146AA770)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_DDE5DAED7274FB5D_OFFSET UNITYSDK_OFFSET(0x146AC290)
#define CLASS_2_7994F57D2C133FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x146AD740)

inline static constexpr unsigned int Class_2_7994F57D2C133FDF_TypeDefinitionIndex = 57896;

class Class_2_7994F57D2C133FDF : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::ValueTuple_3<::System::UInt32, ::System::String*, ::System::String*>>* Field_2_0; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x18
	::RPG::Client::MapDef* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_2_3; // 0x28
	::RPG::Client::MapRotationInfo* Field_2_4; // 0x30
	::RPG::Client::AdventurePhase* Field_2_5; // 0x38
	::Class_1_64D890C466F37235* Field_2_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4BD9E95D1AEEBF9B(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_94D29AED36CFE345(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_94D29AED36CFE345_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDE5DAED7274FB5D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_DDE5DAED7274FB5D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_59F5F5E6AFB9C8E7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_59F5F5E6AFB9C8E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F22D21CFB54FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_3F22D21CFB54FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6D0FEF00DFD311(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_9A6D0FEF00DFD311_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1E385C0D8ECA4821(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_1E385C0D8ECA4821_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC81AF912581ACE2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_CC81AF912581ACE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_13895DF26013295D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_13895DF26013295D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2397BE1B090A06CF(::RPG::GameCore::GameEntity* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_2397BE1B090A06CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_902F31EB43538568(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_902F31EB43538568_OFFSET))(this, a1);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_2_0C26ECD726C672E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_0C26ECD726C672E7_OFFSET))(this);
	}

	static ::System::Boolean Method_2_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_C0FF32B4D2022F8C_OFFSET))(a1);
	}

	::System::Boolean Method_2_6C621B9661FCEE55(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_6C621B9661FCEE55_OFFSET))(this, a1);
	}

	::System::Void Method_2_342BE5A5703789D7(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_342BE5A5703789D7_OFFSET))(this, a1, a2);
	}
};
