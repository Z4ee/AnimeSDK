#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_532073A7C89441B0;
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x155DD380)
#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x155DD3C0)
#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x155DD580)
#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_B71EC7803FF07770_OFFSET UNITYSDK_OFFSET(0x155DD900)
#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_D9B69CBFF2C3295F_OFFSET UNITYSDK_OFFSET(0x155DD750)
#define CLASS_1_648C7B1B4B98AEC6_METHOD_1_E94FB3AC6CD51D5D_OFFSET UNITYSDK_OFFSET(0x155DD870)
#define CLASS_1_648C7B1B4B98AEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x155DD440)

inline static constexpr unsigned int Class_1_648C7B1B4B98AEC6_TypeDefinitionIndex = 77560;

class Class_1_648C7B1B4B98AEC6 : public ::System::Object
{
public:
	::Class_1_532073A7C89441B0* BECABMLCIAJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* IPFDFOLOCKD; // 0x18
	::RPG::GameCore::LittleGameLevelConfig* OLNKMNBCDNA; // 0x20

	::System::Void _ctor(::Class_1_532073A7C89441B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_532073A7C89441B0*))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_128774387667156B_OFFSET))(this);
	}

	static ::Class_1_648C7B1B4B98AEC6* Method_1_16E792B668863BDD(::Class_1_532073A7C89441B0* a1)
	{
		return ((::Class_1_648C7B1B4B98AEC6*(*)(::Class_1_532073A7C89441B0*))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_16E792B668863BDD_OFFSET))(a1);
	}

	::RPG::GameCore::LittleGameEntityConfig* Method_1_D9B69CBFF2C3295F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_D9B69CBFF2C3295F_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceRegionConfig* Method_1_E94FB3AC6CD51D5D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_E94FB3AC6CD51D5D_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceRegionConfig* Method_1_B71EC7803FF07770(::System::UInt32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_B71EC7803FF07770_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648C7B1B4B98AEC6_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}
};
