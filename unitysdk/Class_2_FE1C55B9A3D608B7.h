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

#define CLASS_2_FE1C55B9A3D608B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121D9D10)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_0C26ECD726C672E7_OFFSET UNITYSDK_OFFSET(0x121DBFB0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x121DCB00)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x121DB4F0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_342BE5A5703789D7_OFFSET UNITYSDK_OFFSET(0x121DBDD0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_3A45CD235E3551A6_OFFSET UNITYSDK_OFFSET(0x121DC220)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_3E17DE187D6B8091_OFFSET UNITYSDK_OFFSET(0x121DCE00)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_3F22D21CFB54FC1E_OFFSET UNITYSDK_OFFSET(0x121DBF60)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_4EBCEEADE9A1AAE6_OFFSET UNITYSDK_OFFSET(0x121DCA30)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x121D9E00)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_59F5F5E6AFB9C8E7_OFFSET UNITYSDK_OFFSET(0x121DBC00)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_79C0322DC08C55D6_OFFSET UNITYSDK_OFFSET(0x121DB470)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_95A04E8059088754_OFFSET UNITYSDK_OFFSET(0x121DC8C0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x121DA090)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_A6143A14F11DAA03_OFFSET UNITYSDK_OFFSET(0x121DCE60)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_ACA133530085D272_OFFSET UNITYSDK_OFFSET(0x121DC360)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x121DCD10)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x121DCD60)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x121DCCC0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_BCEDF88FD731AB55_OFFSET UNITYSDK_OFFSET(0x121DC850)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x121DCDB0)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_DDE5DAED7274FB5D_OFFSET UNITYSDK_OFFSET(0x121DBB70)
#define CLASS_2_FE1C55B9A3D608B7_METHOD_2_E4E99C7BB6A2A951_OFFSET UNITYSDK_OFFSET(0x121DC480)
#define CLASS_2_FE1C55B9A3D608B7__CTOR_OFFSET UNITYSDK_OFFSET(0x121DCF20)

inline static constexpr unsigned int Class_2_FE1C55B9A3D608B7_TypeDefinitionIndex = 60717;

class Class_2_FE1C55B9A3D608B7 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* MONOAGGOGCL; // 0x10
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x18
	::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x20
	::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::ValueTuple_3<::System::UInt32, ::System::String*, ::System::String*>>* DLJEDFLGCNL; // 0x30
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::String*, ::System::String*>>* KIFCEDBCHBN; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::String*>* DMIJDAKHLOI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5110E061C0DF5692(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C0322DC08C55D6(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_79C0322DC08C55D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDE5DAED7274FB5D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_DDE5DAED7274FB5D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_59F5F5E6AFB9C8E7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_59F5F5E6AFB9C8E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F22D21CFB54FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_3F22D21CFB54FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A45CD235E3551A6(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_3A45CD235E3551A6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_ACA133530085D272(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_ACA133530085D272_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4E99C7BB6A2A951(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_E4E99C7BB6A2A951_OFFSET))(this, a1);
	}

	::System::Void Method_2_95A04E8059088754(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_95A04E8059088754_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4EBCEEADE9A1AAE6(::RPG::GameCore::GameEntity* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_4EBCEEADE9A1AAE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E17DE187D6B8091(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_3E17DE187D6B8091_OFFSET))(this, a1);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_0C26ECD726C672E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_0C26ECD726C672E7_OFFSET))(this);
	}

	static ::System::Boolean Method_2_BCEDF88FD731AB55(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_BCEDF88FD731AB55_OFFSET))(a1);
	}

	::System::Boolean Method_2_A6143A14F11DAA03(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_A6143A14F11DAA03_OFFSET))(this, a1);
	}

	::System::Void Method_2_342BE5A5703789D7(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FE1C55B9A3D608B7_METHOD_2_342BE5A5703789D7_OFFSET))(this, a1, a2);
	}
};
