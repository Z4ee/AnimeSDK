#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1604A320)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1604A360)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_0_OFFSET UNITYSDK_OFFSET(0x1604A370)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_1_OFFSET UNITYSDK_OFFSET(0x1604A390)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_2_OFFSET UNITYSDK_OFFSET(0x1604A3A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode___c_TypeDefinitionIndex = 65751;

	class GalBubbleStorySequenceNode___c : public ::System::Object
	{
	public:
		static ::MoleMole::GalGame::GalBubbleStorySequenceNode___c** StaticGet___9()
		{
			return (::MoleMole::GalGame::GalBubbleStorySequenceNode___c**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode___c_TypeDefinitionIndex)->GetStaticField(0x3C680);
		}
		static ::System::Func_2<::System::String*, ::System::Single>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode___c_TypeDefinitionIndex)->GetStaticField(0x3C688);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode___c_TypeDefinitionIndex)->GetStaticField(0x3C690);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode___c_TypeDefinitionIndex)->GetStaticField(0x3C698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetDurationInSecExceptCommonDelay_b__7_0(::System::String* v)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_0_OFFSET))(this, v);
		}

		::System::Boolean _GetDurationInSecExceptCommonDelay_b__7_1(::System::String* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_1_OFFSET))(this, v);
		}

		::System::Single _GetDurationInSecExceptCommonDelay_b__7_2(::System::String* c)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE___C__GETDURATIONINSECEXCEPTCOMMONDELAY_B__7_2_OFFSET))(this, c);
		}
	};
}
