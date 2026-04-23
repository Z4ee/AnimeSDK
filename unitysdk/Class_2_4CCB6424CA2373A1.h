#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_A795842876E00DE4;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class MunicipalChatActionFreeStyleGraph; }

#define CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11BC8170)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11BC8110)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11BC81D0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x11BC8090)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_970783C362530F48_OFFSET UNITYSDK_OFFSET(0x11BC7EC0)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x11BC7F60)
#define CLASS_2_4CCB6424CA2373A1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BC7F10)
#define CLASS_2_4CCB6424CA2373A1__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC7EB0)

inline static constexpr unsigned int Class_2_4CCB6424CA2373A1_TypeDefinitionIndex = 63797;

class Class_2_4CCB6424CA2373A1 : public ::Class_1_E8293664BB5E691F
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_2_0; // 0x30

	::System::Void _ctor(::Class_1_A795842876E00DE4* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A795842876E00DE4*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MunicipalChatActionFreeStyleGraph* Method_2_970783C362530F48()
	{
		return ((::RPG::GameCore::MunicipalChatActionFreeStyleGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_970783C362530F48_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
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

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4CCB6424CA2373A1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
