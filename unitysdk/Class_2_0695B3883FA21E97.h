#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0695B3883FA21E97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162DBBA0)
#define CLASS_2_0695B3883FA21E97_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x162DC950)
#define CLASS_2_0695B3883FA21E97_METHOD_2_13D78D8CCC5186FB_OFFSET UNITYSDK_OFFSET(0x162DCA20)
#define CLASS_2_0695B3883FA21E97_METHOD_2_3CD1B8CEB34C52CB_OFFSET UNITYSDK_OFFSET(0x162DC640)
#define CLASS_2_0695B3883FA21E97_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x162DBC10)
#define CLASS_2_0695B3883FA21E97_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x162DC810)
#define CLASS_2_0695B3883FA21E97_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x162DBB30)
#define CLASS_2_0695B3883FA21E97_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x162DC7A0)
#define CLASS_2_0695B3883FA21E97_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x162DC690)
#define CLASS_2_0695B3883FA21E97__CTOR_OFFSET UNITYSDK_OFFSET(0x162DCCC0)

inline static constexpr unsigned int Class_2_0695B3883FA21E97_TypeDefinitionIndex = 66747;

class Class_2_0695B3883FA21E97 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::UnityEngine::Vector4 Field_2_3; // 0x2C
	::UnityEngine::Vector4 Field_2_4; // 0x3C

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
