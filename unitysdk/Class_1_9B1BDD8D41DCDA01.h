#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavPositionTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_49F5DEF96EAE2348_OFFSET UNITYSDK_OFFSET(0x10969B00)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_4E647527F72AEEF9_OFFSET UNITYSDK_OFFSET(0x10969BC0)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_64A83101469F0F2B_1_OFFSET UNITYSDK_OFFSET(0x10969C10)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_64A83101469F0F2B_OFFSET UNITYSDK_OFFSET(0x10969D70)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_6D8C43FC6B52067D_OFFSET UNITYSDK_OFFSET(0x1096A0F0)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_786F197837612E83_OFFSET UNITYSDK_OFFSET(0x10969760)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_BAFC3D889D25AFE2_OFFSET UNITYSDK_OFFSET(0x10969E20)
#define CLASS_1_9B1BDD8D41DCDA01_METHOD_1_BDD4B5B84A5BAD2C_OFFSET UNITYSDK_OFFSET(0x1096A3D0)

inline static constexpr unsigned int Class_1_9B1BDD8D41DCDA01_TypeDefinitionIndex = 61304;

class Class_1_9B1BDD8D41DCDA01 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_786F197837612E83(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4, ::RPG::Client::NavMap::NavPositionTargetType a5)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&, ::RPG::Client::NavMap::NavPositionTargetType))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_786F197837612E83_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_49F5DEF96EAE2348(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_49F5DEF96EAE2348_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BDD4B5B84A5BAD2C(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_BDD4B5B84A5BAD2C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_64A83101469F0F2B(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_64A83101469F0F2B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_64A83101469F0F2B_1(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_64A83101469F0F2B_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BAFC3D889D25AFE2(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_BAFC3D889D25AFE2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_6D8C43FC6B52067D(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_6D8C43FC6B52067D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_4E647527F72AEEF9(::RPG::Client::NavMap::NavPositionTargetType a1, ::RPG::Client::NavMap::NavPositionTargetType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::NavPositionTargetType, ::RPG::Client::NavMap::NavPositionTargetType))((::PBYTE)hIl2Cpp + CLASS_1_9B1BDD8D41DCDA01_METHOD_1_4E647527F72AEEF9_OFFSET))(a1, a2);
	}
};
