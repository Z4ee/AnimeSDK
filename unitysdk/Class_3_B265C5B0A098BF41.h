#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_B265C5B0A098BF41_METHOD_3_5A608339ECD0DAF1_OFFSET UNITYSDK_OFFSET(0x18339040)
#define CLASS_3_B265C5B0A098BF41_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x18338FC0)
#define CLASS_3_B265C5B0A098BF41__CTOR_OFFSET UNITYSDK_OFFSET(0x18339010)

inline static constexpr unsigned int Class_3_B265C5B0A098BF41_TypeDefinitionIndex = 19978;

class Class_3_B265C5B0A098BF41 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B265C5B0A098BF41__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B265C5B0A098BF41*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B265C5B0A098BF41*&))((::PBYTE)hIl2Cpp + CLASS_3_B265C5B0A098BF41_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5A608339ECD0DAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B265C5B0A098BF41* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B265C5B0A098BF41*))((::PBYTE)hIl2Cpp + CLASS_3_B265C5B0A098BF41_METHOD_3_5A608339ECD0DAF1_OFFSET))(a1, a2);
	}
};
