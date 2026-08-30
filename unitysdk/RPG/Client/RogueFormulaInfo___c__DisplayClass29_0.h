#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB7700)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS29_0___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__0_OFFSET UNITYSDK_OFFSET(0xDEB7A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c__DisplayClass29_0_TypeDefinitionIndex = 67218;

	class RogueFormulaInfo___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* changedBuffCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __GetSortedFormulasOnBuffChangeImpl_b__0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__DISPLAYCLASS29_0___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__0_OFFSET))(this, a1);
		}
	};
}
