#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }

#define CLASS_1_FD21020B0878C0A0_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD271270)
#define CLASS_1_FD21020B0878C0A0_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD271220)
#define CLASS_1_FD21020B0878C0A0_METHOD_1_BA90B35A52D10181_OFFSET UNITYSDK_OFFSET(0xD271290)
#define CLASS_1_FD21020B0878C0A0_METHOD_1_CCA4F1A822757FEE_OFFSET UNITYSDK_OFFSET(0xD2713A0)
#define CLASS_1_FD21020B0878C0A0_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD271280)
#define CLASS_1_FD21020B0878C0A0__CTOR_OFFSET UNITYSDK_OFFSET(0xD271370)

inline static constexpr unsigned int Class_1_FD21020B0878C0A0_TypeDefinitionIndex = 80098;

class Class_1_FD21020B0878C0A0 : public ::System::Object
{
public:
	::RPG::Client::ItemData* KPFKDKLCFKG; // 0x10
	::RPG::Client::ItemDisplayData* CMOLEAFKDGH; // 0x18
	::System::Nullable_1<::System::Int32> _ItemCount_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_ItemCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0_GET_ITEMCOUNT_OFFSET))(this);
	}

	::System::Void set_ItemCount(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0_SET_ITEMCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ItemData* Method_1_BA90B35A52D10181()
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0_METHOD_1_BA90B35A52D10181_OFFSET))(this);
	}

	::System::Object* Method_1_CCA4F1A822757FEE()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD21020B0878C0A0_METHOD_1_CCA4F1A822757FEE_OFFSET))(this);
	}
};
