#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MainCityRewardPopShow; }

#define CLASS_1_35C83C9A6FC7AE7F_METHOD_1_E02E812FB881C187_OFFSET UNITYSDK_OFFSET(0x169FE980)

inline static constexpr unsigned int Class_1_35C83C9A6FC7AE7F_TypeDefinitionIndex = 76208;

class Class_1_35C83C9A6FC7AE7F : public ::System::Object
{
public:
	static ::MoleMole::MainCityRewardPopShow* Method_1_E02E812FB881C187(::MoleMole::MainCityRewardPopShow* a1)
	{
		return ((::MoleMole::MainCityRewardPopShow*(*)(::MoleMole::MainCityRewardPopShow*))((::PBYTE)hIl2Cpp + CLASS_1_35C83C9A6FC7AE7F_METHOD_1_E02E812FB881C187_OFFSET))(a1);
	}
};
