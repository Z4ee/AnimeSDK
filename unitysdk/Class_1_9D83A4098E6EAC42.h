#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
class Class_2_82B8394520564A54;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9D83A4098E6EAC42_GET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x109F1E80)
#define CLASS_1_9D83A4098E6EAC42_GET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x109F1E60)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x109F1EA0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_41997AFD133B2134_OFFSET UNITYSDK_OFFSET(0x109F26D0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x109F35A0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_7242F67245B5422D_OFFSET UNITYSDK_OFFSET(0x109F2EB0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_865093810200E1C3_OFFSET UNITYSDK_OFFSET(0x109F2B10)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_9F11D5796B54872D_OFFSET UNITYSDK_OFFSET(0x109F3420)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_A5CCB2B1528668A7_OFFSET UNITYSDK_OFFSET(0x109F3180)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_C6A2F37261C7C003_OFFSET UNITYSDK_OFFSET(0x109F2030)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x109F21D0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x109F24A0)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x109F1F50)
#define CLASS_1_9D83A4098E6EAC42_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x109F20F0)
#define CLASS_1_9D83A4098E6EAC42_SET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x109F1E90)
#define CLASS_1_9D83A4098E6EAC42_SET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x109F1E70)
#define CLASS_1_9D83A4098E6EAC42__CTOR_OFFSET UNITYSDK_OFFSET(0x109F3830)

inline static constexpr unsigned int Class_1_9D83A4098E6EAC42_TypeDefinitionIndex = 45822;

class Class_1_9D83A4098E6EAC42 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* Field_1_1; // 0x28
	::System::Boolean _MuteScaleNtf_k__BackingField; // 0x30
	::System::Boolean _MutePositionNtf_k__BackingField; // 0x31
	::System::Boolean Field_1_4; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MuteScaleNtf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_GET_MUTESCALENTF_OFFSET))(this);
	}

	::System::Void set_MuteScaleNtf(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_SET_MUTESCALENTF_OFFSET))(this, value);
	}

	::System::Boolean get_MutePositionNtf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_GET_MUTEPOSITIONNTF_OFFSET))(this);
	}

	::System::Void set_MutePositionNtf(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_SET_MUTEPOSITIONNTF_OFFSET))(this, value);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_C6A2F37261C7C003()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_C6A2F37261C7C003_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_41997AFD133B2134(::Class_2_82B8394520564A54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82B8394520564A54*))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_41997AFD133B2134_OFFSET))(this, a1);
	}

	::System::Void Method_1_865093810200E1C3(::Class_2_82B8394520564A54* a1, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82B8394520564A54*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_865093810200E1C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7242F67245B5422D(::Class_2_82B8394520564A54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82B8394520564A54*))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_7242F67245B5422D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5CCB2B1528668A7(::Class_2_82B8394520564A54* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82B8394520564A54*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_A5CCB2B1528668A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9F11D5796B54872D(::System::Boolean a1, ::Class_2_82B8394520564A54* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_82B8394520564A54*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_9F11D5796B54872D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D83A4098E6EAC42_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
