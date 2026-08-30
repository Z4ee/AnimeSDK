#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_TEXTMAPSTATIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACBC470)
#define RPG_CLIENT_TEXTMAPSTATIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBC4A0)
#define RPG_CLIENT_TEXTMAPSTATIC___C___COMPILETEXTICONSPATTERN_B__38_0_OFFSET UNITYSDK_OFFSET(0x1ACBC4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic___c_TypeDefinitionIndex = 72863;

	class TextmapStatic___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TextmapStatic___c** StaticGet___9()
		{
			return (::RPG::Client::TextmapStatic___c**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic___c_TypeDefinitionIndex)->GetStaticField(0x56900);
		}
		static ::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*>**)Il2CppClass::FromTypeDefinitionIndex(TextmapStatic___c_TypeDefinitionIndex)->GetStaticField(0x56908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __CompileTextIconsPattern_b__38_0(::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>* a1, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C___COMPILETEXTICONSPATTERN_B__38_0_OFFSET))(this, a1, a2);
		}
	};
}
