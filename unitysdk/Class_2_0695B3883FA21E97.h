#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0695B3883FA21E97_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5F7EB0)
#define CLASS_2_0695B3883FA21E97_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xB5F8C60)
#define CLASS_2_0695B3883FA21E97_METHOD_2_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0xB5F8D30)
#define CLASS_2_0695B3883FA21E97_METHOD_2_3CD1B8CEB34C52CB_OFFSET UNITYSDK_OFFSET(0xB5F8950)
#define CLASS_2_0695B3883FA21E97_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xB5F7F20)
#define CLASS_2_0695B3883FA21E97_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB5F8B20)
#define CLASS_2_0695B3883FA21E97_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB5F7E40)
#define CLASS_2_0695B3883FA21E97_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB5F8AB0)
#define CLASS_2_0695B3883FA21E97_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xB5F89A0)
#define CLASS_2_0695B3883FA21E97__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F8FD0)

inline static constexpr unsigned int Class_2_0695B3883FA21E97_TypeDefinitionIndex = 69849;

class Class_2_0695B3883FA21E97 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Transform* KJECKLAEOIA; // 0x18
	::UnityEngine::Transform* DKHPIIPIHNL; // 0x20
	::UnityEngine::Vector4 DLNODFHBLMD; // 0x28
	::UnityEngine::Vector4 KMIFMAALFKE; // 0x38
	::System::Boolean NELNMBMIEBL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_13D78D8CCC5186FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_13D78D8CCC5186FB_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginMahJongItem* Method_2_3CD1B8CEB34C52CB()
	{
		return ((::RPG::Client::MonoEffectPluginMahJongItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0695B3883FA21E97_METHOD_2_3CD1B8CEB34C52CB_OFFSET))(this);
	}
};
