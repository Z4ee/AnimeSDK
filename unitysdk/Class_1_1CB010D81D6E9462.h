#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1CB010D81D6E9462_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x11805F70)
#define CLASS_1_1CB010D81D6E9462_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x11805F50)
#define CLASS_1_1CB010D81D6E9462_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x11805F60)
#define CLASS_1_1CB010D81D6E9462__CTOR_OFFSET UNITYSDK_OFFSET(0x11806310)

inline static constexpr unsigned int Class_1_1CB010D81D6E9462_TypeDefinitionIndex = 57811;

class Class_1_1CB010D81D6E9462 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_358*>* _Properties_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB010D81D6E9462__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_358*>* get_Properties()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_358*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB010D81D6E9462_GET_PROPERTIES_OFFSET))(this);
	}

	::System::Void set_Properties(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_358*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_358*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CB010D81D6E9462_SET_PROPERTIES_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1CB010D81D6E9462_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
