#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_CEC6AEC08579A7BA_Class_1_37CE18D211098D95;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CEC6AEC08579A7BA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F8F70)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_1F75300F8F64184B_OFFSET UNITYSDK_OFFSET(0x99F9050)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0x99F98D0)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0x99F9A70)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x99F9B00)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x99F7FD0)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_AD1EE2024E601D67_OFFSET UNITYSDK_OFFSET(0x99F9500)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_C102C3AC9313C27D_OFFSET UNITYSDK_OFFSET(0x99F9460)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_C825CA8D76090B64_OFFSET UNITYSDK_OFFSET(0x99F7EA0)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x99F99A0)
#define CLASS_2_CEC6AEC08579A7BA_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x99F90D0)
#define CLASS_2_CEC6AEC08579A7BA__CTOR_OFFSET UNITYSDK_OFFSET(0x99F9990)
#define CLASS_2_CEC6AEC08579A7BA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F9A10)

inline static constexpr unsigned int Class_2_CEC6AEC08579A7BA_TypeDefinitionIndex = 55873;

class Class_2_CEC6AEC08579A7BA : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_CEC6AEC08579A7BA_Class_1_37CE18D211098D95*>* Field_2_3; // 0x10
	::Class_1_64D890C466F37235* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_CEC6AEC08579A7BA_Class_1_37CE18D211098D95*>* Field_2_4; // 0x20
	::RPG::Client::MapDef* Field_2_1; // 0x28
	::RPG::Client::MapRotationInfo* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C825CA8D76090B64(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_C825CA8D76090B64_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1F75300F8F64184B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_1F75300F8F64184B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C102C3AC9313C27D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_C102C3AC9313C27D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_AD1EE2024E601D67(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_AD1EE2024E601D67_OFFSET))(this, a1);
	}

	::System::Void Method_2_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_CEC6AEC08579A7BA_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}
};
