#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyle; }

#define CLASS_2_48D286EC74E894D5_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x18466DD0)
#define CLASS_2_48D286EC74E894D5_METHOD_2_5824D1D160C28A3D_OFFSET UNITYSDK_OFFSET(0x18466D30)
#define CLASS_2_48D286EC74E894D5_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x18466F70)
#define CLASS_2_48D286EC74E894D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18466D80)
#define CLASS_2_48D286EC74E894D5__CTOR_OFFSET UNITYSDK_OFFSET(0x18466D20)

inline static constexpr unsigned int Class_2_48D286EC74E894D5_TypeDefinitionIndex = 66118;

class Class_2_48D286EC74E894D5 : public ::Class_1_E8293664BB5E691F
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_2_0; // 0x30

	::System::Void _ctor(::Class_1_EED1D87C81F7C2A6* a1, ::RPG::GameCore::MunicipalChatActionFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EED1D87C81F7C2A6*, ::RPG::GameCore::MunicipalChatActionFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MunicipalChatActionFreeStyle* Method_2_5824D1D160C28A3D()
	{
		return ((::RPG::GameCore::MunicipalChatActionFreeStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_5824D1D160C28A3D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}
};
