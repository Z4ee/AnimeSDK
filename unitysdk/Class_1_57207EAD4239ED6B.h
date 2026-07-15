#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_57207EAD4239ED6B_METHOD_1_3367709B8A4965F3_OFFSET UNITYSDK_OFFSET(0x1601F110)
#define CLASS_1_57207EAD4239ED6B_METHOD_1_3B47B864CE8CD355_OFFSET UNITYSDK_OFFSET(0x1601F590)
#define CLASS_1_57207EAD4239ED6B_METHOD_1_AC4D79DA9B317127_OFFSET UNITYSDK_OFFSET(0x1601ECE0)
#define CLASS_1_57207EAD4239ED6B_METHOD_1_CB7C8CEA3CCE1B7A_OFFSET UNITYSDK_OFFSET(0x1601E630)
#define CLASS_1_57207EAD4239ED6B_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x1601E710)
#define CLASS_1_57207EAD4239ED6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1601E670)

inline static constexpr unsigned int Class_1_57207EAD4239ED6B_TypeDefinitionIndex = 53763;

class Class_1_57207EAD4239ED6B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_CB7C8CEA3CCE1B7A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B_METHOD_1_CB7C8CEA3CCE1B7A_OFFSET))(this);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_57207EAD4239ED6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57207EAD4239ED6B*))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC4D79DA9B317127(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B_METHOD_1_AC4D79DA9B317127_OFFSET))(this, a1);
	}

	::System::Void Method_1_3367709B8A4965F3(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B_METHOD_1_3367709B8A4965F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B47B864CE8CD355(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_57207EAD4239ED6B_METHOD_1_3B47B864CE8CD355_OFFSET))(this, a1, a2);
	}
};
