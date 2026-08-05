#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class RoleTweakColorData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR0_OFFSET UNITYSDK_OFFSET(0x17278160)
#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR1_OFFSET UNITYSDK_OFFSET(0x17278250)
#define MOLEMOLE_COLORDATA_GET_TWEAKCOLOR2_OFFSET UNITYSDK_OFFSET(0x172782D0)
#define MOLEMOLE_COLORDATA_ISMATCH_OFFSET UNITYSDK_OFFSET(0x172783A0)
#define MOLEMOLE_COLORDATA_METHOD_1_56B774DFD857D6B7_OFFSET UNITYSDK_OFFSET(0x172781D0)
#define MOLEMOLE_COLORDATA_METHOD_1_B3B4D0DB7D9B7A2C_OFFSET UNITYSDK_OFFSET(0x172783F0)
#define MOLEMOLE_COLORDATA_METHOD_1_C4D4393255477B34_OFFSET UNITYSDK_OFFSET(0x17278610)
#define MOLEMOLE_COLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17278350)

namespace MoleMole
{
	inline static constexpr unsigned int ColorData_TypeDefinitionIndex = 60194;

	class ColorData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>** StaticGet_tweakColorConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RoleTweakColorData*>**)Il2CppClass::FromTypeDefinitionIndex(ColorData_TypeDefinitionIndex)->GetStaticField(0x3F350);
		}
		::System::Int32 avatarId; // 0x10
		::UnityEngine::Color unlockColor; // 0x14
		::System::String* bgPath; // 0x28
		::UnityEngine::Color coreLevelColor; // 0x30
		::UnityEngine::Color coreBgColor; // 0x40
		::System::String* tweakColorKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR0_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor1()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR1_OFFSET))(this);
		}

		::UnityEngine::Color get_TweakColor2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_GET_TWEAKCOLOR2_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_ISMATCH_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_B3B4D0DB7D9B7A2C(::System::Int32 a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_METHOD_1_B3B4D0DB7D9B7A2C_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_C4D4393255477B34()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_METHOD_1_C4D4393255477B34_OFFSET))(this);
		}

		::UnityEngine::Color Method_1_56B774DFD857D6B7(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COLORDATA_METHOD_1_56B774DFD857D6B7_OFFSET))(this, a1);
		}
	};
}
