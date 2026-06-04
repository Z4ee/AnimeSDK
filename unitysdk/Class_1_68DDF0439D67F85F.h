#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1CFC9E4D786ED583;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F1D8F9A07FABFA52;
namespace RPG::GameCore { class FiveDimEvilSmileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_68DDF0439D67F85F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1399C770)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_00DA02550831206D_OFFSET UNITYSDK_OFFSET(0x1399D080)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_6441A46A25DA1B85_OFFSET UNITYSDK_OFFSET(0x1399DC50)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_891A756279733473_OFFSET UNITYSDK_OFFSET(0x1399ED90)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x1399FBD0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8BEF01E504A2AFF3_OFFSET UNITYSDK_OFFSET(0x1399CC20)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1399FA60)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x1399CF40)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1399CE00)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_97057426D05F7912_OFFSET UNITYSDK_OFFSET(0x1399CAF0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9B4AD1CDBE590712_OFFSET UNITYSDK_OFFSET(0x1399DB10)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9BDEDA02DF7DB938_OFFSET UNITYSDK_OFFSET(0x1399CD60)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x1399D1C0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1399C640)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1399D0E0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_D494C4636DB52BB7_OFFSET UNITYSDK_OFFSET(0x1399F6E0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_D9FBB3C74774AF76_OFFSET UNITYSDK_OFFSET(0x1399D9C0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET UNITYSDK_OFFSET(0x1399C5C0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x1399C7C0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x1399D150)
#define CLASS_1_68DDF0439D67F85F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1399FE10)
#define CLASS_1_68DDF0439D67F85F__CTOR_OFFSET UNITYSDK_OFFSET(0x1399C5B0)

inline static constexpr unsigned int Class_1_68DDF0439D67F85F_TypeDefinitionIndex = 71621;

class Class_1_68DDF0439D67F85F : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x16060);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x16068);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x16070);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x7EB0);
	}
	::RPG::GameCore::FloatCurve* Field_1_4; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_5; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* Field_1_6; // 0x20
	::Class_2_1CFC9E4D786ED583* Field_1_7; // 0x28
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_9; // 0x34
	::System::Single Field_1_10; // 0x38
	::RPG::GameCore::FiveDimEvilSmileState Field_1_11; // 0x3C
	::System::Single Field_1_12; // 0x40
	::System::Single Field_1_13; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DF4A3B8481FEB8BF(::Class_2_1CFC9E4D786ED583* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1CFC9E4D786ED583*))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_F5B4708E7805566C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_1_9BDEDA02DF7DB938(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_9BDEDA02DF7DB938_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_1_00DA02550831206D(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_00DA02550831206D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7C4A6FA5DA2B20C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_A7C4A6FA5DA2B20C_OFFSET))(this);
	}

	::System::Void Method_1_891A756279733473(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_891A756279733473_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6441A46A25DA1B85(::Class_2_F1D8F9A07FABFA52* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F1D8F9A07FABFA52*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_6441A46A25DA1B85_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* Method_1_9B4AD1CDBE590712()
	{
		return ((::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_9B4AD1CDBE590712_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileMoveConfig* Method_1_97057426D05F7912()
	{
		return ((::RPG::GameCore::FiveDimEvilSmileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_97057426D05F7912_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig* Method_1_8BEF01E504A2AFF3()
	{
		return ((::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_8BEF01E504A2AFF3_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::Class_2_B9E8C2EEAA5C96EC* Method_1_D494C4636DB52BB7()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_D494C4636DB52BB7_OFFSET))(this);
	}

	::System::Boolean Method_1_D9FBB3C74774AF76(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_D9FBB3C74774AF76_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_1_8BA81D51FB5D5B30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_8BA81D51FB5D5B30_OFFSET))(this);
	}
};
