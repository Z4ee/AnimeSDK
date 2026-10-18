#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_62C238AE6FA0AB3D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3965D2536F81F89A_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0xB83B8A0)
#define CLASS_1_3965D2536F81F89A_GET_MATPATH_OFFSET UNITYSDK_OFFSET(0xB83B8C0)
#define CLASS_1_3965D2536F81F89A_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xB83B8B0)
#define CLASS_1_3965D2536F81F89A__CTOR_OFFSET UNITYSDK_OFFSET(0xB83B8D0)

inline static constexpr unsigned int Class_1_3965D2536F81F89A_TypeDefinitionIndex = 80129;

class Class_1_3965D2536F81F89A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _MatPath_k__BackingField; // 0x10
	::RPG::Client::MechCraft::MechCraftAttributeType _AttributeType_k__BackingField; // 0x18
	::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x1C

	::System::Void _ctor(::Class_1_62C238AE6FA0AB3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_62C238AE6FA0AB3D*))((::PBYTE)hIl2Cpp + CLASS_1_3965D2536F81F89A__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType get_AttributeType()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3965D2536F81F89A_GET_ATTRIBUTETYPE_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftPartType get_PartType()
	{
		return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3965D2536F81F89A_GET_PARTTYPE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_MatPath()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3965D2536F81F89A_GET_MATPATH_OFFSET))(this);
	}
};
