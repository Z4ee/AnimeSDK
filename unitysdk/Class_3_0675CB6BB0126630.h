#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_11AD7A2D72029F1E;
namespace RPG::GameCore { class SO_KeepDistanceMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0675CB6BB0126630_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BA06E0)
#define CLASS_3_0675CB6BB0126630_METHOD_3_66FF6A49D33160A6_OFFSET UNITYSDK_OFFSET(0x11BA0AA0)
#define CLASS_3_0675CB6BB0126630_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BA0760)
#define CLASS_3_0675CB6BB0126630_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BA0CA0)
#define CLASS_3_0675CB6BB0126630_TICK_OFFSET UNITYSDK_OFFSET(0x11BA0BD0)
#define CLASS_3_0675CB6BB0126630__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BA0D50)
#define CLASS_3_0675CB6BB0126630__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA0540)
#define CLASS_3_0675CB6BB0126630___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BA0D90)
#define CLASS_3_0675CB6BB0126630___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11BA0E10)

inline static constexpr unsigned int Class_3_0675CB6BB0126630_TypeDefinitionIndex = 48115;

class Class_3_0675CB6BB0126630 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_KeepDistanceMoveTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0675CB6BB0126630_TypeDefinitionIndex)->GetStaticField(0xADB0);
	}
	::Class_2_11AD7A2D72029F1E* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_3_66FF6A49D33160A6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630_METHOD_3_66FF6A49D33160A6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0675CB6BB0126630___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
