#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_27FD399A3A518993_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x18FE09A0)
#define CLASS_1_27FD399A3A518993_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x18FE0980)
#define CLASS_1_27FD399A3A518993_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x18FE0990)
#define CLASS_1_27FD399A3A518993__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE0EB0)

inline static constexpr unsigned int Class_1_27FD399A3A518993_TypeDefinitionIndex = 62778;

class Class_1_27FD399A3A518993 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_457*>* _Properties_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_457*>* get_Properties()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_457*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_GET_PROPERTIES_OFFSET))(this);
	}

	::System::Void set_Properties(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_457*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_457*>*))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_SET_PROPERTIES_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_27FD399A3A518993_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
