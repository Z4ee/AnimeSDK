#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/CustomQueryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LightRatioConfig;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA1EADEF38F1022F_METHOD_1_4E0398023B66381A_OFFSET UNITYSDK_OFFSET(0x1637E060)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_933D0C6EB2CB1CBE_OFFSET UNITYSDK_OFFSET(0x1637D5F0)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_93BFBC5687B54B1E_OFFSET UNITYSDK_OFFSET(0x1637E310)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_AC6EFCCB88C1EF8A_OFFSET UNITYSDK_OFFSET(0x1637DF70)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_D182A069D4F35A35_OFFSET UNITYSDK_OFFSET(0x1637D4B0)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_F31D6F2A7D03F213_OFFSET UNITYSDK_OFFSET(0x1637ECA0)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x1637EC50)
#define CLASS_1_CA1EADEF38F1022F_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x1637EB80)
#define CLASS_1_CA1EADEF38F1022F__CTOR_OFFSET UNITYSDK_OFFSET(0x1637F070)

inline static constexpr unsigned int Class_1_CA1EADEF38F1022F_TypeDefinitionIndex = 48020;

class Class_1_CA1EADEF38F1022F : public ::System::Object
{
public:
	static ::LightRatioConfig** StaticGet_EABKOHGCHFP()
	{
		return (::LightRatioConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA1EADEF38F1022F_TypeDefinitionIndex)->GetStaticField(0x58C60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D182A069D4F35A35()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_D182A069D4F35A35_OFFSET))();
	}

	static ::System::Single Method_1_933D0C6EB2CB1CBE()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_933D0C6EB2CB1CBE_OFFSET))();
	}

	static ::System::Single Method_1_4E0398023B66381A(::RPG::CustomRP::CustomQueryType a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::RPG::CustomRP::CustomQueryType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA1EADEF38F1022F_METHOD_1_4E0398023B66381A_OFFSET))(a1, a2);
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
