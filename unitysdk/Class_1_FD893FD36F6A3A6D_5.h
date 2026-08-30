#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_FD893FD36F6A3A6D_5_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xBB12F90)
#define CLASS_1_FD893FD36F6A3A6D_5_GET_BASIC_OFFSET UNITYSDK_OFFSET(0xBB12F70)
#define CLASS_1_FD893FD36F6A3A6D_5_SET_BASIC_OFFSET UNITYSDK_OFFSET(0xBB12F80)
#define CLASS_1_FD893FD36F6A3A6D_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBB12FF0)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_5_TypeDefinitionIndex = 62779;

class Class_1_FD893FD36F6A3A6D_5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_457* _Basic_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_457* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_457*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_5_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_5_SET_BASIC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_5_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
