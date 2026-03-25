#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_50D7577ADBD39E1A_METHOD_1_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x10ADD6A0)
#define CLASS_1_50D7577ADBD39E1A_METHOD_1_49A5E237A8190B25_OFFSET UNITYSDK_OFFSET(0x10ADDE60)
#define CLASS_1_50D7577ADBD39E1A_METHOD_1_7BCD2DE92E58AB17_OFFSET UNITYSDK_OFFSET(0x10ADE1B0)
#define CLASS_1_50D7577ADBD39E1A_METHOD_1_7C09BC3ADD2A7890_OFFSET UNITYSDK_OFFSET(0x10ADDB80)
#define CLASS_1_50D7577ADBD39E1A_METHOD_1_CB7C8CEA3CCE1B7A_OFFSET UNITYSDK_OFFSET(0x10ADD5C0)
#define CLASS_1_50D7577ADBD39E1A__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADD600)

inline static constexpr unsigned int Class_1_50D7577ADBD39E1A_TypeDefinitionIndex = 45128;

class Class_1_50D7577ADBD39E1A : public ::System::Object
{
public:
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_CB7C8CEA3CCE1B7A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A_METHOD_1_CB7C8CEA3CCE1B7A_OFFSET))(this);
	}

	::System::Void Method_1_2A38E69140BEF946(::Class_1_50D7577ADBD39E1A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_50D7577ADBD39E1A*))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A_METHOD_1_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C09BC3ADD2A7890(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A_METHOD_1_7C09BC3ADD2A7890_OFFSET))(this, a1);
	}

	::System::Void Method_1_49A5E237A8190B25(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A_METHOD_1_49A5E237A8190B25_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BCD2DE92E58AB17(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_50D7577ADBD39E1A_METHOD_1_7BCD2DE92E58AB17_OFFSET))(this, a1, a2);
	}
};
