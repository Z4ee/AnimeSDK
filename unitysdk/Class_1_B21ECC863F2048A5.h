#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_B21ECC863F2048A5_METHOD_1_C98173A7D7D715B5_OFFSET UNITYSDK_OFFSET(0x1CC2AE30)
#define CLASS_1_B21ECC863F2048A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2B060)

inline static constexpr unsigned int Class_1_B21ECC863F2048A5_TypeDefinitionIndex = 13836;

class Class_1_B21ECC863F2048A5 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* IDCGINLDIAD; // 0x10
	::Il2CppArray<::System::UInt32>* GKPHGMMADOJ; // 0x18
	::Il2CppArray<::System::UInt32>* BGGDPGOLLEM; // 0x20
	::RPG::GameCore::LimaoNewsCityType GOKGDDNGGPI; // 0x28
	::System::UInt32 HFGNHCDNPHL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B21ECC863F2048A5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C98173A7D7D715B5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B21ECC863F2048A5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B21ECC863F2048A5*&))((::PBYTE)hIl2Cpp + CLASS_1_B21ECC863F2048A5_METHOD_1_C98173A7D7D715B5_OFFSET))(a1, a2);
	}
};
