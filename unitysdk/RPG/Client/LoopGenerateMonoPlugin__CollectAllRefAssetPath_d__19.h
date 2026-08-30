#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_SliderTemplate.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LoopGenerateMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x174828F0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17482A20)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17482A80)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17482A30)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174828E0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x174828D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateMonoPlugin__CollectAllRefAssetPath_d__19_TypeDefinitionIndex = 70883;

	class LoopGenerateMonoPlugin__CollectAllRefAssetPath_d__19 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_SliderTemplate>* _sliderTemplates_5__3; // 0x10
		::RPG::Client::LoopGenerateMonoPlugin* __4__this; // 0x18
		::System::String* __2__current; // 0x20
		::System::Int32 _j_5__4; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 _i_5__2; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__COLLECTALLREFASSETPATH_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
