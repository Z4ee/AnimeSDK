#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyleGraph; }

#define CLASS_2_4CCB6424CA2373A1_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xD7BF850)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD7BF7F0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD1A27A0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xD1A2720)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD1A25A0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_CA473C7513C5F723_OFFSET UNITYSDK_OFFSET(0xD1A2550)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xD1A25F0)
#define CLASS_2_4CCB6424CA2373A1__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A2540)

inline static constexpr unsigned int Class_2_4CCB6424CA2373A1_TypeDefinitionIndex = 64718;

class Class_2_4CCB6424CA2373A1 : public ::Class_1_E8293664BB5E691F
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_2_0; // 0x30

	::System::Void _ctor(::Class_1_EED1D87C81F7C2A6* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EED1D87C81F7C2A6*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MunicipalChatActionFreeStyleGraph* Method_2_CA473C7513C5F723()
	{
		return ((::RPG::GameCore::MunicipalChatActionFreeStyleGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_CA473C7513C5F723_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
