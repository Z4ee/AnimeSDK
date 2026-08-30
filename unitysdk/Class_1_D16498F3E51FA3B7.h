#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D16498F3E51FA3B7_METHOD_1_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0xBB285F0)
#define CLASS_1_D16498F3E51FA3B7_METHOD_1_202C7E85735B79EF_OFFSET UNITYSDK_OFFSET(0xBB28510)
#define CLASS_1_D16498F3E51FA3B7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBB285B0)
#define CLASS_1_D16498F3E51FA3B7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB28570)
#define CLASS_1_D16498F3E51FA3B7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB287C0)

inline static constexpr unsigned int Class_1_D16498F3E51FA3B7_TypeDefinitionIndex = 61147;

class Class_1_D16498F3E51FA3B7 : public ::System::Object
{
public:
	::System::Boolean BDNFDOCHGHP; // 0x10
	::RPG::Client::GamePhaseType CIKCMHJJANL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16498F3E51FA3B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_202C7E85735B79EF(::RPG::Client::GamePhaseType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D16498F3E51FA3B7_METHOD_1_202C7E85735B79EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16498F3E51FA3B7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16498F3E51FA3B7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16498F3E51FA3B7_METHOD_1_107247B6331E64C6_OFFSET))(this);
	}
};
