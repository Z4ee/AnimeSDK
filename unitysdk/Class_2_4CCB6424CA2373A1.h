#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyleGraph; }

#define CLASS_2_4CCB6424CA2373A1_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x176C80B0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x176C7F30)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_CA473C7513C5F723_OFFSET UNITYSDK_OFFSET(0x176C7EE0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x176C7F80)
#define CLASS_2_4CCB6424CA2373A1__CTOR_OFFSET UNITYSDK_OFFSET(0x176C7ED0)

inline static constexpr unsigned int Class_2_4CCB6424CA2373A1_TypeDefinitionIndex = 66119;

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
};
