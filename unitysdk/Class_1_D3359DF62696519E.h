#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC118B78FC4216B;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D3359DF62696519E_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165032C0)
#define CLASS_1_D3359DF62696519E_METHOD_1_21C3D134FF40F45A_1_OFFSET UNITYSDK_OFFSET(0x16503440)
#define CLASS_1_D3359DF62696519E_METHOD_1_21C3D134FF40F45A_OFFSET UNITYSDK_OFFSET(0x165032E0)
#define CLASS_1_D3359DF62696519E_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x165032D0)
#define CLASS_1_D3359DF62696519E__CTOR_OFFSET UNITYSDK_OFFSET(0x165035A0)

inline static constexpr unsigned int Class_1_D3359DF62696519E_TypeDefinitionIndex = 79548;

class Class_1_D3359DF62696519E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_2EC118B78FC4216B*>* _Attributes_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_2EC118B78FC4216B*>* get_Attributes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_2EC118B78FC4216B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_GET_ATTRIBUTES_OFFSET))(this);
	}

	::System::Void set_Attributes(::System::Collections::Generic::IReadOnlyList_1<::Class_1_2EC118B78FC4216B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_2EC118B78FC4216B*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_SET_ATTRIBUTES_OFFSET))(this, a1);
	}

	::System::Void Method_1_21C3D134FF40F45A(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_METHOD_1_21C3D134FF40F45A_OFFSET))(this, a1);
	}

	::System::Void Method_1_21C3D134FF40F45A_1(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_METHOD_1_21C3D134FF40F45A_1_OFFSET))(this, a1);
	}
};
