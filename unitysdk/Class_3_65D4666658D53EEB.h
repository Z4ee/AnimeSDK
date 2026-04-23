#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEventV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_65D4666658D53EEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9115750)
#define CLASS_3_65D4666658D53EEB_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9115BE0)
#define CLASS_3_65D4666658D53EEB_METHOD_3_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0x9115DC0)
#define CLASS_3_65D4666658D53EEB_METHOD_3_BAE7592D149B0E7F_OFFSET UNITYSDK_OFFSET(0x9115F60)
#define CLASS_3_65D4666658D53EEB__CTOR_OFFSET UNITYSDK_OFFSET(0x91155F0)
#define CLASS_3_65D4666658D53EEB__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x91157A0)
#define CLASS_3_65D4666658D53EEB__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9115C40)
#define CLASS_3_65D4666658D53EEB__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9115D00)
#define CLASS_3_65D4666658D53EEB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9115FE0)
#define CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9116030)
#define CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9116040)
#define CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9116050)

inline static constexpr unsigned int Class_3_65D4666658D53EEB_TypeDefinitionIndex = 48499;

class Class_3_65D4666658D53EEB : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitEntityEventV2*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x68
	::RPG::GameCore::GameEntity* Field_3_0; // 0x70
	::System::String* Field_3_2; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_A57296D1929045EC(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB_METHOD_3_A57296D1929045EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BAE7592D149B0E7F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB_METHOD_3_BAE7592D149B0E7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65D4666658D53EEB___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
