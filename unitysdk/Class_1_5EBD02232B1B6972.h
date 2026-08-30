#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyGridType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyBaseGridItemData; }

#define CLASS_1_5EBD02232B1B6972_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x18FAF8F0)
#define CLASS_1_5EBD02232B1B6972_METHOD_1_2DAF1B35D336C98B_OFFSET UNITYSDK_OFFSET(0x18FAF6C0)
#define CLASS_1_5EBD02232B1B6972_METHOD_1_796A60B8015CCE94_OFFSET UNITYSDK_OFFSET(0x18FAF760)
#define CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x18FAF8A0)
#define CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_2_OFFSET UNITYSDK_OFFSET(0x18FAF910)
#define CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18FAF850)
#define CLASS_1_5EBD02232B1B6972_SET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x18FAF900)
#define CLASS_1_5EBD02232B1B6972__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAF750)

inline static constexpr unsigned int Class_1_5EBD02232B1B6972_TypeDefinitionIndex = 62384;

class Class_1_5EBD02232B1B6972 : public ::System::Object
{
public:
	::RPG::GameCore::AlleyBaseGridItemData* CKNHLLFEJAC; // 0x10
	::RPG::Client::AlleyGridType _GridType_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972__CTOR_OFFSET))(this);
	}

	static ::Class_1_5EBD02232B1B6972* Method_1_2DAF1B35D336C98B(::RPG::GameCore::AlleyBaseGridItemData* a1)
	{
		return ((::Class_1_5EBD02232B1B6972*(*)(::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_METHOD_1_2DAF1B35D336C98B_OFFSET))(a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::RPG::Client::AlleyGridType get_GridType()
	{
		return ((::RPG::Client::AlleyGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_GET_GRIDTYPE_OFFSET))(this);
	}

	::System::Void set_GridType(::RPG::Client::AlleyGridType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyGridType))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_SET_GRIDTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_METHOD_1_AA2D3E889C8A52CA_2_OFFSET))(this);
	}

	::System::Void Method_1_796A60B8015CCE94(::RPG::GameCore::AlleyBaseGridItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + CLASS_1_5EBD02232B1B6972_METHOD_1_796A60B8015CCE94_OFFSET))(this, a1);
	}
};
