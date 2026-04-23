#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_BE064A01F07E6ACC_Struct_2_86EDB8070973F6A2.h"
#include "unitysdk/Class_2_BE064A01F07E6ACC_Struct_2_B7D4427E9D58580D.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BE064A01F07E6ACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55B750)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_0E72BD38C4E76BE2_OFFSET UNITYSDK_OFFSET(0xA55BD30)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_210BBC9471EB6382_OFFSET UNITYSDK_OFFSET(0xA55B930)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xA55B9B0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0xA55C0B0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_7D172275774B1915_OFFSET UNITYSDK_OFFSET(0xA55ADC0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0xA55C140)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xA55BDC0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xA55B7F0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0xA55B840)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET UNITYSDK_OFFSET(0xA55B8E0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xA55B7A0)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xA55AE30)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_B7C70F127625A7B5_OFFSET UNITYSDK_OFFSET(0xA55BF40)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xA55B890)
#define CLASS_2_BE064A01F07E6ACC_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xA55BFE0)
#define CLASS_2_BE064A01F07E6ACC__CTOR_OFFSET UNITYSDK_OFFSET(0xA55BFD0)
#define CLASS_2_BE064A01F07E6ACC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55C050)

inline static constexpr unsigned int Class_2_BE064A01F07E6ACC_TypeDefinitionIndex = 55875;

class Class_2_BE064A01F07E6ACC : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::RPG::Client::MapDef* Field_2_1; // 0x10
	::Class_1_64D890C466F37235* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_BE064A01F07E6ACC_Struct_2_B7D4427E9D58580D>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_BE064A01F07E6ACC_Struct_2_86EDB8070973F6A2>* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7D172275774B1915(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_7D172275774B1915_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_210BBC9471EB6382(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_210BBC9471EB6382_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E72BD38C4E76BE2(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_0E72BD38C4E76BE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7C70F127625A7B5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_B7C70F127625A7B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_BE064A01F07E6ACC_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}
};
