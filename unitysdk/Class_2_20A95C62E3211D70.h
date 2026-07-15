#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_20A95C62E3211D70_Struct_2_86EDB8070973F6A2.h"
#include "unitysdk/Class_2_20A95C62E3211D70_Struct_2_B7D4427E9D58580D.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_20A95C62E3211D70_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165955A0)
#define CLASS_2_20A95C62E3211D70_METHOD_2_0B945A4B3C62C72E_OFFSET UNITYSDK_OFFSET(0x16595780)
#define CLASS_2_20A95C62E3211D70_METHOD_2_49D769C3C5D831BA_OFFSET UNITYSDK_OFFSET(0x16594940)
#define CLASS_2_20A95C62E3211D70_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x165949B0)
#define CLASS_2_20A95C62E3211D70_METHOD_2_8280BDDAC38EF399_OFFSET UNITYSDK_OFFSET(0x16595B40)
#define CLASS_2_20A95C62E3211D70_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x16595BD0)
#define CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x16595640)
#define CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x16595690)
#define CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET UNITYSDK_OFFSET(0x16595730)
#define CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x165955F0)
#define CLASS_2_20A95C62E3211D70_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x16595800)
#define CLASS_2_20A95C62E3211D70_METHOD_2_C910C70FFBBA7C58_OFFSET UNITYSDK_OFFSET(0x16595D40)
#define CLASS_2_20A95C62E3211D70_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x165956E0)
#define CLASS_2_20A95C62E3211D70__CTOR_OFFSET UNITYSDK_OFFSET(0x16595DD0)

inline static constexpr unsigned int Class_2_20A95C62E3211D70_TypeDefinitionIndex = 57876;

class Class_2_20A95C62E3211D70 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::RPG::Client::MapDef* Field_2_0; // 0x10
	::Class_1_64D890C466F37235* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_20A95C62E3211D70_Struct_2_B7D4427E9D58580D>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_20A95C62E3211D70_Struct_2_86EDB8070973F6A2>* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_49D769C3C5D831BA(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_49D769C3C5D831BA_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B945A4B3C62C72E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_0B945A4B3C62C72E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8280BDDAC38EF399(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_8280BDDAC38EF399_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void Method_2_C910C70FFBBA7C58(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_C910C70FFBBA7C58_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20A95C62E3211D70_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}
};
