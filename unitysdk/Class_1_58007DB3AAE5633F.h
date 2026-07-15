#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1156;
class Class_1_B387B2D923497D14;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ITrackPointInfo; }

#define CLASS_1_58007DB3AAE5633F_METHOD_1_142EC1DFA2BBA6E8_OFFSET UNITYSDK_OFFSET(0x18DC9930)
#define CLASS_1_58007DB3AAE5633F_METHOD_1_54D08F5E40CB3D02_OFFSET UNITYSDK_OFFSET(0x18DC9B70)
#define CLASS_1_58007DB3AAE5633F_METHOD_1_BC9469D0AE2CE5A1_OFFSET UNITYSDK_OFFSET(0x18DC9890)

inline static constexpr unsigned int Class_1_58007DB3AAE5633F_TypeDefinitionIndex = 71148;

class Class_1_58007DB3AAE5633F : public ::System::Object
{
public:
	static ::Class_1_B387B2D923497D14* Method_1_BC9469D0AE2CE5A1()
	{
		return ((::Class_1_B387B2D923497D14*(*)())((::PBYTE)hIl2Cpp + CLASS_1_58007DB3AAE5633F_METHOD_1_BC9469D0AE2CE5A1_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_1156* Method_1_142EC1DFA2BBA6E8(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
	{
		return ((::Class_0_16E4307DCC419505_1156*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_58007DB3AAE5633F_METHOD_1_142EC1DFA2BBA6E8_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_1156* Method_1_54D08F5E40CB3D02(::RPG::Client::NavMap::IMapDataSource* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_0_16E4307DCC419505_1156*(*)(::RPG::Client::NavMap::IMapDataSource*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_58007DB3AAE5633F_METHOD_1_54D08F5E40CB3D02_OFFSET))(a1, a2);
	}
};
