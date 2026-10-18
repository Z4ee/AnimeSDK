#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_FD893FD36F6A3A6D_7_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB998A60)
#define CLASS_1_FD893FD36F6A3A6D_7_GET_BASIC_OFFSET UNITYSDK_OFFSET(0xB998A40)
#define CLASS_1_FD893FD36F6A3A6D_7_SET_BASIC_OFFSET UNITYSDK_OFFSET(0xB998A50)
#define CLASS_1_FD893FD36F6A3A6D_7__CTOR_OFFSET UNITYSDK_OFFSET(0xB998AC0)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_7_TypeDefinitionIndex = 62712;

class Class_1_FD893FD36F6A3A6D_7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_544* _Basic_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_7__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_544* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_7_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_7_SET_BASIC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_7_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
