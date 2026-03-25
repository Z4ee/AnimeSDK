#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_351;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_1C477FE7FDC66A7C_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x10BB6EE0)
#define CLASS_1_1C477FE7FDC66A7C_GET_BASIC_OFFSET UNITYSDK_OFFSET(0x10BB6EC0)
#define CLASS_1_1C477FE7FDC66A7C_SET_BASIC_OFFSET UNITYSDK_OFFSET(0x10BB6ED0)
#define CLASS_1_1C477FE7FDC66A7C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB6F40)

inline static constexpr unsigned int Class_1_1C477FE7FDC66A7C_TypeDefinitionIndex = 50931;

class Class_1_1C477FE7FDC66A7C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_351* _Basic_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C477FE7FDC66A7C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_351* get_Basic()
	{
		return ((::Class_0_16E4307DCC419505_351*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C477FE7FDC66A7C_GET_BASIC_OFFSET))(this);
	}

	::System::Void set_Basic(::Class_0_16E4307DCC419505_351* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_351*))((::PBYTE)hIl2Cpp + CLASS_1_1C477FE7FDC66A7C_SET_BASIC_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1C477FE7FDC66A7C_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
