#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class Node; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WPPATHFINDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F24A0)
#define NPCCROWD_AI_WPPATHFINDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x109F24E0)
#define NPCCROWD_AI_WPPATHFINDER___C___CCTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x109F24F0)
#define NPCCROWD_AI_WPPATHFINDER___C___CCTOR_B__19_1_OFFSET UNITYSDK_OFFSET(0x109F25D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPPathFinder___c_TypeDefinitionIndex = 44062;

	class WPPathFinder___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::AI::WPPathFinder___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::WPPathFinder___c**)Il2CppClass::FromTypeDefinitionIndex(WPPathFinder___c_TypeDefinitionIndex)->GetStaticField(0x31710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 __cctor_b__19_0(::System::Collections::Generic::List_1<::System::Object*>* list, ::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER___C___CCTOR_B__19_0_OFFSET))(this, list, index);
		}

		::NPCCrowd::AI::Node* __cctor_b__19_1(::System::Collections::Generic::List_1<::System::Object*>* list, ::System::Int32 index)
		{
			return ((::NPCCrowd::AI::Node*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPPATHFINDER___C___CCTOR_B__19_1_OFFSET))(this, list, index);
		}
	};
}
