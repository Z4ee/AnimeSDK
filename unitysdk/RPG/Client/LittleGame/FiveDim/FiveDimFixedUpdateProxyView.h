#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class FiveDimManager; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x99FAD20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x99FA4D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x99FAE80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x99FA850)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x99FA8B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x99FAF60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x99FAFA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x99FAFB0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedUpdateProxyView_TypeDefinitionIndex = 62843;

	class FiveDimFixedUpdateProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Coroutine* Field_7_0; // 0x1C0
		::RPG::Client::FiveDimManager* Field_7_1; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_7_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_7_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_5AFFA079DA8B20AA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Initialize(::Entitas::IContext* P0, ::Class_1_47EE63CB5C4DC8FC_5* P1, ::Entitas::IEntity* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Release(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW___IFIXBASEPROXY_RELEASE_OFFSET))(this, P0);
		}
	};
}
