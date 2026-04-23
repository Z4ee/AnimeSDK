#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_673;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_2_DDE1D61870C38FA1_GET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x11AA65F0)
#define CLASS_2_DDE1D61870C38FA1_METHOD_2_4352DFF1238F052B_OFFSET UNITYSDK_OFFSET(0x11AA6900)
#define CLASS_2_DDE1D61870C38FA1_METHOD_2_C681656EABD8DE71_OFFSET UNITYSDK_OFFSET(0x11AA6610)
#define CLASS_2_DDE1D61870C38FA1_SET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x11AA6600)
#define CLASS_2_DDE1D61870C38FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA6990)

inline static constexpr unsigned int Class_2_DDE1D61870C38FA1_TypeDefinitionIndex = 57815;

class Class_2_DDE1D61870C38FA1 : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::GameCore::FixPoint>
{
public:
	::Class_0_16E4307DCC419505_673* _PropertyRepository_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_673* get_PropertyRepository()
	{
		return ((::Class_0_16E4307DCC419505_673*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_GET_PROPERTYREPOSITORY_OFFSET))(this);
	}

	::System::Void set_PropertyRepository(::Class_0_16E4307DCC419505_673* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_673*))((::PBYTE)hIl2Cpp + CLASS_2_DDE1D61870C38FA1_SET_PROPERTYREPOSITORY_OFFSET))(this, value);
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
