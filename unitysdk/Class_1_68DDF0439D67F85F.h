#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_936D2483F3ED2D32;
class Class_2_9AE1988822FB0067;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::GameCore { class FiveDimEvilSmileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_68DDF0439D67F85F_CLEAR_OFFSET UNITYSDK_OFFSET(0x183D3EB0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_00DA02550831206D_OFFSET UNITYSDK_OFFSET(0x183D4970)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_0AE336864F0C8142_OFFSET UNITYSDK_OFFSET(0x183D5290)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x183D7450)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x183D4850)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_5D0BCFABEB41AF6A_OFFSET UNITYSDK_OFFSET(0x183D65F0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_6441A46A25DA1B85_OFFSET UNITYSDK_OFFSET(0x183D54E0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8BEF01E504A2AFF3_OFFSET UNITYSDK_OFFSET(0x183D44D0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x183D4710)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_97057426D05F7912_OFFSET UNITYSDK_OFFSET(0x183D43A0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9B4AD1CDBE590712_OFFSET UNITYSDK_OFFSET(0x183D53A0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9E07B704243E7453_OFFSET UNITYSDK_OFFSET(0x183D4610)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x183D3D80)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0x183D7590)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x183D3F00)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x183D49D0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x183D4AB0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_D44942B381F2D0AE_OFFSET UNITYSDK_OFFSET(0x183D70B0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET UNITYSDK_OFFSET(0x183D3D00)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x183D4A40)
#define CLASS_1_68DDF0439D67F85F__CCTOR_OFFSET UNITYSDK_OFFSET(0x183D77A0)
#define CLASS_1_68DDF0439D67F85F__CTOR_OFFSET UNITYSDK_OFFSET(0x183D3CF0)

inline static constexpr unsigned int Class_1_68DDF0439D67F85F_TypeDefinitionIndex = 73147;

class Class_1_68DDF0439D67F85F : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x9960);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x9968);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x9970);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x4080);
	}
	::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* Field_1_4; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_5; // 0x18
	::RPG::GameCore::FloatCurve* Field_1_6; // 0x20
	::Class_2_936D2483F3ED2D32* Field_1_7; // 0x28
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

	::System::Void Method_1_DF4A3B8481FEB8BF(::Class_2_936D2483F3ED2D32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_936D2483F3ED2D32*))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_1_9E07B704243E7453(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_9E07B704243E7453_OFFSET))(this, a1);
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

	::System::Void Method_1_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_1_5D0BCFABEB41AF6A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_5D0BCFABEB41AF6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6441A46A25DA1B85(::Class_2_9AE1988822FB0067* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9AE1988822FB0067*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_6441A46A25DA1B85_OFFSET))(this, a1, a2, a3, a4);
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

	::Class_2_B9E8C2EEAA5C96EC* Method_1_D44942B381F2D0AE()
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_D44942B381F2D0AE_OFFSET))(this);
	}

	::System::Boolean Method_1_0AE336864F0C8142(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_0AE336864F0C8142_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Boolean Method_1_B82A6C005D3ADCE3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_B82A6C005D3ADCE3_OFFSET))(this);
	}
};
