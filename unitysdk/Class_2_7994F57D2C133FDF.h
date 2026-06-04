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

#define CLASS_2_7994F57D2C133FDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1061C2E0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_0C26ECD726C672E7_OFFSET UNITYSDK_OFFSET(0x1061E2A0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_13895DF26013295D_OFFSET UNITYSDK_OFFSET(0x1061EC50)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1061EEE0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_1E385C0D8ECA4821_OFFSET UNITYSDK_OFFSET(0x1061E6B0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_2397BE1B090A06CF_OFFSET UNITYSDK_OFFSET(0x1061EDF0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1061D7F0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_342BE5A5703789D7_OFFSET UNITYSDK_OFFSET(0x1061E120)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_3F22D21CFB54FC1E_OFFSET UNITYSDK_OFFSET(0x1061E250)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x1061C400)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_59F5F5E6AFB9C8E7_OFFSET UNITYSDK_OFFSET(0x1061DF20)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_6544E7C735DCADFB_OFFSET UNITYSDK_OFFSET(0x1061F540)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_6C621B9661FCEE55_OFFSET UNITYSDK_OFFSET(0x1061F270)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_7639D264A770ED5E_OFFSET UNITYSDK_OFFSET(0x1061F430)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0x1061F4B0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x1061F3D0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_902F31EB43538568_OFFSET UNITYSDK_OFFSET(0x1061F210)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_94D29AED36CFE345_OFFSET UNITYSDK_OFFSET(0x1061D770)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_9A6D0FEF00DFD311_OFFSET UNITYSDK_OFFSET(0x1061E530)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0x1061F5A0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x1061C6C0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x1061F120)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x1061F170)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1061F0D0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x1061EBB0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_CC81AF912581ACE2_OFFSET UNITYSDK_OFFSET(0x1061E800)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1061F1C0)
#define CLASS_2_7994F57D2C133FDF_METHOD_2_DDE5DAED7274FB5D_OFFSET UNITYSDK_OFFSET(0x1061DE90)
#define CLASS_2_7994F57D2C133FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1061F360)
#define CLASS_2_7994F57D2C133FDF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1061F370)

inline static constexpr unsigned int Class_2_7994F57D2C133FDF_TypeDefinitionIndex = 56650;

class Class_2_7994F57D2C133FDF : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::RPG::Client::AdventurePhase* Field_2_0; // 0x10
	::RPG::Client::MapDef* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::ValueTuple_3<::System::UInt32, ::System::String*, ::System::String*>>* Field_2_3; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x30
	::Class_1_64D890C466F37235* Field_2_5; // 0x38
	::RPG::Client::MapRotationInfo* Field_2_6; // 0x40
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

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_A2172401030892FD_OFFSET))(this);
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7639D264A770ED5E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_7639D264A770ED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6544E7C735DCADFB(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_6544E7C735DCADFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7994F57D2C133FDF_METHOD_2_A1D868D08A5B8F47_OFFSET))(this, a1);
	}
};
