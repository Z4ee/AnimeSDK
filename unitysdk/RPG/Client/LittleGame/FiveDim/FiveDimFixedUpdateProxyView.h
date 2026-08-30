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

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC431C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AC42EB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x1AC43060)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_A5D032209732E69F_OFFSET UNITYSDK_OFFSET(0x1AC432A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AC430C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC43320)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedUpdateProxyView_TypeDefinitionIndex = 76703;

	class FiveDimFixedUpdateProxyView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Coroutine* FNADMCIINLH; // 0x208
		::RPG::Client::FiveDimManager* EEOHCCOCEDI; // 0x210

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

		::System::Void Method_7_A5D032209732E69F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_A5D032209732E69F_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_7_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDUPDATEPROXYVIEW_METHOD_7_5AFFA079DA8B20AA_OFFSET))(this);
		}
	};
}
