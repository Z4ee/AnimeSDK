#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/ObjectPlayType.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class StaticSceneObjectWidget; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_56BEB9CC1D8E2DDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14186100)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_11D0275BC8CDB628_1_OFFSET UNITYSDK_OFFSET(0x14186840)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_11D0275BC8CDB628_OFFSET UNITYSDK_OFFSET(0x141867A0)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_17DF797C7BADB9F1_OFFSET UNITYSDK_OFFSET(0x14186740)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_4997AEC4BF5EB145_OFFSET UNITYSDK_OFFSET(0x141866A0)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_619F2A2FD9E836DC_OFFSET UNITYSDK_OFFSET(0x141867B0)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_6C58E77C33E0B131_OFFSET UNITYSDK_OFFSET(0x141868A0)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x14186400)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_84CA29AC5D026444_OFFSET UNITYSDK_OFFSET(0x14186850)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_950F65CE5A552DCD_1_OFFSET UNITYSDK_OFFSET(0x14186690)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_950F65CE5A552DCD_OFFSET UNITYSDK_OFFSET(0x141864F0)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_BB04B329C8919768_OFFSET UNITYSDK_OFFSET(0x14186500)
#define CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_F9AAF7C025455ADA_OFFSET UNITYSDK_OFFSET(0x141863B0)
#define CLASS_2_56BEB9CC1D8E2DDD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14186220)
#define CLASS_2_56BEB9CC1D8E2DDD_UPDATE_OFFSET UNITYSDK_OFFSET(0x14186330)
#define CLASS_2_56BEB9CC1D8E2DDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14186390)

inline static constexpr unsigned int Class_2_56BEB9CC1D8E2DDD_TypeDefinitionIndex = 39801;

class Class_2_56BEB9CC1D8E2DDD : public ::Foundation::SingletonDisposable_1<::Class_2_56BEB9CC1D8E2DDD*>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Field_2_0; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9AAF7C025455ADA(::UnityEngine::SceneManagement::Scene a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_F9AAF7C025455ADA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Method_2_950F65CE5A552DCD()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_950F65CE5A552DCD_OFFSET))(this);
	}

	::MoleMole::ScreenPlayer* Method_2_BB04B329C8919768(::UnityEngine::GameObject* a1)
	{
		return ((::MoleMole::ScreenPlayer*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_BB04B329C8919768_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Method_2_950F65CE5A552DCD_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_950F65CE5A552DCD_1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4997AEC4BF5EB145(::MoleMole::SceneObjectStateWidget* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_4997AEC4BF5EB145_OFFSET))(a1);
	}

	::System::Void Method_2_11D0275BC8CDB628(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_11D0275BC8CDB628_OFFSET))(this, a1);
	}

	::System::Void Method_2_619F2A2FD9E836DC(::MoleMole::ScreenPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScreenPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_619F2A2FD9E836DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_7443AD94E7275ABA_OFFSET))(this);
	}

	static ::System::Boolean Method_2_17DF797C7BADB9F1(::SceneObjectType a1)
	{
		return ((::System::Boolean(*)(::SceneObjectType))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_17DF797C7BADB9F1_OFFSET))(a1);
	}

	::System::Void Method_2_11D0275BC8CDB628_1(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_11D0275BC8CDB628_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_84CA29AC5D026444(::ObjectPlayType a1)
	{
		return ((::System::Boolean(*)(::ObjectPlayType))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_84CA29AC5D026444_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_6C58E77C33E0B131(::MoleMole::StaticSceneObjectWidget* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::StaticSceneObjectWidget*))((::PBYTE)hIl2Cpp + CLASS_2_56BEB9CC1D8E2DDD_METHOD_2_6C58E77C33E0B131_OFFSET))(a1);
	}
};
