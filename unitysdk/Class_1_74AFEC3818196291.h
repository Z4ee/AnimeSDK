#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }

#define CLASS_1_74AFEC3818196291_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x160A6EE0)
#define CLASS_1_74AFEC3818196291_METHOD_1_64070F9D20602D2C_OFFSET UNITYSDK_OFFSET(0x160A7050)
#define CLASS_1_74AFEC3818196291_METHOD_1_90C9A2DFF7F96058_OFFSET UNITYSDK_OFFSET(0x160A6F00)
#define CLASS_1_74AFEC3818196291_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x160A6E70)
#define CLASS_1_74AFEC3818196291_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x160A6EF0)
#define CLASS_1_74AFEC3818196291__CTOR_1_OFFSET UNITYSDK_OFFSET(0x160A7010)
#define CLASS_1_74AFEC3818196291__CTOR_OFFSET UNITYSDK_OFFSET(0x160A6FF0)

inline static constexpr unsigned int Class_1_74AFEC3818196291_TypeDefinitionIndex = 76465;

class Class_1_74AFEC3818196291 : public ::System::Object
{
public:
	::RPG::Client::ItemData* Field_1_0; // 0x10
	::RPG::Client::ItemDisplayData* Field_1_1; // 0x18
	::System::Nullable_1<::System::UInt32> Field_1_2; // 0x20
	::System::Nullable_1<::System::Int32> _ItemCount_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291__CTOR_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_ItemCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291_GET_ITEMCOUNT_OFFSET))(this);
	}

	::System::Void set_ItemCount(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291_SET_ITEMCOUNT_OFFSET))(this, a1);
	}

	::RPG::Client::ItemData* Method_1_90C9A2DFF7F96058()
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291_METHOD_1_90C9A2DFF7F96058_OFFSET))(this);
	}

	::System::Object* Method_1_64070F9D20602D2C()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74AFEC3818196291_METHOD_1_64070F9D20602D2C_OFFSET))(this);
	}
};
