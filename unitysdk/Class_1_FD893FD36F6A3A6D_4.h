#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_422;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_FD893FD36F6A3A6D_4_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x16E6EEF0)
#define CLASS_1_FD893FD36F6A3A6D_4_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x16E6EED0)
#define CLASS_1_FD893FD36F6A3A6D_4_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x16E6EEE0)
#define CLASS_1_FD893FD36F6A3A6D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x16E6EF50)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_4_TypeDefinitionIndex = 59933;

class Class_1_FD893FD36F6A3A6D_4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_422* _Basic_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_4__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_422* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_422*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_4_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_422* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_422*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_4_SET_BASIC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_4_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
