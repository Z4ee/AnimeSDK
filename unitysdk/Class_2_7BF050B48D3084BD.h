#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_7BF050B48D3084BD_Class_1_37CE18D211098D95;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7BF050B48D3084BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAADE8E0)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_7639D264A770ED5E_OFFSET UNITYSDK_OFFSET(0xAADF390)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_87B7F4DF697FF750_OFFSET UNITYSDK_OFFSET(0xAADEDC0)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0xAADF410)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0xAADF2D0)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xAADD8D0)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_AB672F6D90BC9094_OFFSET UNITYSDK_OFFSET(0xAADEA00)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xAADEA80)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_CA46DFF8CF6EB34E_OFFSET UNITYSDK_OFFSET(0xAADD780)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_D0429A442DFBA9DF_OFFSET UNITYSDK_OFFSET(0xAADF200)
#define CLASS_2_7BF050B48D3084BD_METHOD_2_D7953C46D82FED5E_OFFSET UNITYSDK_OFFSET(0xAADEE60)
#define CLASS_2_7BF050B48D3084BD__CTOR_OFFSET UNITYSDK_OFFSET(0xAADF2C0)
#define CLASS_2_7BF050B48D3084BD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAADF330)

inline static constexpr unsigned int Class_2_7BF050B48D3084BD_TypeDefinitionIndex = 56628;

class Class_2_7BF050B48D3084BD : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_7BF050B48D3084BD_Class_1_37CE18D211098D95*>* Field_2_0; // 0x10
	::Class_1_64D890C466F37235* Field_2_1; // 0x18
	::RPG::Client::MapDef* Field_2_2; // 0x20
	::RPG::Client::MapRotationInfo* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_7BF050B48D3084BD_Class_1_37CE18D211098D95*>* Field_2_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA46DFF8CF6EB34E(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_CA46DFF8CF6EB34E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AB672F6D90BC9094(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_AB672F6D90BC9094_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_87B7F4DF697FF750(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_87B7F4DF697FF750_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_D7953C46D82FED5E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_D7953C46D82FED5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0429A442DFBA9DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_D0429A442DFBA9DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7639D264A770ED5E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_7639D264A770ED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_7BF050B48D3084BD_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}
};
