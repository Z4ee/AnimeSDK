#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/CustomQueryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LightRatioConfig;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA1EADEF38F1022F_METHOD_1_40DE4666DD6AC288_OFFSET UNITYSDK_OFFSET(0xAD18B90)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_77C420C62713B19D_OFFSET UNITYSDK_OFFSET(0xAD19420)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_93BFBC5687B54B1E_OFFSET UNITYSDK_OFFSET(0xAD19680)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_AC6EFCCB88C1EF8A_OFFSET UNITYSDK_OFFSET(0xAD19330)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_D182A069D4F35A35_OFFSET UNITYSDK_OFFSET(0xAD18A50)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_F31D6F2A7D03F213_OFFSET UNITYSDK_OFFSET(0xAD19E40)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xAD19DF0)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xAD19D20)
#define CLASS_1_CA1EADEF38F1022F__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1A220)

inline static constexpr unsigned int Class_1_CA1EADEF38F1022F_TypeDefinitionIndex = 44305;

class Class_1_CA1EADEF38F1022F : public ::System::Object
{
public:
	static ::LightRatioConfig** StaticGet_Field_1_0()
	{
		return (::LightRatioConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA1EADEF38F1022F_TypeDefinitionIndex)->GetStaticField(0x62860);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D182A069D4F35A35()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_D182A069D4F35A35_OFFSET))();
	}

	static ::System::Single Method_1_40DE4666DD6AC288()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_40DE4666DD6AC288_OFFSET))();
	}

	static ::System::Single Method_1_77C420C62713B19D(::RPG::CustomRP::CustomQueryType a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::RPG::CustomRP::CustomQueryType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_77C420C62713B19D_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_93BFBC5687B54B1E(::RPG::CustomRP::CustomQueryType a1)
	{
		return ((::System::Single(*)(::RPG::CustomRP::CustomQueryType))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_93BFBC5687B54B1E_OFFSET))(a1);
	}

	static ::System::Single Method_1_AC6EFCCB88C1EF8A(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Single a2, ::RPG::CustomRP::CustomQueryType a3)
	{
		return ((::System::Single(*)(::RPG::CustomRP::CustomLightQualityFilter, ::System::Single, ::RPG::CustomRP::CustomQueryType))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_AC6EFCCB88C1EF8A_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_1_OFFSET))();
	}

	static ::System::Void Method_1_F31D6F2A7D03F213(::UnityEngine::GameObject* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_F31D6F2A7D03F213_OFFSET))(a1, a2, a3, a4);
	}
};
