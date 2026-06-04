#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyle; }

#define CLASS_2_48D286EC74E894D5_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xC72CA50)
#define CLASS_2_48D286EC74E894D5_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xC72CD90)
#define CLASS_2_48D286EC74E894D5_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xC72CD30)
#define CLASS_2_48D286EC74E894D5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC72CCD0)
#define CLASS_2_48D286EC74E894D5_METHOD_2_5824D1D160C28A3D_OFFSET UNITYSDK_OFFSET(0xC72C9B0)
#define CLASS_2_48D286EC74E894D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC72CA00)
#define CLASS_2_48D286EC74E894D5_METHOD_2_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xC72CBF0)
#define CLASS_2_48D286EC74E894D5__CTOR_OFFSET UNITYSDK_OFFSET(0xC72C9A0)

inline static constexpr unsigned int Class_2_48D286EC74E894D5_TypeDefinitionIndex = 64717;

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

	::System::Void Method_2_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48D286EC74E894D5_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
