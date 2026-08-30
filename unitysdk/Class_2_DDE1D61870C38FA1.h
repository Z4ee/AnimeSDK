#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_775;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_2_DDE1D61870C38FA1_GET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1572B920)
#define CLASS_2_DDE1D61870C38FA1_METHOD_2_4352DFF1238F052B_OFFSET UNITYSDK_OFFSET(0x1572BC80)
#define CLASS_2_DDE1D61870C38FA1_METHOD_2_C681656EABD8DE71_OFFSET UNITYSDK_OFFSET(0x1572B940)
#define CLASS_2_DDE1D61870C38FA1_SET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x1572B930)
#define CLASS_2_DDE1D61870C38FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1572BD10)

inline static constexpr unsigned int Class_2_DDE1D61870C38FA1_TypeDefinitionIndex = 62782;

class Class_2_DDE1D61870C38FA1 : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::GameCore::FixPoint>
{
public:
	::Class_0_16E4307DCC419505_775* _PropertyRepository_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_775* get_PropertyRepository()
	{
		return ((::Class_0_16E4307DCC419505_775*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_GET_PROPERTYREPOSITORY_OFFSET))(this);
	}

	::System::Void set_PropertyRepository(::Class_0_16E4307DCC419505_775* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_775*))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_SET_PROPERTYREPOSITORY_OFFSET))(this, a1);
	}

	::System::Void Method_2_C681656EABD8DE71(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_METHOD_2_C681656EABD8DE71_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* Method_2_4352DFF1238F052B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_METHOD_2_4352DFF1238F052B_OFFSET))(this, a1);
	}
};
