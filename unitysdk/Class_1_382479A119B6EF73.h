#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24607AF5B9553561;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class SubMissionInfoConfig; }

#define CLASS_1_382479A119B6EF73_GET_INTERACTENTITYID_OFFSET UNITYSDK_OFFSET(0x10042820)
#define CLASS_1_382479A119B6EF73_METHOD_1_0415EA8EA886405D_OFFSET UNITYSDK_OFFSET(0x10042370)
#define CLASS_1_382479A119B6EF73_METHOD_1_87EFEBDB2709B91C_OFFSET UNITYSDK_OFFSET(0x10042840)
#define CLASS_1_382479A119B6EF73_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x10042140)
#define CLASS_1_382479A119B6EF73_METHOD_1_B0D5C239C98AE201_1_OFFSET UNITYSDK_OFFSET(0x100422C0)
#define CLASS_1_382479A119B6EF73_METHOD_1_B0D5C239C98AE201_OFFSET UNITYSDK_OFFSET(0x100421F0)
#define CLASS_1_382479A119B6EF73_METHOD_1_B64782115EFE4597_OFFSET UNITYSDK_OFFSET(0x100420B0)
#define CLASS_1_382479A119B6EF73_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x100422A0)
#define CLASS_1_382479A119B6EF73_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x10042800)
#define CLASS_1_382479A119B6EF73_METHOD_1_DE0B777A7ED1A7CF_OFFSET UNITYSDK_OFFSET(0x100425D0)
#define CLASS_1_382479A119B6EF73_SET_INTERACTENTITYID_OFFSET UNITYSDK_OFFSET(0x10042830)
#define CLASS_1_382479A119B6EF73__CTOR_OFFSET UNITYSDK_OFFSET(0x10042130)

inline static constexpr unsigned int Class_1_382479A119B6EF73_TypeDefinitionIndex = 68526;

class Class_1_382479A119B6EF73 : public ::System::Object
{
public:
	::Class_1_24607AF5B9553561* Field_1_1; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 _InteractEntityID_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73__CTOR_OFFSET))(this);
	}

	static ::Class_1_382479A119B6EF73* Method_1_B64782115EFE4597(::System::UInt32 a1)
	{
		return ((::Class_1_382479A119B6EF73*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_B64782115EFE4597_OFFSET))(a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::IBigMapIcon* Method_1_0415EA8EA886405D()
	{
		return ((::RPG::Client::IBigMapIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_0415EA8EA886405D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* Method_1_DE0B777A7ED1A7CF()
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_DE0B777A7ED1A7CF_OFFSET))(this);
	}

	::System::UInt32 get_InteractEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_GET_INTERACTENTITYID_OFFSET))(this);
	}

	::System::Void set_InteractEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_SET_INTERACTENTITYID_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::Client::SubMissionData* Method_1_B0D5C239C98AE201()
	{
		return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_B0D5C239C98AE201_OFFSET))(this);
	}

	::RPG::Client::SubMissionData* Method_1_B0D5C239C98AE201_1()
	{
		return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_B0D5C239C98AE201_1_OFFSET))(this);
	}

	::RPG::GameCore::SubMissionInfoConfig* Method_1_87EFEBDB2709B91C()
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382479A119B6EF73_METHOD_1_87EFEBDB2709B91C_OFFSET))(this);
	}
};
