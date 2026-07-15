#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseContactEventSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_C902035D45F7BB57_METHOD_2_6D04065ECE67EC03_OFFSET UNITYSDK_OFFSET(0x18ADE560)
#define CLASS_2_C902035D45F7BB57_METHOD_2_E93E17B052B624F8_OFFSET UNITYSDK_OFFSET(0x18ADEC70)
#define CLASS_2_C902035D45F7BB57__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADE3E0)
#define CLASS_2_C902035D45F7BB57__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x18ADE490)
#define CLASS_2_C902035D45F7BB57__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x18ADE970)

inline static constexpr unsigned int Class_2_C902035D45F7BB57_TypeDefinitionIndex = 73124;

class Class_2_C902035D45F7BB57 : public ::RPG::Client::LittleGame::FiveDim::BaseContactEventSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	::Class_1_B4357A1C72BABC6B* Field_2_0; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_C902035D45F7BB57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C902035D45F7BB57__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void Method_2_6D04065ECE67EC03(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_C902035D45F7BB57_METHOD_2_6D04065ECE67EC03_OFFSET))(this, a1);
	}

	::System::Void _UpdatePrevContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C902035D45F7BB57__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void Method_2_E93E17B052B624F8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C902035D45F7BB57_METHOD_2_E93E17B052B624F8_OFFSET))(this, a1, a2);
	}
};
