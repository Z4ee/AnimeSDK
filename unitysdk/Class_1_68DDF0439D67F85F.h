#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9AE1988822FB0067;
class Class_2_A7F8D8C186949153;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::GameCore { class FiveDimEvilSmileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_68DDF0439D67F85F_CLEAR_OFFSET UNITYSDK_OFFSET(0x157953D0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_00DA02550831206D_OFFSET UNITYSDK_OFFSET(0x15795ED0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_6441A46A25DA1B85_OFFSET UNITYSDK_OFFSET(0x15796AA0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_891A756279733473_OFFSET UNITYSDK_OFFSET(0x15797BF0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x15798BC0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8BEF01E504A2AFF3_OFFSET UNITYSDK_OFFSET(0x15795A10)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x15798A60)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x15795D90)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x15795C50)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_97057426D05F7912_OFFSET UNITYSDK_OFFSET(0x157958E0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9B4AD1CDBE590712_OFFSET UNITYSDK_OFFSET(0x15796960)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_9E07B704243E7453_OFFSET UNITYSDK_OFFSET(0x15795B50)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_A7C4A6FA5DA2B20C_OFFSET UNITYSDK_OFFSET(0x15796010)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x157952A0)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x15795420)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x15795F30)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_D494C4636DB52BB7_OFFSET UNITYSDK_OFFSET(0x15798690)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_D9FBB3C74774AF76_OFFSET UNITYSDK_OFFSET(0x15796810)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET UNITYSDK_OFFSET(0x15795220)
#define CLASS_1_68DDF0439D67F85F_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x15795FA0)
#define CLASS_1_68DDF0439D67F85F__CCTOR_OFFSET UNITYSDK_OFFSET(0x15798DF0)
#define CLASS_1_68DDF0439D67F85F__CTOR_OFFSET UNITYSDK_OFFSET(0x15795210)

inline static constexpr unsigned int Class_1_68DDF0439D67F85F_TypeDefinitionIndex = 76624;

class Class_1_68DDF0439D67F85F : public ::System::Object
{
public:
	static ::System::String** StaticGet_NHCKFHEDLHJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0xC010);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_FIGBBAIJILL()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0xC018);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0xC020);
	}
	static ::System::Single* StaticGet_LCPBMIKGFHH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68DDF0439D67F85F_TypeDefinitionIndex)->GetStaticField(0x28E0);
	}
	::Il2CppArray<::System::Boolean>* JIECPKIELBP; // 0x10
	::Class_2_A7F8D8C186949153* FKIBGPJNCIJ; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* IGNGBHOGEPK; // 0x20
	::RPG::GameCore::FloatCurve* FFIKHKFLEJK; // 0x28
	::RPG::GameCore::FiveDimEvilSmileState CMBLAFNGAOB; // 0x30
	::System::Single LCLMHBFCPDM; // 0x34
	::System::Single KCMOHJEDEMK; // 0x38
	::System::Single CPFPMCJKHLL; // 0x3C
	::System::Single MBCEDPCNFKE; // 0x40
	::System::Single HJBJKHJFGKO; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DF4A3B8481FEB8BF(::Class_2_A7F8D8C186949153* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A7F8D8C186949153*))((::PBYTE)hIl2Cpp + CLASS_1_68DDF0439D67F85F_METHOD_1_DF4A3B8481FEB8BF_OFFSET))(this, a1);
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
