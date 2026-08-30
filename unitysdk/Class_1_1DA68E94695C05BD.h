#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartLine.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_1_47EE63CB5C4DC8FC_15;
class Class_1_80B0DA28ED2E4CFF;
class Class_1_B6045334FA181376;
class Class_1_DCE3BC3D0902A8EB;
namespace UnityEngine { class Transform; }

#define CLASS_1_1DA68E94695C05BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6387F0)

inline static constexpr unsigned int Class_1_1DA68E94695C05BD_TypeDefinitionIndex = 41308;

class Class_1_1DA68E94695C05BD : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B6045334FA181376*>* MMEGKALPGGC; // 0x10
	::Il2CppArray<::Class_1_DCE3BC3D0902A8EB*>* PBMKEAJPDIC; // 0x18
	::Il2CppArray<::Class_1_47EE63CB5C4DC8FC_15*>* JEOBJOICGDG; // 0x20
	::UnityEngine::Transform* DHIPFJBEJPI; // 0x28
	::Il2CppArray<::Class_1_80B0DA28ED2E4CFF*>* MBEOOBEPKDI; // 0x30
	::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* MKCFHAFABCO; // 0x38
	::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine HJIOBKHMFHA; // 0x40
	::System::Single LIHFEBIIAEJ; // 0x50
	::UnityEngine::Bounds MLBJBLPHDFE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA68E94695C05BD__CTOR_OFFSET))(this);
	}
};
