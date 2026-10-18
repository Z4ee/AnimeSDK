#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_0E33B58C05D5CF5F_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x164E18A0)
#define CLASS_1_0E33B58C05D5CF5F__CCTOR_OFFSET UNITYSDK_OFFSET(0x164E18F0)
#define CLASS_1_0E33B58C05D5CF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x164E1890)

inline static constexpr unsigned int Class_1_0E33B58C05D5CF5F_TypeDefinitionIndex = 51994;

class Class_1_0E33B58C05D5CF5F : public ::System::Object
{
public:
	static ::Class_1_0E33B58C05D5CF5F** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_0E33B58C05D5CF5F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0E33B58C05D5CF5F_TypeDefinitionIndex)->GetStaticField(0x30C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E33B58C05D5CF5F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E33B58C05D5CF5F__CCTOR_OFFSET))();
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_0E33B58C05D5CF5F_GETMODIFIER_OFFSET))(this, a1);
	}
};
